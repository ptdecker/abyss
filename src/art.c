#include <stdlib.h>
#include <stdio.h>

#include "dice.h"

void art250(void) {
	switch (d(10)) {
		case   1: printf("A gold ring set with bloodstones (250 gp)\n"); break;
		case   2: printf("A carved ivory statuette (250 gp)\n"); break;
		case   3: printf("A large gold bracelet (250 gp)\n"); break;
		case   4: printf("A silver necklace with a gemstone pendant (250 gp)\n"); break;
		case   5: printf("A bronze crown (250 gp)\n"); break;
		case   6: printf("A silk robe with gold embroidery (250 gp)\n"); break;
		case   7: printf("A large well-made tapestry (250 gp)\n"); break;
		case   8: printf("A brass mug with jade inlay (250 gp)\n"); break;
		case   9: printf("A box of turquoise animal figures (250 gp)\n"); break;
		case  10: printf("A gold bird cage with electrum filigree (250 gp)\n"); break;
	}
}