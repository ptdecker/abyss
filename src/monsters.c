#include <stdlib.h>
#include <stdio.h>

#include "monsters.h"
#include "dice.h"
#include "utility.h"

static void nicename(unsigned count, char name[], char ref[]) {
	printf("%d %s%s encountered [%s]\n\n", count, name, (count == 1) ? " is" : "s are", ref);
}

void skeletons(unsigned count) {
	int i;
	nicename(count, "skeleton", "MM 272");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, +4 TH, 1d6+2 Dmg (Sword, Bow), poison immune, bludgeoning vulnerable", i + 1, d(8) + d(8) + 4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void minotaurskeletons(unsigned count) {
	int i;
	nicename(count, "minotaur", "MM 273");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + 18);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void greenslime(unsigned count) {
	int i;
	nicename(count, "green slime", "DMG 105");
	for (i = 0; i < count; i++) {
		printf("%d: n/a hp (destroyed by sunlight, cure disease, cold, fire, radiant)", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void yellowmold(unsigned count) {
	int i;
	nicename(count, "yellow mold", "DMG 105");
	for (i = 0; i < count; i++) {
		printf("%d: n/a hp (destroyed by sunlight, fire)", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void brownmold(unsigned count) {
	int i;
	nicename(count, "brown mold", "DMG 105");
	for (i = 0; i < count; i++) {
		printf("%d: n/a hp (destroyed by cold, immune to fire)", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void barlgura(unsigned count) {
	int i;
	nicename(count, "barlgura (demon)", "MM 56");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + 24);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void dretch(unsigned count) {
	int i;
	nicename(count, "dreath (demon)", "MM 57");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6) + d(6) + d(6) + d(6) + 4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void shadowdemon(unsigned count) {
	int i;
	nicename(count, "shadow demon", "MM 64");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 13 AC", i + 1, d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + 12);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void giantspider(unsigned count) {
	int i;
	nicename(count, "giant spider", "MM 328");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 14 AC", i + 1, d(10) + d(10) + d(10) + d(10) + 4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void carrioncrawler(unsigned count) {
	int i;
	nicename(count, "carrion crawler", "MM 37");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 13 AC", i + 1, d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + 18);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void firebeetle(unsigned count) {
	int i;
	nicename(count, "giant fire beetle", "MM 325");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6)+1	);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};


void rocktopus(unsigned count) {
	int i;
	nicename(count, "rocktopus", "MM 333");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 12 AC", i + 1, d(6));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void ochrejelly(unsigned count) {
	int i;
	nicename(count, "ochre jelly", "MM 243");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 8 AC", i + 1, d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + 12);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void chuul(unsigned count) {
	int i;
	nicename(count, "chuul", "MM 40");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 16 AC", i + 1, d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + 33);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void grell(unsigned count) {
	int i;
	nicename(count, "grell", "MM 172");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 12 AC", i + 1, d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + d(8) + 10);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void grick(unsigned count) {
	int i;
	nicename(count, "grick", "MM 173");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 14 AC", i + 1, d(8) + d(8) + d(8) + d(8) + d(8) + d(8));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void orog(unsigned count) {
	int i;
	nicename(count, "orog (orc)", "MM 247");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 18 AC", i + 1, d(8) + d(8) + d(8) + d(8) + d(8) + 20);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void piercer(unsigned count) {
	int i;
	nicename(count, "piercer", "MM 252");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 15 AC", i + 1, d(8) + d(8) + d(8) + 9);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void umberhulk(unsigned count) {
	int i;
	nicename(count, "umber hulk", "MM 292");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 18 AC", i + 1, d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + d(10) + 33);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void moonelf(unsigned count) {
	int i;
	nicename(count, "moon elf (elf)", "");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8) + d(8) + 4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void shielddwarf(unsigned count) {
	int i;
	nicename(count, "shield dwarf (dwarf)", "");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8) + d(8) + 4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void human(unsigned count) {
	int i;
	nicename(count, "human", "");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8) + d(8) + 4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void goblin(unsigned count) {
	int i;
	nicename(count, "goblin", "MM 166");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		printf("%d: %d hp, 15 AC", i + 1, d(6) + d(6));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void goblinboss(unsigned count) {
	int i;
	nicename(count, "goblin boss", "MM 166");	
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 17 AC", i + 1, d(6) + d(6) + d(6) + d(6) + d(6) + d(6));
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void gasspore(unsigned count) {
	int i;
	nicename(count, "gas spore (fungi)", "MM 138");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 5 AC (explodes on death 3d6 poison + disease, Con Save)", i + 1, 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void shrieker(unsigned count) {
	int i;
	nicename(count, "shrieker (fungi)", "MM 138");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 5 AC (loud shriek within 30' + 1d4 turns after", i + 1, d(8) + d(8) + d(8));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void violetfungi(unsigned count) {
	int i;
	nicename(count, "violet fungi", "MM 138");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 5 AC", i + 1, d(8) + d(8) + d(8) + d(8) + d(8));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void deepgnome(unsigned count) {
	int i;
	nicename(count, "deep gnome (gnome)", "");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8) + d(8) + 4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void drow(unsigned count) {
	int i;
	nicename(count, "drow (elf)", "MM 128");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 15 AC", i + 1, d(8) + d(8) + d(8));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergar(unsigned count, int invisible) {
	int i;
	nicename(count, "duergar (dwarf)", "MM 122");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp %s", i + 1, d(8)+d(8)+d(8)+d(8)+8, (invisible-- > 0) ? "(invisible)" : "");
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergarkavalrachni(unsigned count) {
	int i;
	nicename(count, "duergar kavalrachni (dwarf)", "OofA 226");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+8);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void stonegiant(unsigned count) {
	int i;
	nicename(count, "stone giant", "MM 152, 156");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp, 17 AC", i + 1, d(12) + d(12) + d(12) + d(12) + d(12) + d(12) + d(12) + d(12) + d(12) + d(12) + d(12) + 55);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void bandit(unsigned count) {
	int i;
	nicename(count, "bandit", "MM 343");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+2);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void banditcaptain(unsigned count) {
	int i;
	nicename(count, "bandit captain", "MM 344");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+20);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void orc(unsigned count) {
	int i;
	nicename(count, "orc", "MM 246");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+6);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void eyeofgruumsh(unsigned count) {
	int i;
	nicename(count, "Eye of Gruumsh (orc)", "MM 247");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+18);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void myconid(unsigned count) {
	int i;
	nicename(count, "myconid adult", "MM 232");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void drowspore(unsigned count) {
	int i;
	nicename(count, "drow spore servant", "OofA 229, MM 230");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergarspore(unsigned count) {
	int i;
	nicename(count, "duergar spore servant", "OofA 229, MM 230");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void hookhorrorspore(unsigned count) {
	int i;
	nicename(count, "hook horror spore servant", "OofA 229, MM 230");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+10);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void quaggothspore(unsigned count) {
	int i;
	nicename(count, "quaggoth spore servant", "MM 230");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+18);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void giantlizard(unsigned count) {
	int i;
	nicename(count, "giant lizard", "MM 326");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10)+d(10)+d(10)+3);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void malesteeder(unsigned count) {
	int i;
	nicename(count, "male steeder", "OofA 231");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void femalesteeder(unsigned count) {
	int i;
	nicename(count, "female steeder", "OofA 231");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10)+d(10)+d(10)+d(10)+8);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void kuotoa(unsigned count) {
	int i;
	nicename(count, "kuo-toa", "MM 199");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void kuotoaarchpriest(unsigned count) {
	int i;
	nicename(count, "kuotoa archpriest", "MM 200");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+39);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void derro(unsigned count) {
	int i;
	nicename(count, "derro", "OotA 225");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6)+d(6)+d(6)+3);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void derrosavant(unsigned count) {
	int i;
	nicename(count, "derro savant", "OotA 225");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6)+d(6)+d(6)+d(6)+d(6)+d(6)+d(6)+d(6)+d(6)+d(6)+d(6)+11);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void mindflayer(unsigned count) {
	int i;
	nicename(count, "mindflayer", "MM 222");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+13);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void troglodyte(unsigned count) {
	int i;
	nicename(count, "troglodyte", "MM 290");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void aquatroll(unsigned count) {
	int i;
	nicename(count, "aquatic troll", "MM 291");
	niceprint("Aquatic trolls have the same abilities as normal trolls, but can also breath water and "
		      "has a swimming speed of 30 feet.\n\n");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+40);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void darkmantle(unsigned count) {
	int i;
	nicename(count, "darkmantle", "MM 46");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6)+d(6)+d(6)+d(6)+d(6)+5);
		(void)putchar('\n');
	}
	(void)putchar('\n');
	niceprint("A creature in a boat or raft that tries and fails to detach a darkmantle from itself "
		      "or another creature must succeed on a DC 10 Dexterity saving throw or fall out of the "
		      "vessel and into the water.\n\n");
};

void greenhag(unsigned count) {
	int i;
	nicename(count, "greenhag", "MM 177");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+33);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void ixitxachitl(unsigned count) {
	int i;
	nicename(count, "ixitxachitl", "OofA 225");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6)+d(6)+d(6)+d(6)+4);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void merrow(unsigned count) {
	int i;
	nicename(count, "merrow", "MM 219");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+12);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void stirge(unsigned count) {
	int i;
	nicename(count, "stirge", "MM 284");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(4));
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void quipper(unsigned count) {
	int i;
	int hp = d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)-8;
	nicename(count, "swarm of quippers", "MM 284");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, (hp > 0) ? hp : 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void waterweird(unsigned count) {
	int i;

	nicename(count, "water weird", "MM 299");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+9);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void mummy(unsigned count) {
	int i;

	nicename(count, "mummy", "MM 299");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+d(8)+18);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void earthelemental(unsigned count) {
	int i;
	nicename(count, "earth elemental", "MM 125");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+d(10)+60);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void halfling(unsigned count) {
	int i;
	nicename(count, "halfling", "");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6));
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void kobold(unsigned count) {
	int i;
	nicename(count, "kolbold", "MM 196");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(6)+d(6)+d(6)-3);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void grimlock(unsigned count) {
	int i;
	nicename(count, "grimlock", "MM 175");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+2);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

