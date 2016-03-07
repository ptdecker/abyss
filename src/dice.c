#include <stdlib.h>

#include "dice.h"

unsigned d(unsigned sides) {
	return (rand() % sides + 1);
}
