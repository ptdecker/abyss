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

static void creature_encounter(void) {

	unsigned d4  = d( 4);
	unsigned d12 = d(12);
	unsigned d20 = d(20);
	unsigned i, j;

	switch (d12) {
		case  1: 
			aquatroll(1);
			break;
		case  2:
			darkmantle(d(4)+d(4));
			break;
		case  3:
			duergar(d(4)+2);
			niceprint("The duergar are traveling in a keelboat traversing the lake on business. The "
				      "gray dwarves parley with the adventurers--or attack them if the opportunity looks "
				      "ripe to capture them and sell them as slaves in Gracklstugh. If the duergar suprise "
				      "all the characters, they turn invisible, making it appear that their boat is "
				      "abandoned so as to lure the adventurers on board before they attack.\n\n");
			if (10 < d20 && d20 < 14)
				printf("The keelboat carries %d pounds of unrefined iron ore.\n\n", 100 * d(20));
			else if (13 < d20 && d20 < 17)
				printf("The keelboat carries %d zurkhwood crates filled with mining tools.\n\n", d(4));
		    else if (16 < d20 && d20 < 20)
		    	printf("The keelboat carries %d zurkhwood crates filled with harvested fungi.\n\n", d(4)+d(4));
		    else if (d20 == 20) {
		    	printf("The keelboat carries a locked iron chest containing:\n\n");
		    	printf("\t%d gp\n", 100 * (d(6)+d(6)+d(6)));
		    	(void)putchar('\t');
		    	magictableb();
		    	(void)putchar('\n');
		    	printf("Chest: AC 19, %d hp\n", d(6)+d(6)+d(6));
		    	printf("Lock : AC 19, %d hp\n\n", d(4)+d(4));
		    }
			break;
		case  4:
			niceprint("Nancy Plunk is a green hag who likes to taunt and lead travelers astray. She "
				      "might instead bargain with the characters with her knowledge of the Darklake, "
				      "especially if her life or freedom is at stake. If this encounter occurs again, "
				      "it might be with one of her sisters, Maven Delve or Dame Spiderwort.\n\n");
			greenhag(1);
			break;
		case  5:
			grell(1);
			break;
		case  6:
		case  7:
			ixitxachitl(d(6)+2);
			niceprint("They attack any party member in the water. Otherwise, they follow the party "
				      "and wait for an opportunity to strike. If denied a meal for too long, they "
				      "begin to gnaw on the hull of a boat or the underside of a raft, hoping to "
				      "sink it (this tactic is ineffective against craft with a high damage threshold.\n\n");
			break;
		case  8:
			kuotoa(d(4));
			niceprint("The kuo-toa are traveling in a keelboat toward Sloopidoop (or away from the town "
				      "if it has been attacked). If the characters have not been to Sloopidoop, the kuo-toa "
                      "might try to capture them and bring them there.\n\n");
			if (15 < d20 && d20 < 18) {
				j = 0;
				for (i = 0; i < d4; i++)
					j += (d(2)==1) ? 0 : (d(6)+d(6)+d(6));
				if (j == 0)
					printf("The keelboat carries %d empty nets\n\n", d4);
				else
					printf("The keelboat carries %d nets containing %d dead edible quippers\n\n", d4, j);

			} else if (17 < d20 && d20 < 20) {
				j = 0;
				for (i = 0; i < d4; i++)
					j += (d(2)==1) ? 0 : (d(6)+d(6)+d(6));
				if (j == 0) 
					printf("The keelboat carries %d empty nets\n\n", d4);
				else {
					printf("The keelboat carries %d nets containing %d living stirges\n\n", d4, j);					
					stirge(j);
				}
		    } else if (d20 == 20) {
		    	printf("The keelboat carries:\n\n");
		    	printf("\t%d pieces of broken, barnacle-encrusted statuary\n", d(4));
		    	printf("\teach worth 50 gp and weighing %d pounds\n", 5 * d(4));
		    	printf("\tand each depicting a weird alien creature, a long-forgotten\n");
		    	printf("\tgod, or fragment thereof.\n\n");
		    }
			break;
		case  9:
			merrow(d(4));
			niceprint("These worshipers of Demogorgon have been driven into a frenxy by his arrival "
				      "in the Underdark. They immediately attack, trying to capsize or wreck boats as "
				      "they utter the war cry, \"Blood and salt for the Prince of the Demons!\" in "
				      "the Abyssal language.\n\n");
			niceprint("A merrow can use its action to capsize a bot or raft within 5 feet of it. "
				      "Anyone in the boat can thwart the merrow by using a reaction to make a Strength "
				      "check contested by the merrow's Strength check (+4). If the merrow wins the "
				      "contest, the vessel capsizes.\n\n");
			break;
		case 10:
			stirge(d(6)+d(6)+d(6));
			niceprint("If the party is aware of the stirges clinging to the ceiling like bats, the "
				      "characters can make a DC 13 group Dexterity (Stealth) check to slip past the "
				      "stirges without disturbing them. If the group check succeeds, the stirges "
				      "ignore the party. Otherwise, the stirges descend and attack the nearest "
				      "party members.\n\n");
			break;
		case 11:
			quipper(1);
			niceprint("The swarm keeps pace with the characters attacking anyone in the water. "
				      "If an hour passes and no meal has presented itself, the quippers stop "
				      "following the party.\n\n");
			break;
		case 12:
			waterweird(1);
			niceprint("Bound to some long-lost site beneath the surface of the water, this neutral "
				      "evil elemental rises to attack when characters pass by.\n\n");
			switch (d(3)) {
				case 1:
					niceprint("The water weird is guarding a sunken alter dedicated to a forgotten deity.\n");
					break;
				case 2:
					niceprint("The water weird is guarding "
						      "a sunken statue with 500 gp black pearls for eyes; a thief "
						      "who removes one or both gems becomes the target of a contagion "
						      "spell [PH 227].\n\n");
					niceprint("The character makes a DC 14 Constitution save three times--one per turn. "
						      "If they fail all three, then they suffer for 7 days.  If the make all three, "
						      "then the spell ends.  They are affected by the following natural disease:\n\n");
					switch (d(6)) {
						case 1: printf("Blinding sickness\n\n"); break;
						case 2: printf("Filth fever\n\n");       break;
						case 3: printf("Flesh rot\n\n");         break;
						case 4: printf("Mindfire\n\n");          break;
						case 5: printf("Seizure\n\n");           break;
						case 6: printf("Slimy doom\n\n");        break;
						default:
							printf("Impossible contagion condition\n");
							exit(EXIT_FAILURE);
					}
					break;
				case 3:
					niceprint("The water weird is guarding a sunken, sealed, sarcophagus containing "
						      "the following art objects:\n\n");
					for (i = 0; i < d4; i++) {
						printf("%d: ", i + 1);
						art250();
					}
					(void)putchar('\n');
					mummy(1);
					break;
				default:
					printf("Impossible water weird guarding situation\n");
					exit(EXIT_FAILURE);
			}
			break;
		default:
			printf("Impossible creature encounter of %d\n", d12);
			exit(EXIT_FAILURE);
	}
}

