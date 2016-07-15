/*
 * encounter.c
 *
 * Presents a random Out of the Abyss Underdark encounter based upon the random encounter
 * tables (pp 25-30)
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#include "monsters.h"
#include "utility.h"
#include "dice.h"
#include "magic.h"
#include "art.h"

static void patrol(int num) {
	int i;
	int count = d(4) + 2;
	niceprint("The party encounters one or more duergar patrols.  In each patrol, all but two duegar are invisible.  "
		      "Invisible duergar can sneak up on a character by making a Dexterity (Stealth) check with advantage, "
		      "contested by the character's passive Wisdom (Perception) score.");
	(void)putchar('\n');
	for (i = 0; i < num; num--) {
		duergar(count, count - 2);
	}
};

static void guards(void) {
	niceprint("The characters come upon two duergar guards beating a duergar merchant and shouting accusations "
		      "of heresy. Any Underdark native accompanying the party urges the characters not to intervene on "
		      "merchant's behalf, telling them this isn't their business and warning them that any interference "
		      "might get them arrested or killed. Bystanders look a little surprised or concerned but don't intervene, "
		      "not even to aid the unconscious merchant once the guards leave.");
	(void)putchar('\n');
	niceprint("If the characters investigate the circumstances leading to the assulat, bystanders tell them that one "
		      "of the guards noticed a golden pin the merchant was wearing inside his collar.  Though adornment for "
		      "adornment's sake is something duegar society frowns upon, the guards' violent response was unnatural--"
		      "a hint of the growing madness festering inside the City of Blades.");
	(void)putchar('\n');
	duergar(2, 0);
};

static void gnome(void) {
	niceprint("A female deep gnome named Ariana and her earth elemental bodyguard approach the party. Ariana aims to "
		      "deliver a cargo of gemstones, but she can't find the duergar merchant she's supposed to meet. She "
		      "assumes the characters are smugglers and tries to unload her goods: ten sparkly garnets worth 100gp "
		      "each. Ariana keeps the gems in a bag of holding, which isn't for sale.");
	(void)putchar('\n');
	niceprint("The merchant whom Ariana is looking for was recently arrested and executed for selling stolen "
		      "jewelry. You can decide whether Ariana's interest in the characters attracts the attention of a "
		      "duergar patrol.");
	(void)putchar('\n');
	niceprint("Subsequent occurences of this encounter are with other deep gnome merchants who ignore the characters "
		      "unless approached.  They carry nothing of value");
	(void)putchar('\n');
	deepgnome(1);
	earthelemental(1);
};

static void rioters(void) {
	niceprint("A mob of derro rampages through the streets. Five of them detach from the mob to attach the characters. "
		      "Four duergar patrols arrive when the characters kill the last derro, but they simply nod at the "
		      "characters before repressing the rest of the mob.  Word quickly spreads that the characters helped the "
		      "city guard control the unruly derro scum. At your discretion, give the characters advantage on checks "
		      "made to interact with any duergar in the city until such time as the benefit seems no longer appropriate.");
	(void)putchar('\n');
	derro(5);
	patrol(4);
};

static void emissary() {
	niceprint("A drow proudly wearing the insignia of a drow house travels with an entourage of quaggoth slaves. The "
		      "drow is in Gracklstugh to retrieve a cargo of duergar metalwork and knows nothing about the recent events "
		      "in Velkynvelve.");
	(void)putchar('\n');
	switch (d(3)) {
		case 1:
			niceprint("House Baenre: A current ally of House Xorlarrin and House Mizzrym. Given their affiliation with "
			          "House Mizzrym they know that the characters are escaped prisoners from Velkynvelve and seeks out "
			          "Xalith and warns her that the characters are in Gracklstugh.");
			break;
		case 2:
			niceprint("House Faen Tlabbar: A bitter rival of House Mizzrym. If the characters divulge that they are "
				      "enemies or former prisoners of House Mizzrym, the drow warn the party about Xalith");
			break;
		case 3:
			niceprint("Xorlarrin: A current ally of House Baenre and House Mizzrym. Given their affiliation with "
			          "House Mizzrym they know that the characters are escaped prisoners from Velkynvelve and seeks out "
			          "Xalith and warns her that the characters are in Gracklstugh.");
			break;
		default:
			printf("Impossible drow house\n");
			exit(EXIT_FAILURE);
	}
	(void)putchar('\n');
	drow(1);
};

static void madduergar() {
	niceprint("The characters encounter a duergar afflicted with a form of indefinite madness.");
	(void)putchar('\n');
	switch(d(5)) {
		case 1:
			niceprint("The duergar is a merchant desperate to sell his wares, convinced that his life depends upon it.");
			break;
		case 2:
			niceprint("The duergar is a street sweaper who hounds the characters while accusing them of being spies "
				      "and working for the drow.");
			break;	
		case 3:
			niceprint("The duergar is a cloaked guard who thinks he's Deepking Horgar Steelshadow V. He tries to draft "
				      "the party to help him slay Themberchaud, convinced that the dragon is possessed by a demon lord.");
			break;
		case 4:
			niceprint("The duergar is a merchant who accuses the characters of theft and calls out for a duergar patrol "
				      "to arrest them.");
			break;
		case 5:
			niceprint("The duergar is a weaponsmith convinced that one of the characters is a long-lost member of her "
				      "clan and who insists on giving the party food and shelter.");
			break;
	}
	(void)putchar('\n');
	duergar(1, 0);
};

static void merchants() {
	niceprint("The characters encounter a group of orc merchants who have come to Gracklstugh as caravan guards, and see "
		      "the characters as a chance to bully some surface dwellers.  The orcs try to goad the characters into striking "
		      "first, then quickly stand down, knowing that a patrol will arrive in a few rounds after the combat starts.");
	printf("\nThe patrol arrives %d rounds after a fight breaks out.\n\n", d(6));
	orc(d(4)+1);
	(void)putchar('\n');
	patrol(1);
};

static void caravan() {
	niceprint("The characters encounter a group of duergar slavers hearding unarmed slaves.  The slaves wear iron collars "
		      "manacles similar to the ones worn by the characters in Velkynvele.");
	(void)putchar('\n');
	duergar(d(4)+1, 0);
	printf("Slaves:\n\n");
	switch(6) {
		case 1:
			human(d(4)+d(4));
			break;
		case 2:
			shielddwarf(d(4)+d(4)+d(4));
			break;
		case 3:
			halfling(d(4)+d(4));
			break;
		case 4:
			goblin(d(6)+d(6)+d(6));
			break;
		case 5:
			grimlock(d(6)+d(6));
			break;
		case 6:
			kobold(d(6)+d(6)+d(6));
			break;
	}
};

static void handlers() {
	niceprint("A group of duergar teamsters herd a clutch of male steeders.");
	(void)putchar('\n');
	duergar(d(4)+1, 0);
	malesteeder(d(6)+d(6));
	if (d(2) == 1) {
		(void)putchar('\n');
		niceprint("The a few steeders start attacking nearby characters or bystanders.  The duergar keep the rest of the "
			      "clutch in check, but they clamor for the characters' arrest if even one of the arachnids is killed. A "
			      "nearby patrol hears the teamsters' clamor and arrives a few rounds later");
		printf("\n%d steeder(s) attacks\n\n", d(4));
	    printf("The patrol arrives in %d rounds\n\n", d(6));
		(void)putchar('\n');
	    patrol(1);
	}
};

static void themberchaud() {
	niceprint("An adult red dragon, Themberchaud, is out on his regular rounds, keeping the city's forges aflame. "
		      "Themberchaud has long been keeping his eye out for mercenaries in the city that could be bent to his service.  "
		      "If he spots the characters, he might take an interest in them.");
};

static void creature_encounter(void) {

	unsigned int d20 = d(20);

	switch (d20) {
		case  1:
		case  2:
			guards();
			break;
		case  3:
		case  4:
			gnome();
			break;
		case  5:
		case  6:
		case  7:
			rioters();
			break;
		case  8:
		case  9:
			emissary();
			break;
		case 10:
		case 11:
		case 12:
			patrol(1);
			break;
		case 13:
		case 14:
			madduergar();
			break;
		case 15:
		case 16:
			merchants();
			break;
		case 17:
		case 18:
			caravan();
			break;
		case 19:
			handlers();
			break;
		case 20:
			themberchaud();
			break;
		default:
			printf("Impossible encounter of %d\n", d20);
			exit(EXIT_FAILURE);
	}
}


static void random_encounter(void) {

	unsigned d20;

	d20 = d(20);

//	if (d20 < 16) {
//		printf("No encounter\n");
//		return;
//	}

	creature_encounter();

}


int main(void) {
	clearconsole();
	srand(time(NULL));
 	random_encounter();
 	(void)putchar('\n');
 	exit(EXIT_SUCCESS);
}