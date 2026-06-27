/* works better in unix based -- os */

#include <stdio.h>
#include <math.h>
#include <time.h>

#define WIDTH 80
#define HEIGHT 40
#define PI 3.14159265358979323846

void delay_ns(long nanoseconds) {
    struct timespec req = {0};
    req.tv_sec = 0;
    req.tv_nsec = nanoseconds;
    nanosleep(&req, NULL);
}

int main(void) {
    const char palette[] = " .:-=+*#%@";
    const int palette_size = sizeof(palette) - 1;

    // hide the cursor
    printf("\x1b[?25l");

    float t = 0.0f;

    while (1) {
        printf("\x1b[1;1H");

        float cx1 = WIDTH  / 2.0f + (WIDTH  / 4.0f) * cosf(t * 1.2f);
        float cy1 = HEIGHT / 2.0f + (HEIGHT / 4.0f) * sinf(t * 0.9f);

        float cx2 = WIDTH  / 2.0f + (WIDTH  / 3.0f) * sinf(t * 1.5f);
        float cy2 = HEIGHT / 2.0f + (HEIGHT / 3.0f) * cosf(t * 1.1f);

        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                float dx1 = (x - cx1) * 0.5f;
                float dy1 = y - cy1;
                float dist1 = sqrtf(dx1 * dx1 + dy1 * dy1);

                float dx2 = (x - cx2) * 0.5f;
                float dy2 = y - cy2;
                float dist2 = sqrtf(dx2 * dx2 + dy2 * dy2);

                float wave1 = sinf(dist1 * 0.4f - t * 4.0f);
                float wave2 = sinf(dist2 * 0.3f - t * 5.0f);
                float intensity = (wave1 + wave2 + 2.0f) / 4.0f;

                int color_idx = (int)(intensity * (palette_size - 1));
                if (color_idx < 0) color_idx = 0;
                if (color_idx >= palette_size) color_idx = palette_size - 1;

                putchar(palette[color_idx]);
            }
            putchar('\n');
        }

        t += 0.05f;
        delay_ns(25000000);
    }

    printf("\x1b[?25h");
    return 0;
}
