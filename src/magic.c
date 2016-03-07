#include <stdio.h>

#include "magic.h"
#include "spells.h"
#include "dice.h"

void magictablea(void) {
	int d100;
	d100 = d(100);
	if (d100 < 51)
		printf("Potion of healing (2d4 + 2) [DM 188]\n");
	else if (d100 < 61)
		printf("'%s' Spell scroll (cantrip) (Save DC 13, +5 Attack) [DM 200]\n", rand0lvl());
	else if (d100 < 71)
		printf("Potion of climbing [DM 187]\n");
	else if (d100 < 91)
		printf("'%s' Spell scroll (1st level) (Save DC 13, +5 Attack) [DM 200]\n", rand1lvl());
	else if (d100 < 95)
		printf("'%s' Spell scroll (2nd level) (Save DC 13, +5 Attack) [DM 200]\n", rand2lvl());
	else if (d100 < 99)
		printf("Potion of greater healing (4d4 +4 [DM 188]\n");
	else if (d100 < 100)
		printf("Bag of holding [DM 153]\n");
	else
		printf("Driftglobe (light source) [DM 166]\n");
};

void magictableb(void) {
	int i;
	int j;
	int d100;
	int d100_2;
	d100 = d(100);
	if (d100 < 16)
		printf("Potion of greater healing (4d4 +4 [DM 188]\n");
	else if (d100 < 23)
		printf("Potion of fire breath (3x, 4d6, Dex DC 13 Save for half, 30' range) [DM 187]\n");
	else if (d100 < 30) {
		switch (d(10)) {
			case  1: printf("Potion of acid resistance (1 hour) [DM 188]"); break;
			case  2: printf("Potion of cold resistance (1 hour) [DM 188]"); break;
			case  3: printf("Potion of fire resistance (1 hour) [DM 188]"); break;
			case  4: printf("Potion of force resistance (1 hour) [DM 188]"); break;
			case  5: printf("Potion of lightning resistance (1 hour) [DM 188]"); break;
			case  6: printf("Potion of necrotic resistance (1 hour) [DM 188]"); break;
			case  7: printf("Potion of poison resistance (1 hour) [DM 188]"); break;
			case  8: printf("Potion of psychic resistance (1 hour) [DM 188]"); break;
			case  9: printf("Potion of radiant resistance (1 hour) [DM 188]"); break;
			case 10: printf("Potion of thunder resistance (1 hour) [DM 188]"); break;
		}
	} else if (d100 < 35)
		printf("%d +1 Arrows [DM 150]\n", (d(6)+d(6)));		
	else if (d100 < 40)
		printf("Potion of animal friendship (1hr, save DC 13) [DM 187]\n");
	else if (d100 < 45)
		printf("Potion of hill giant strength (1hr, STR 21 (+5)) [DM 187]\n");
	else if (d100 < 50)
		printf("Potion of growth (1d4 hours, Enlarge spell) [DM 187]\n");
	else if (d100 < 55)
		printf("Potion of water breathing (1h) [DM 188]\n");
	else if (d100 < 60)
		printf("'%s' Spell scroll (2nd level) (Save DC 13, +5 Attack) [DM 200]\n", rand2lvl());
	else if (d100 < 65)
		printf("'%s' Spell scroll (3rd level) (Save DC 15, +7 Attack) [DM 200]\n", rand3lvl());
	else if (d100 < 68)
		printf("Bag of holding [DM 153]\n");
	else if (d100 < 71)
		printf("Keoghtom's ointment (1d4+1 doses, 2d8+2 healing, cure poison & disease) [DM 179]\n");
	else if (d100 < 74)
		printf("Oil of slipperiness (10 min apply, Freedom of Movement or Greese spell, 8h) [DM 184]\n");
	else if (d100 < 76)
		printf("Dust of disappearance (Invisibility 10' radius, 2d4 minutes) [DM 166]\n");
	else if (d100 < 78)
		printf("Dust of dryness (1d6+4 pinches, 15 cube feet water to pellet, 10d6 DC 13 Con for half) [DM 166]\n");
	else if (d100 < 80)
		printf("Dust of sneezing and choking (see DMG) [DM 167]\n");
	else if (d100 < 82)
		switch (d(4)) {
			case 1: printf("Blue sapphire elemental gem (Conjure Air Elemental) [DM 168]\n"); break;
			case 2: printf("Yellow diamond elemental gem (Conjure Earth Elemental) [DM 168]\n"); break;
			case 3: printf("Red corundum elemental gem (Conjure Fire Elemental) [DM 168]\n"); break;
			case 4: printf("Emerald elemental gem (Conjure Water Elemental) [DM 168]\n"); break;
		}
	else if (d100 < 84)
		printf("Philter of love (see DMG) [DM 184]\n");
	else if (d100 < 85)
		printf("Alchemy jug (once/day named liquid, see DMG) [DM 150]\n");
	else if (d100 < 86)
		printf("Cap of water breathing [DM 157]\n");
	else if (d100 < 87)
		printf("Cloak of the manta ray (water movement and breathing) [DM 159]\n");
	else if (d100 < 88)
		printf("Driftglobe (light source) [DM 166]\n");
	else if (d100 < 89)
		printf("Goggles of night (+60' darkvision) [DM 172]\n");
	else if (d100 < 90)
		printf("Helm of comprehending languages [DM 173]\n");
	else if (d100 < 91)
		printf("Immovable rod (8000# cap) [DM 177]\n");
	else if (d100 < 92)
		printf("Lantern of revealing (6hr/pint of oil, 30' rad, see invisible) [DM 179]\n");
	else if (d100 < 93)
		printf("Mariner's light armor (water movement, life vest) [DM 181]\n");
	else if (d100 < 94)
		printf("Mithral chain shirt medium armor (no disadvantage) [DM 182]\n");
	else if (d100 < 95)
		printf("Potion of poison (3d6/turn, DC 13 Con for half, save each turn) [DM 188]\n");
	else if (d100 < 96)
		printf("Ring of swimming (40' speed)\n");
	else if (d100 < 97) {
		printf("Robe of useful items [DM 195]\n");
		printf("\t- 2x Dagger\n");
		printf("\t- 2x Bullseye lantern (filled and lit)\n");
		printf("\t- 2x Steel mirror\n");
		printf("\t- 2x 10' pole\n");
		printf("\t- 2x Hempen rope (50', coiled)\n");
		printf("\t- 2x Sack\n");
		for (i = 0, j = (d(4)+d(4)+d(4)+d(4)); i < j; i++) {
			d100_2 = d(100);
			if (d100_2 < 9)
				printf("\t- Bag of 100gp\n");
			else if (d100_2 < 16)
				printf("\t- 500gp Silver coffer (1'x6\"x6\")\n");
			else if (d100_2 < 23)
				printf("\t- Iron Door (10'x10' max)\n");
			else if (d100_2 < 31)
				printf("\t- 10 100gp Gems\n");
			else if (d100_2 < 45)
				printf("\t- 24' Wooden Ladder\n");
			else if (d100_2 < 52)
				printf("\t- Riding horse with Saddle Bags\n");
			else if (d100_2 < 60)
				printf("\t- Pit (10 cubic feet)\n");
			else if (d100_2 < 69)
				printf("\t- 4x Potions of Healing (2d4+2)\n");
			else if (d100_2 < 76)
				printf("\t- 12' long Rowboat\n");
			else if (d100_2 < 84)
				switch (d(3)) {
					case 1: printf("'%s' Spell scroll (1nd level) (Save DC 13, +5 Attack) [DM 200]\n", rand1lvl()); break;
					case 2: printf("'%s' Spell scroll (2nd level) (Save DC 13, +5 Attack) [DM 200]\n", rand2lvl()); break;
					case 3: printf("'%s' Spell scroll (3nd level) (Save DC 15, +7 Attack) [DM 200]\n", rand3lvl()); break;
				}
			else if (d100_2 < 91)
				printf("\t- 2x Mastiffs\n");
			else if (d100_2 < 97)
				printf("\t- Window (2'x4'x2' deep)\n");
			else
				printf("\t- Portable ram\n");
		}
	} else if (d100 < 98)
		printf("Rope of climbing (60' silk, 3,000# cap) [DM 197]\n");
	else if (d100 < 99)
		printf("Saddle of the cavalier [DM 199]\n");
	else if (d100 < 100)
		printf("Wand of magic detection (3 charge, detect magic, regains 1d3/day) [DM 211]\n");
	else
		printf("Wand of secrets (3 charge, find secret doors and traps, regains 1d3/day) [DM 211]\n");
};

