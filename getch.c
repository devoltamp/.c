#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 100

int getch(void);
void ungetch(int c); /* to drop the int part */

int buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0;     /* next free position in buf */

int main(void)
{
	int i = 0;
	char ch;
	puts("Input an integer followed by a char:");
	/* read chars until non digit or EOF */
	while ((ch = getch()) != EOF && isdigit(ch))
		i = 10 * i + ch - 48; /* convert ASCII into int value */

		/* if non digit char was read, push it back into input buffer */
		if (ch != EOF)
			ungetch(ch);

	printf("\n\ni = %d, next char in buffer = %c\n", i, getch());
	return 0;
}

/* getch: get a (possibly pushed back) character */
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

/* ungetch: push a character back onto the input */
void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters \n");
	else
		buf[bufp++] = c;
}
