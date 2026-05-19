/* i still didn't get it how the bufp gets to 1 */

#include <stdio.h>
#include <ctype.h>
#define BUFSIZE 100


int buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0;     /* next free position in buf */

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
    printf("%d\n", bufp);
}

/* ungetch: push a character back onto the input */
void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters \n");
	else
		buf[bufp++] = c;
}

int main(void)
{
	int i = 0;
	char ch;
	puts("input an integer followed by a char:");


	/* read chars until non digit or EOF */
	while ((ch = getch()) != EOF && isdigit(ch))
		i = 10 * i + ch - 48;

		if (ch != EOF)
			ungetch(ch);

	printf("i = %d, next char in buffer = %c\n", i, getch());
    printf("%c\n", ch);

    for (int i = 0; i<BUFSIZE; i++)
        printf("%d", buf[i]);
    printf("\n");
	return 0;
}