void magictablec(void) {
	int d100;
	int d100_2;
	d100 = d(100);
	if (d100 < 16)
		printf("Potion of superior healing (8d4+8) [DM 188]\n");
	else if (d100 < 23)
		printf("'%s' Spell scroll (4th level) (Save DC 15, +7 Attack) [DM 200]\n", rand4lvl());
	else if (d100 < 28)
		printf("%d +2 Arrows\n", (d(6)+d(6)+d(6)));
	else if (d100 < 33)
		printf("Potion of clairvoyance [DM 187]\n");
	else if (d100 < 38)
		printf("Potion of diminution (1d4 hours) [DM 187]\n");
	else if (d100 < 43)
		printf("Potion of gaseous form (1 hour) [DM 187]\n");
	else if (d100 < 48)
		printf("Potion of frost giant strength (1 hour, STR 23 (+6)) [DM 187]\n");
	else if (d100 < 53)
		printf("Potion of stone giant strength (1 hour, STR 23 (+6)) [DM 187]\n");
	else if (d100 < 58)
		printf("Potion of heroism (1 hour, +10 HP and blessed) [DM 188]\n");
	else if (d100 < 63)
		printf("Potion of invulnerability (1 minute, resist all damage) [DM 188]\n");
	else if (d100 < 68)
		printf("Potion of mind reading (detect thoughts) [DM 188]\n");
	else if (d100 < 73)
		printf("'%s' Spell scroll (5th level) (Save DC 17, +9 Attack) [DM 200]\n", rand5lvl());
	else if (d100 < 76)
		printf("Elixir of health (cures diseases, poisons, and afflictions) [DM 168]\n");
	else if (d100 < 79)
		printf("Oil of etherrealness (10 min to apply, 1 hour) [DM 184]\n");
	else if (d100 < 82)
		printf("Potion of fire giant strength (1 hour, STR 25 (+7)) [DM 187]\n");
	else if (d100 < 85) {
		d100_2 = d(100);
		if (d100_2 < 21)
			printf("Quaal's anchor feather token (holds ship 1 day) [DM 188]\n");
		else if (d100_2 < 36)
			printf("Quaal's bird feather token (500# capacity bird 1 day) [DM 188]\n");
		else if (d100_2 < 51)
			printf("Quaal's fan feather token (5 MPH ship wind 8 hours) [DM 188]\n");
		else if (d100_2 < 66)
			printf("Quaal's swan boat feather token (50'x20' 6 MPH boat 1 day) [DM 188]\n");
		else if (d100_2 < 91)
			printf("Quaal's tree feather token (60' tall, 5' trunk, 20' spread oak tree) [DM 188]\n");
		else
			printf("Quaal's whip feather token (+9 1d6+5 attack, 1 hour) [DM 188]\n");
	} else if (d100 < 88)
		printf("Scroll of protection\n");
	else if (d100 < 90)
		printf("Bag of %d beans [DM 153]\n", (d(4)+d(4)+d(4)));
	else if (d100 < 92)
		printf("%d Beads of force (60' range, 10' rad 5d4 force dam & trap) [DM 154]\n", (d(4)+4));
	else if (d100 < 93)
		printf("Chime of opening (10 uses) [DM 158]\n");
	else if (d100 < 94)
		printf("Decanter of endless water [DM 161]\n");
	else if (d100 < 95)
		printf("Eyes of minute seeing [DM 168]\n");
	else if (d100 < 96)
		printf("Folding boat [DM 170]\n");
	else if (d100 < 97)
		printf("Heward's handy haversack [DM 174]\n");
	else if (d100 < 98)
		printf("Horseshoes of speed [DM 175]\n");
	else if (d100 < 99)
		printf("Necklace of %d fireballs (3rd lvl) [DM 182]\n", d(6)+3);
	else if (d100 < 100)
		printf("Periapt of health (disease immunity) [DM 184]\n");
	else
		printf("Sending stones (1/day) [DM 199]\n");
};
