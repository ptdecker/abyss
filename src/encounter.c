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

#define LINEWIDTH  60

static char line[LINEWIDTH];

/*
 * clearconsole()
 */

static void clearconsole() {
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
//    if (pos > 0)
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

static void niceprint(char message[]) {

    char c;
    int index = 0;
    int pos = 0;

    while ((c = message[index++]) != (char)'\0') {
        line[pos] = c;
		if (c == '\n') {
            printline(pos);
            pos = 0;
        } else if (++pos >= LINEWIDTH) {
            pos = findblank(pos);
            printline(pos);
            pos = squish(pos);
        }
    }

    return;
}

static unsigned d(unsigned sides) {
	return (rand() % sides + 1);
}

static void skeletons(unsigned count) {
	printf("%d skeletons are encountered\n", count);
}

static void minotaurskeletons(unsigned count) {
	printf("%d minotaur skeletons are encountered\n", count);
}

static void greenslime(unsigned count) {
	printf("%d green slime are encountered\n", count);
}

static void yellowmold(unsigned count) {
	printf("%d yellow mold are encountered\n", count);
}

static void brownmold(unsigned count) {
	printf("%d brown mold are encountered\n", count);
}

static void barlgura(unsigned count) {
	printf("%d balgura are encountered\n", count);
}

static void dretch(unsigned count) {
	printf("%d dreath are encountered\n", count);
}

static void shadowdemon(unsigned count) {
	printf("%d shadow demon are encountered\n", count);
}

static void giantspider(unsigned count) {
	printf("%d giant spider are encountered\n", count);
}

static void carrioncrawler(unsigned count) {
	printf("%d carrion crawler are encountered\n", count);
};

static void firebeetle(unsigned count) {
	printf("%d firebeetle are encountered\n", count);
};


static void rocktopus(unsigned count) {
	printf("%d roctopus are encountered\n", count);
};

static void ochrejelly(unsigned count) {
	printf("%d ochre jelly are encountered\n", count);
};

static void chuul(unsigned count) {
	printf("%d chuul are encountered\n", count);
};

static void grell(unsigned count) {
	printf("%d grell are encountered\n", count);
};

static void grick(unsigned count) {
	printf("%d grick are encountered\n", count);
};

static void orog(unsigned count) {
	printf("%d orog are encountered\n", count);
};

static void piercer(unsigned count) {
	printf("%d piercer are encountered\n", count);
};

static void umberhulk(unsigned count) {
	printf("%d umber hulk are encountered\n", count);
};

static void moonelf(unsigned count) {
	printf("%d moon elf are encountered\n", count);
};

static void shielddwarf(unsigned count) {
	printf("%d shield dwarf are encountered\n", count);
};

static void human(unsigned count) {
	printf("%d human are encountered\n", count);
};

static void goblin(unsigned count) {
	printf("%d goblin are encountered\n", count);
};

static void goblinboss(unsigned count) {
	printf("%d goblin boss are encountered\n", count);	
}

static void gasspore(unsigned count) {
	printf("%d gas spore are encountered\n", count);
};

static void shrieker(unsigned count) {
	printf("%d shrieker are encountered\n", count);
};

static void violetfungi(unsigned count) {
	printf("%d violet fungi are encountered\n", count);
};

static void deepgnome(unsigned count) {
	printf("%d deep gnome are encountered\n", count);
};

static void drow(unsigned count) {
	printf("%d drow are encountered\n", count);
};

static void duergar(unsigned count) {
	printf("%d duergar are encountered\n", count);
};

static void duergarkavalrachni(unsigned count) {
	printf("%d duergar kavalrachni are encountered\n", count);
};

static void stonegiant(unsigned count) {
	printf("%d stone giant are encountered\n", count);
};

static void bandit(unsigned count) {
	printf("%d bandit are encountered\n", count);
};

static void banditcaptain(unsigned count) {
	printf("%d bandit captain are encountered\n", count);
};

static void orc(unsigned count) {
	printf("%d orc are encountered\n", count);
};

static void eyeofgruumsh(unsigned count) {
	printf("%d Eye of Gruumsh orc are encountered\n", count);
};

static void myconid(unsigned count) {
	printf("%d myconid are encountered\n", count);
}

static void drowspore(unsigned count) {
	printf("%d drow spore servants are encountered\n", count);
};

static void	duergarspore(unsigned count) {
	printf("%d duergar spore servants are encountered\n", count);
};

static void hookhorrorspore(unsigned count) {
	printf("%d hook horror spore servants are encountered\n", count);
};

static void quaggothspore(unsigned count) {
	printf("%d quaggoth spore servants are encountered\n", count);
};

static void giantlizard(unsigned count) {
	printf("%d giant lizard are encountered\n", count);
};

static void malesteeder(unsigned count) {
	printf("%d male steeder are encountered\n", count);
};

static void femalesteeder(unsigned count) {
	printf("%d female steeder are encountered\n", count);
};

static void kuotoa(unsigned count) {
	printf("%d kuotoa are encountered\n", count);
};

static void magictablea(void) {
	printf("A magic item from Magic Table A\n");
};

static void magictableb(void) {
	printf("A magic item from Magic Table B\n");
};

static void magictablec(void) {
	printf("A magic item from Magic Table C\n");
};

static void indefinitemadness(void) {
	printf("An indefinite madness\n");
};

static void ambushlair(unsigned d20) {
	int i;
	unsigned d4;
	if (d20 < 11)
		return;
	(void)putchar('\n');
	niceprint("This ambush has occurred in the monster's lair.\n\n");
	if (d20 < 13)
		niceprint("The lair contains a humanoid skeleton or corpse "
			      "clutching a salvagable, non-magical weapon.\n");
	else if (d20 < 15)
		niceprint("The lair contains a humanoid skeleton or corpse "
			      "wearing a salvagable suit of non-magical armor.\n");
	else if (d20 < 18)
		printf("The lair contains %d 50gp gem(s)\n", d(6));
	else if (d20 < 19) {
		niceprint("The lair contains a humanoid skeleton or corpse "
			      "carrying a magical item.\n\n");
		magictableb();
	} else {
		niceprint("The lair contains:\n\n");
		printf("%d 50gp gem(s)\n", (d(6) + d(6)));
		for (i = 0, d4 = d(4); i < d4; i++)
			magictablec();
	}

}

static void ambush(unsigned d20) {
	niceprint("One or more creatures attempt to ambush the party.\n");
	switch (d20) {
		case  1: 
		case  2:
			chuul(1);
			break;
		case  3:
			giantspider(d(6));
			break;
		case  4: 
		case  5:
			grell(1);
			break;
		case  6:
		case  7:
		case  8:
		case  9:
			grick(d(4));
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			orog(d(4));
			break;
		case 16:
		case 17:
			piercer(d(6));
			break;
		case 18:
		case 19:
		case 20:
			umberhulk(1);
			break;
		default:
			printf("Impossible ambush encounter of %d\n", d20);
			exit(EXIT_FAILURE);
	}
	ambushlair(d(20));
};

static void domesticcrawler(void) {
	niceprint("The characters encounter a domesticated carrion crawler scouring "
		      "tunnels and caves for food. They can see that it is outfitted "
		      "with a leather saddle and harness, though there's no sign of the "
		      "rider. A character can approach and mount it without being attacked "
		      "by succeeding on a DC 13 Wisom (Animal Handling) check. While in "
		      "the saddle and harness, a rider can remain mounted on the crawler "
		      "as it crawls across walls and ceilings.\n\n");
	carrioncrawler(1);
};

static void slaves(unsigned d4) {
	niceprint("The characters encounter slaves wandering the Underdark since "
		      "their escape from Gracklstugh or Menzoberranzan.  They are "
		      "scrounging for food and water.\n\n");
	if (d4 < 4) 
		niceprint("They are friendly and will join the party if given food and water.\n\n");
	switch (d4) {
		case 1: moonelf(d(2)); break;
		case 2: shielddwarf(d(3)); break;
		case 3: human(d(4)); break;
		case 4: goblin(d(6)); break;
		default:
			printf("Impossible slave encounter of %d\n", d4);
			exit(EXIT_FAILURE);		
	}
};

static void fungi(unsigned d6) {
	int d4;
	switch (d6) {
		case 1:
		case 2:
			gasspore(d(4));
			d4 = d(4);
			if (d4 == 1) {
				(void)putchar('\n');
				niceprint("The gas spore caries the memory of a dead beholder.\n");
				d4 = d(4);
				switch (d4) {
					case 1:
						niceprint("It is a memory of a tense negotiation "
							      "with drow, ending with the beholder agreeing to allow the "
							      "drow safe passage thorugh \"the Vast Oblivium\" in exchange "
							      "for help ridding its lair of a deep gnome infestation.\n");
						break;
					case 2:
						niceprint("It is a memory of chasing svirfneblin thieves "
							      "through the tunnels of its domain to recover stolen gemstones.\n");
						break;
					case 3:
						niceprint("It is a memory of a fierce battle against "
							      "a wizened drow archmage, ending with the beholder suffering "
							      "a grievous injury.\n");
						break;
					case 4:
						niceprint("It is a memory of spying on a drow ranger "
							       "with two gleaming scimitars and a black, quadrupedal animal "
							       "companion.\n");
						break;
					default:
						printf("Impossible beholder memory %d\n", d4);
						exit(EXIT_FAILURE);
				}
			}
			break;
		case 3:
		case 4:
			shrieker(d(4));
			break;
		case 5:
		case 6:
			violetfungi(d(4));
			break;
		default:
			printf("Impossible fungi encounter of %d\n", d6);
			exit(EXIT_FAILURE);
	}
};

static void madcreature(unsigned d4) {
	int d20;
	niceprint("The party encounters a creature driven insane by the influence "
		      "of the demon lords. If cured of its madness, the creature behaves "
		      "in accordance with its alignment.\n");
	switch (d4) {
		case 1: deepgnome(1);  break;
		case 2: drow(1);       break;
		case 3: duergar(1);    break;
		case 4: stonegiant(1); break;
		default:
			printf("Impossible mad creature encounter of %d\n", d4);
			exit(EXIT_FAILURE);
	}
	indefinitemadness();
	d20 = d(20);
	if (d20 < 11) 
		return;
	(void)putchar('\n');
	printf("\nThe mad creature has something of interest:\n\n");
	if (d20 < 14)
		printf("A 10gp gem\n");
	else if (d20 < 16)
		printf("A gold ring worth 25gp\n");
	else if (d20 < 18)
		printf("An obsidian statue of Lolth worth 100gp\n");
	else if (d20 < 20)
		magictablea();
	else
		magictableb();
};

static void raiders(unsigned d6) {
	int d20;
	niceprint("A group of raiders from the surface ventured into the Underdark looking "
		      "for riches and got lost. They are initially hostile toward the party, "
		      "though clever characters might try bribing them for safe passage or "
		      "information.\n");
	switch (d6) {
		case 1:
		case 2:
			bandit(d(6));
			banditcaptain(1);
			break;
		case 3:
		case 4:
			goblin(d(4)+d(4));
			goblinboss(1);
			break;
		case 5:
		case 6:
			orc(d(6));
			eyeofgruumsh(1);
			break;
		default:
			printf("Impossible raider encounter of %d\n", d6);
			exit(EXIT_FAILURE);
	}
	d20 = d(20);
	if (d20 < 6) 
		return;
	(void)putchar('\n');
	printf("\nThe leader of the group has something of interest:\n\n");
	if (d20 < 11)
		printf("%d 10gp gemstones in a pouch\n", (d(6)+d(6)));
	else if (d20 < 15)
		printf("%d 50gp gemstones in a pouch\n", (d(6)+d(6)));
	else if (d20 < 18)
		printf("%d tourchstalks\n", d(4));
	else if (d20 < 20)
		printf("%d waterorbs\n", d(4));
	else
		magictableb();

};

static void scouts(unsigned d6) {
	switch (d6) {
		case 1:
		case 2:
			niceprint("A drow scount spots the party.  He will attempt to avoid "
				      "notice and take away information regarding the group's location.\n\n");
			drow(1);
			break;
		case 3:
		case 4:
			niceprint("The party encounters adult myconid adult scounts. They are indifferent "
				      "towards the party and unwilling to discuss their mission or their "
				      "traels with the adventurers.\n\n");
			myconid(d(4));
			break;
		case 5:
		case 6:
			niceprint("The party encounters shield dwarfs who are friendly. They are willing "
				      "to give the party a day or two's worth of food and water rations.\n\n");
			shielddwarf(d(6));
			break;
		default:
			printf("Impossible scouts encounter of %d\n", d6);
			exit(EXIT_FAILURE);

	}
};

static void society(unsigned d10) {
	niceprint("The party stumbles upon a member of the Society of Brilliance.\n\n");
	switch (d10) {
		case 1:
		case 2:
			printf("Y the derro savant\n\n");
			break;
		case 3:
		case 4:
			printf("Blurg the orog\n\n");
			break;
		case 5:
		case 6:
			printf("Grazilaxx the mind flayer\n\n");
			break;
		case 7:
		case 8:
			printf("Skriss the troglodyte\n\n");
			break;
		case 9:
		case 10:
			printf("Sloopidoop the kuo-toa archpriest\n\n");
			break;
		default:
			printf("Impossible society encounter of %d\n", d10);
			exit(EXIT_FAILURE);
	}
};

static void sporeservants(unsigned d10) {
	niceprint("One or more creatures killed and reanimated by Zuggtmoy's spores "
		      "observe the characters as they pass by. The spore savants don't "
		      "communicate and don't attack except in self-defense.\n\n");
	switch (d10) {
		case 1:
		case 2:
		case 3:
			drowspore(d(4));
			break;
		case 4:
		case 5:
		case 6:
			duergarspore(d(6));
			break;
		case 7:
		case 8:
			hookhorrorspore(d(4));
			break;
		case 9:
		case 10:
			quaggothspore(d(8));
			break;
		default:
			printf("Impossible spore servant encounter of %d\n", d10);
			exit(EXIT_FAILURE);
	}
};

static void traders(unsigned d4) {
	int numtraders;
	numtraders = d(4) + d(4);
	niceprint("The party encounters traders plying their trade in the tunnels of the "
		     "Underdark, traveling from settlement to settlement.\n\n");
	switch (d4) {
		case 1:
			deepgnome(numtraders);
			if (d(6) < 4) {
				giantlizard((numtraders / 2) + 1);
			}
			break;
		case 2:
			drow(numtraders);
			if (d(6) < 4) {
				giantlizard((numtraders / 2) + 1);
			}
			niceprint("If the drow traders see the adventurers and have the opportunity "
				      "to report it, increase the drow pursuit level by 1.\n");
			break;
		case 3:
			duergar(numtraders);
			if (d(6) < 4) {
				malesteeder((numtraders / 2) + 1);
				if (d(6) < 4) {
					duergarkavalrachni(1);
					femalesteeder(1);
					numtraders++;
				}
			}
			break;
		case 4:
			kuotoa(numtraders);
			break;
		default:
			printf("Impossible trader encounter of %d\n", d4);
			exit(EXIT_FAILURE);
	}
	niceprint("The trader's carry the following which they are willing to sell up "
		      "to 20% of either to the party:\n\n");
	printf("Goods worth %d gp plus %d day(s) of provisions\n", 10*(d(4)+d(4)+d(4)+d(4)+d(4)), 10*numtraders);

};

static void boneyard(void) {
	unsigned d20;
	niceprint("An eerie cavern littered with countless bones of various creatures. "
		      "It is unclear if this is the natural graveyard for some Underdark species "
		      "or the former lair of a fearsome predator. The characters can potentially "
		      "gather useful material for crafting among the bones.\n");
	d20 = d(20);
    if (d20 < 15)
    	return;
    (void)putchar('\n');
    if (d20 < 19)
    	skeletons(d(4) + d(4) + d(4));
    else
		minotaurskeletons(d(3));

}

static void cliff(void) {
	niceprint("A cliff 2d4 x 10 feet high blocks the party's passage, but a rolled-up "
		      "rope lader is visible at the top. If someone can climb the cliff-requiring "
		      "a successful DC 15 Strength (Athletics) check--and toss down the ladder, "
		      "the characters can proceed. Otherwise, they lose a day's travel finding "
		      "another route. If the characters remove the ladder once they are at the "
		      "top, they decrease the drow pursuit level by 1.\n");
}

static void crystal(void) {
	niceprint("The adventurers pass through a faerzress-suffused area containing fist-"
		       "sized chunks of quartz that shed dim light in a 10' radius. A sharp "
		       "blow to one of the crystals, including throwing it so it impacts a hard "
		       "surface, causes it to burst in a 10' radius flash of blinding light. "
		       "Any creature within the radius must succeed on a DC 10 Constitution "
		       "saving throw or be blinded for 1 minute. A creature blinded by this effect "
		       "repeats the Constitution saving throw at the end of each of its turns. "
		       "On a successful save, it is no longer blinded. The characters can "
		       "harvest 3d4 of the crystals, but taking the time to do so increases "
		       "the drow pursuit level by 1.\n");
}

static void fungus(void) {
	niceprint("The adventurers stumble upon a cavern filled with fungi and mushrooms "
		      "of all sizes and types.\n");
}

static void gas(void) {
	niceprint("The adventurers come upon a cavern with a dangerous natural gas leak. "
		      "Any member of the party with a passive Wisdom (Perception) score of 14 "
		      "or higher detects signs of the gas. The characters' travel pace for the "
		      "day is slowed by half as they circumvent the area, but there are no ill "
		      "effects. If the gas goes undetected, each character in the area must "
		      "make a DC 12 Constitution saving throw, taking 1d10 poison damage on "
		      "a failed save, or half as much damage on a successful one. Any open "
		      "flames brought into the area cause the gas to explode. Each creature "
		      "in the explosion must make a DC 15 Dexterity saving throw, taking 3d6 "
		      "fire damage on a failed save, or half as much damage on a successful one.\n");
}

static void gorge(void) {
	niceprint("The characters must make a difficult climb down a gorge 2d4 x100 feet "
		      "deep and up the other side, or find a way around it. Their travel pace "
		      "for the day is slowed by half unless they come up with a plan to cross "
		      "the gorge quickly.\n");
}

static void ledge(void) {
	niceprint("The characters must walk along an 18\"-wide ledge that skirts a ravine "
		      "2d6 x10 feet deep. The party's travel pas for the day is slowed by half, "
		      "and each character must succeed on a DC 10 Dexterity saving throw to "
		      "avoid a fall. Precautions such as roping everyone together let each "
		      "character make the save with advantage. Increase the pursuit leve of the "
		      "drow by 1.\n");
}

static void sounds(void) {
	niceprint("For hours, the party's travel is plagued by terrible shrieks, moans, and "
		      "incoherent gibbering echoing through nearby passages, without any "
		      "apparent origin. Each character must make a successful DC 11 Wisdom "
		      "saving throw. On a failed save, the character's madness level increases "
		      "by 1.\n");
}

static void lava(void) {
	niceprint("As the party traverses a long and winding corridor, a tremor opens up "
		      "a lava-filled fissure behind them. Each character must make a DC 10 "
		      "Dexterity saving throw to avoid the lava swell, taking 6d6 fire damage "
		      "on a failed save. Decrease the drow pursuit level by 1.\n");
}

static void muck(void) {
	niceprint("The adventurers must wade through a broad, 3'-deep pit of slimy muck. "
		      "The muck is difficult terrain and characters have disadvantage on "
		      "Dexterity saving throws while within it, but their travel pace for the "
		      "day is slowed by half if they go around it.\n");
}

static void rockfall(void) {
	niceprint("As the adventurers make their way through a long, twisting cavern, a "
		      "tremor sets off a rockfall. Each party member must attempt three "
		      "DC 12 Dexterity saving throws, taking 3d6 bludgeoning damage on each "
		      "failed save. Any incapacitated creature not moved out of the area is "
		      "buried under rubble, taking an additional 1d6 bludgeoning damage at "
		      "the end of each of its turns until the creature is dug out or dead. "
		      "Decrease the drow pursuit level by 1.\n");
}

static void bridge(void) {
	niceprint("A ravine 2d4x10 feet wide and 2d4x10 feet deep cuts across the "
		      "party's path, spanned by an old rope bridge. If the characters "
		      "cut the bridge after they pass, the drow pursuit level decreases "
		      "by 1.\n");
}

static void ruins(void) {
	niceprint("The adventurers come across a small ruin hidden in the Underdark. "
		      "This might be the creation of a subterranean race or a surface ruin "
		      "that collapsed and sank long ago. If the characters search the ruins, "
		      "there is a 50\% chance of them finding 1d4 trinkets.\n");
}

static void shelter(void) {
	niceprint("The party stumbles upon a cave that is sheltered and easily defended. "
		      "If the characters camp here, they can finish a long rest without any "
		      "chance of an encounter while they are resting.\n");
}

static void sinkhole(void) {
	niceprint("One random party member steps on and collapses a sinkhole, and must "
		      "succeed on a DC 12 Dexterity saving throw to avoid fallign into a "
		      "20'-deep pit and taking 2d6 bludgeoning damage. Climbing out of the "
		      "pit requires a successful DC 15 Strength (Athletics) check.\n");
}

static void slime(void) {
	unsigned d20;
	niceprint("As the adventurers pass through a small cavern, they encounter a patch "
		      "of slime or mold.\n");
    (void)putchar('\n');
	d20 = d(6);
    if (d20 < 4)
    	greenslime(1);
    else if (d20 < 6)
    	yellowmold(1);
    else
		brownmold(1);
}

static void vent(void) {
	niceprint("A hot steam vent erupts beneath a random party member, who must succeed on a "
		      "DC 12 Dexterity saving throw or take 2d6 fire damage.\n");
}

static void stream(void) {
	niceprint("A waterway 2d4 x5' wide cuts accross the party's path. The stream is "
		      "shallow and easily crossed, and the characters can drink and refresh "
		      "their water supplies. Edible fish inhabit the stream, so that the DC "
		      "of any foraging attempts for food in this area is reduced to 10. "
		      "Crossing the stream reduces the drow pursuit level by 1.\n");
}

static void warning(void) {
	unsigned d20;
	niceprint("The characters enter a cavern dotted with stalagmites and stalactites. "
		      "Those with a passive Wisdom (Perception) score of 11 or higher spot "
		      "a sigil carved into one of the stalagmites. The sigil is a drow "
		      "warning sign that means \"Deamons ahead!\" Any non-drow creature "
		      "that touches the symbol must make a DC 10 Wisdom saving throw. On a "
		      "failed save, the character's madness level icnreases by 1.\n");
	d20 = d(20);
    if (d20 < 15)
    	return;
    (void)putchar('\n');
    if (d20 < 17)
    	barlgura(1);
    else if (d20 < 19)
		dretch(d(4)+d(4)+d(4));
	else
		shadowdemon(d(2));
}

static void webs(void) {
	unsigned d6;
	niceprint("Sticky webs fill a passage. The webs extend for hundreds of feet. "
		      "Unless the characters come up with a plan for clearing the webs "
		      "quickly, the party's travel pace for the day is halved as the "
		      "characters are forced to cut their way through or find an "
		      "alternate route.\n");
	d6 = d(6);
    if (d6 < 4)
    	return;
    (void)putchar('\n');
	giantspider(d(4));
}

static void terrain_encounter(void) {

	unsigned d20;

	d20 = d(20);

	switch (d20) {
		case  1: boneyard(); break;
		case  2: cliff();    break;
		case  3: crystal();  break;
		case  4: fungus();   break;
		case  5: gas();      break;
		case  6: gorge();    break;
		case  7: ledge();    break;
		case  8: sounds();   break;
		case  9: lava();     break;
		case 10: muck();     break;
		case 11: rockfall(); break;
		case 12: bridge();   break;
		case 13: ruins();    break;
		case 14: shelter();  break;
		case 15: sinkhole(); break;
		case 16: slime();    break;
		case 17: vent();     break;
		case 18: stream();   break;
		case 19: warning();  break;
		case 20: webs();     break;
		default:
			printf("Impossible terrain encounter of %d\n", d20);
			exit(EXIT_FAILURE);
	}

}

static void creature_encounter(void) {
	unsigned d4, d20;

	d20 = d(20);
	d4 = d(4);

	switch (d20) {
		case  1: 
		case  2:
			ambush(d(20));
			break;
		case  3:
			if (d4 == 1)
				domesticcrawler();
			else
				carrioncrawler(1);
			break;
		case  4: 
		case  5:
			slaves(d(4));
			break;
		case  6:
		case  7:
			fungi(d(6));
			break;
		case  8:
		case  9:
			firebeetle(d(6)+d(6)+d(6));
			break;
		case 10:
		case 11:
			rocktopus(1);
			break;
		case 12:
			madcreature(d(4));
			break;
		case 13:
			ochrejelly(1);
			break;
		case 14:
		case 15:
			raiders(d(6));
			break;
		case 16:
			scouts(d(6));
			break;
		case 17:
			society(d(10));
			break;
		case 18:
			sporeservants(d(10));
			break;
		case 19:
		case 20:
			traders(d(4));
			break;
		default:
			printf("Impossible creature encounter of %d\n", d20);
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
 	exit(EXIT_SUCCESS);
}