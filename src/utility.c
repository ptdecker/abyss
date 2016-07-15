#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "utility.h"

#define LINEWIDTH  60

static char line[LINEWIDTH];

/*
 * clearconsole()
 */

void clearconsole() {
	printf("\x1B[2J\x1B[f");
}

/*
 * printline()
 * Prints the line until 'pos' column is reached
 */

static void printline(int pos) {
    int i;
    for (i = 0; i < pos; i++)
        (void)putchar(line[i]);
    if (pos > 0)
        (void)putchar('\n');
}

/*
 * findblank()
 * Walks backwards from the current position toward the front of
 * the line looking for the first space character and returns its position
 */

static int findblank(int pos) {
    while (pos > 0 && line[pos] != ' ')
        pos--;
    if (pos == 0)
        return LINEWIDTH;
    else
        return (pos + 1);
}

/*
 * squish()
 * Copy characters starting at 'pos' to the beginning of the line
 * and return the adjusted value of 'pos'.  This compacts the line
 * leaving any text after 'pos' still in the buffer.
 */

static int squish(int pos) {
    int i = 0;
    int j;
    if (pos <= 0 || pos >= LINEWIDTH)
        return 0;
    for (j = pos; j < LINEWIDTH; ++j) {
        line[i] = line[j];
        i++;
    }
    return i;
}

/*
 * niceprint()
 * Print out a message nicely formated
 */

void niceprint(char message[]) {

    char c;
    int index = 0;
    int pos = 0;

    while ((c = message[index++]) != (char)'\0') {
        line[pos] = c;
		if (c == '\n' && pos == 0)
            (void)putchar('\n');
        else if (c == '\n') {
            printline(pos);
            pos = 0;
        } else if (++pos >= LINEWIDTH) {
            pos = findblank(pos);
            printline(pos);
            pos = squish(pos);
        }
    }
    printline(pos);

    return;
}