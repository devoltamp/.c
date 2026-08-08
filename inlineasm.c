/* for unix only */
int main() {
    char buf[1024];
    long n;

    for (;;) {
        // syscall: read(0, buf, sizeof(buf))
        asm volatile (
            "mov $0, %%rax\n"        // syscall number: read
            "mov $0, %%rdi\n"        // fd = stdin
            "mov %1, %%rsi\n"        // buffer
            "mov %2, %%rdx\n"        // size
            "syscall\n"
            "mov %%rax, %0\n"        // return value -> n
            : "=r"(n)
            : "r"(buf), "r"(sizeof(buf))
            : "%rax","%rdi","%rsi","%rdx"
        );

        if (n <= 0) break;

        // syscall: write(1, buf, n)
        asm volatile (
            "mov $1, %%rax\n"        // syscall number: write
            "mov $1, %%rdi\n"        // fd = stdout
            "mov %0, %%rsi\n"        // buffer
            "mov %1, %%rdx\n"        // size
            "syscall\n"
            :
            : "r"(buf), "r"(n)
            : "%rax","%rdi","%rsi","%rdx"
        );
    }

    return 0;
}