static void collision(void) {
	niceprint("The vessel the characters are travelling in is caught in a strong "
		      "current. Characters must make a DC 13 group Dexterity check to avoid "
		      "hitting a wall or other large obstacle directly ahead.  If successful, "
		      "the collision is avoided. Otherwise, the vessel takes bludgeoning "
		      "damage and everyone must succed on a DC 10 Strength or Dexterity saving"
		      "throw to avoid falling overboard.\n\n");
	printf("Potential damage taken: %d\n\n", d(10)+d(10));
}

static void falls(void) {
	niceprint("Characters with a passive Wisdom (Perception) score of 12 or better can "
		      "hear the roar of a waterfall ahead.\n\n");
	printf("Fall Height: %d feet\n", 10 * d(6));
	printf("Fall Pool Depth: %d feet\n\n", 5 * d(6));
	if (d(2) == 1) {
		niceprint("A successful DC 14 group Strength (Athletics) check is neccessary to steer "
			      "or swim away from the falls. Otherwise, the characters go over, falling into "
			      "a pool or river. A character swept over the fall must succeed on a DC 11 "
			      "Dexterity saving through or take 1d6 per 10' fallen. A successful save "
			      "indicates that the creature avoids a hard landing in the water below.\n\n");
	} else {
		niceprint("A duergar-built lock designed to traverse it, in which case there is no risk "
			      "of going over the falls. It takes a successful DC 11 Intelligence (Investigation) "
			      "check to figure out how to operate the lock. Once a lock is opened, it takes 1 hour "
			      "for the water level to lower so the party can proceed.\n\n");
	}
}

static void island(void) {
	niceprint("A small island rises from the water ahead. If it has no hostile creatures, it could "
		      "make a good place for the party to take a long rest\n\n");
	if (d(2) == 1)
		niceprint("The island has one or more types of fungi growing atop it.\n\n");
	else
		niceprint("The island is barren rock.\n\n");
}

