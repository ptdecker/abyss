#include <stdlib.h>
#include <stdio.h>

#include "monsters.h"
#include "dice.h"

static void nicename(unsigned count, char name[], char ref[]) {
	printf("%d %s%s encountered [%s]\n\n", count, name, (count == 1) ? " is" : "s are", ref);
}

void skeletons(unsigned count) {
	int i;
	nicename(count, "skeleton", "MM 272");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8) + d(8) + 4);
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
	nicename(count, "balgura", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void dretch(unsigned count) {
	int i;
	nicename(count, "dreath", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void shadowdemon(unsigned count) {
	int i;
	nicename(count, "shadow demon", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void giantspider(unsigned count) {
	int i;
	nicename(count, "giant spider", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void carrioncrawler(unsigned count) {
	int i;
	nicename(count, "carrion crawler", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
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
	nicename(count, "rocktopus", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void ochrejelly(unsigned count) {
	int i;
	nicename(count, "ochre jelly", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void chuul(unsigned count) {
	int i;
	nicename(count, "chuul", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void grell(unsigned count) {
	int i;
	nicename(count, "grell", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void grick(unsigned count) {
	int i;
	nicename(count, "grick", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void orog(unsigned count) {
	int i;
	nicename(count, "orog", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void piercer(unsigned count) {
	int i;
	nicename(count, "piercer", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void umberhulk(unsigned count) {
	int i;
	nicename(count, "umber hulk", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void moonelf(unsigned count) {
	int i;
	nicename(count, "moon elf", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void shielddwarf(unsigned count) {
	int i;
	nicename(count, "shield dwarf", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void human(unsigned count) {
	int i;
	nicename(count, "human", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void goblin(unsigned count) {
	int i;
	nicename(count, "goblin", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void goblinboss(unsigned count) {
	int i;
	nicename(count, "goblin boss", "");	
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void gasspore(unsigned count) {
	int i;
	nicename(count, "gas spore", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void shrieker(unsigned count) {
	int i;
	nicename(count, "shrieker", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void violetfungi(unsigned count) {
	int i;
	nicename(count, "violet fungi", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void deepgnome(unsigned count) {
	int i;
	nicename(count, "deep gnome", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void drow(unsigned count) {
	int i;
	nicename(count, "drow", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergar(unsigned count) {
	int i;
	nicename(count, "duergar", "MM 122");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+8);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergarkavalrachni(unsigned count) {
	int i;
	nicename(count, "duergar kavalrachni", "OofA 226");
	for (i = 0; i < count; i++) {
		printf("%d: %d hp", i + 1, d(8)+d(8)+d(8)+d(8)+8);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void stonegiant(unsigned count) {
	int i;
	nicename(count, "stone giant", "");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
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
	nicename(count, "Eye of Gruumsh orc", "MM 247");
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
	nicename(count, "kuotoa", "MM 199");
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