static void lowceiling(void) {
	niceprint("The clearance of the cave or passage lowers suddenly to 3 feet above the water's surface. "
		      "Each Medium character must succeed on a DC 10 Dexterity saving throw or take 1d4 "
		      "bludgeoning damage from hitting the ceiling before the passage ends.\n\n");
}

static void rockfall(void) {
	niceprint("Loose rocks fall from the ceiling above. Each character must succeed on a DC 12 "
		      "Dexterity saving throw or be hit by a chunk of falling stone for 2d6 bludgeoning "
		      "damage. If the characters are traveling in a boat or raft, their vessel takes 2d6 "
		      "bludgeoning damage for each successful save; in other words, each rock that "
		      "misses a character hits the boat or raft instead. Roll the damage for each rock "
		      "striking a vessel separately to see if it overcomes the vessel's damage threshold.\n\n");
}

static void current(void) {
	niceprint("The waters here are especially turbulent. If the characters are traveling by boat "
		       "or raft, the crew must succeed on a DC 13 group Dexterity check to maintain control. "
		       "If the group check fails, the vessel takes 2d6 bludgeoning damage, and each occupant "
		       "must succeed on a DC 10 Strength or Dexterity saving throw to avoid falling overboard.\n\n");
}

static void aground(void) {
	niceprint("If the party is traveling by boat or raft, the vessel hits a shallow area or sandbar "
		      "and runs aground. The characters can push the vessel back into the water with a successful "
		      "DC 10 group Strength (Athletics) check.\n\n");
	if (d(2)==1)
		creature_encounter();
}

static void stoneteeth(void) {
	niceprint("If the party is traveling by boat or raft. There is a strong current and stalagmites "
		      "are jutting up from the bottom of a tunnel and are hidden just below the waterline. "
		      "Spotters must succeed on a DC 13 Wisdom (Perception) check to notice the \"stone teeth\" "
		      "allowing the vessel's crew to attempt a DC 12 group Dexterity check to navigate through "
		      "them. If the group check succeeds, the vessel passes through unscathed. Failure to notice "
		      "or navigate through the stone death deals piercing damage to the boat or raft.\n\n");
	printf("Potential damage taken: %d\n\n", d(6)+d(6)+d(6)+d(6)+d(6)+d(6));
}

static void tightpassage(void) {
	niceprint("An especially tight passage is encountered that requires a successful DC 12 group Dexterity "
		      "check to navigate a boat or raft through it. If the group check succeeds, the boat slips "
		      "through. Otherwise, the boat gets stuck, requiring a successful DC 14 group Strength "
		      "(Athletics) check to push it free.\n\n");
	if (d(2)==1) {
		niceprint("If they get stuck, while they are trying to free themselves ");
		creature_encounter();
	}
}

static void whirlpool(void) {
	niceprint("An underwater crevasse or drain creates a small vortex in this area, much like the "
		      "whirlpool effect of the control water spell. Character must make a DC 14 Strength "
		      "(Athletics) check to avoid being drawn in.  The vortex is 50 feet wide at the top, "
		      "25 feet deep, and 5 feet wide at the bottom.  See Players Handbook page 228.\n\n");
}

static void terrain_encounter(void) {

	unsigned d10;

	d10 = d(10);

	switch (d10) {
		case  1: collision();    break;
		case  2: falls();        break;
		case  3: island();       break;
		case  4: lowceiling();   break;
		case  5: rockfall();     break;
		case  6: current();      break;
		case  7: aground();      break;
		case  8: stoneteeth();   break;
		case  9: tightpassage(); break;
		case 10: whirlpool();    break;
		default:
			printf("Impossible terrain encounter of %d\n", d10);
			exit(EXIT_FAILURE);
	}

}

static void random_encounter(void) {

	unsigned d20;

	d20 = d(20);

	if (d20 < 14) {
		printf("No encounter\n");
		return;
	}

	niceprint("If the party is not moving, either anchored or ashore, then re-roll until a creature "
		      "encounter occurs and ignore terrain encounters\n\n");

	if (d20 < 16 || d20 > 17) {
		terrain_encounter();
	}

	if (d20 > 15) {
		creature_encounter();
	}

}


int main(void) {
	clearconsole();
	srand(time(NULL));
 	random_encounter();
 	(void)putchar('\n');
 	exit(EXIT_SUCCESS);
}