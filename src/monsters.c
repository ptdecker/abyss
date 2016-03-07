#include <stdlib.h>
#include <stdio.h>

#include "monsters.h"

static void nicename(unsigned count, char name[]) {
	printf("%d %s%s encountered\n\n", count, name, (count == 1) ? " is" : "s are");
}

void skeletons(unsigned count) {
	int i;
	nicename(count, "skeleton");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void minotaurskeletons(unsigned count) {
	int i;
	nicename(count, "minotaur");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void greenslime(unsigned count) {
	int i;
	nicename(count, "green slime");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void yellowmold(unsigned count) {
	int i;
	nicename(count, "yellow mold");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void brownmold(unsigned count) {
	int i;
	nicename(count, "brown mold");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void barlgura(unsigned count) {
	int i;
	nicename(count, "balgura");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void dretch(unsigned count) {
	int i;
	nicename(count, "dreath");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void shadowdemon(unsigned count) {
	int i;
	nicename(count, "shadow demon");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void giantspider(unsigned count) {
	int i;
	nicename(count, "giant spider");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void carrioncrawler(unsigned count) {
	int i;
	nicename(count, "carrion crawler");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void firebeetle(unsigned count) {
	int i;
	nicename(count, "firebeetle");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};


void rocktopus(unsigned count) {
	int i;
	nicename(count, "rocktopus");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void ochrejelly(unsigned count) {
	int i;
	nicename(count, "ochre jelly");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void chuul(unsigned count) {
	int i;
	nicename(count, "chuul");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void grell(unsigned count) {
	int i;
	nicename(count, "grell");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void grick(unsigned count) {
	int i;
	nicename(count, "grick");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void orog(unsigned count) {
	int i;
	nicename(count, "orog");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void piercer(unsigned count) {
	int i;
	nicename(count, "piercer");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void umberhulk(unsigned count) {
	int i;
	nicename(count, "umber hulk");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void moonelf(unsigned count) {
	int i;
	nicename(count, "moon elf");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void shielddwarf(unsigned count) {
	int i;
	nicename(count, "shield dwarf");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void human(unsigned count) {
	int i;
	nicename(count, "human");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void goblin(unsigned count) {
	int i;
	nicename(count, "goblin");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void goblinboss(unsigned count) {
	int i;
	nicename(count, "goblin boss");	
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void gasspore(unsigned count) {
	int i;
	nicename(count, "gas spore");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void shrieker(unsigned count) {
	int i;
	nicename(count, "shrieker");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void violetfungi(unsigned count) {
	int i;
	nicename(count, "violet fungi");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void deepgnome(unsigned count) {
	int i;
	nicename(count, "deep gnome");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void drow(unsigned count) {
	int i;
	nicename(count, "drow");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergar(unsigned count) {
	int i;
	nicename(count, "duergar");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergarkavalrachni(unsigned count) {
	int i;
	nicename(count, "duergar kavalrachni");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void stonegiant(unsigned count) {
	int i;
	nicename(count, "stone giant");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void bandit(unsigned count) {
	int i;
	nicename(count, "bandit");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void banditcaptain(unsigned count) {
	int i;
	nicename(count, "bandit captain");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void orc(unsigned count) {
	int i;
	nicename(count, "orc");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void eyeofgruumsh(unsigned count) {
	int i;
	nicename(count, "Eye of Gruumsh orc");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void myconid(unsigned count) {
	int i;
	nicename(count, "myconid");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
}

void drowspore(unsigned count) {
	int i;
	nicename(count, "drow spore servant");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void duergarspore(unsigned count) {
	int i;
	nicename(count, "duergar spore servant");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void hookhorrorspore(unsigned count) {
	int i;
	nicename(count, "hook horror spore servant");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void quaggothspore(unsigned count) {
	int i;
	nicename(count, "quaggoth spore servant");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void giantlizard(unsigned count) {
	int i;
	nicename(count, "giant lizard");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void malesteeder(unsigned count) {
	int i;
	nicename(count, "male steeder");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void femalesteeder(unsigned count) {
	int i;
	nicename(count, "female steeder");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void kuotoa(unsigned count) {
	int i;
	nicename(count, "kuotoa");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void kuotoaarchpriest(unsigned count) {
	int i;
	nicename(count, "kuotoa archpriest");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void derrosavant(unsigned count) {
	int i;
	nicename(count, "derro savant");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void mindflayer(unsigned count) {
	int i;
	nicename(count, "mindflayer");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

void troglodyte(unsigned count) {
	int i;
	nicename(count, "troglodyte");
	for (i = 0; i < count; i++) {
		printf("%d: ", i + 1);
		(void)putchar('\n');
	}
	(void)putchar('\n');
};

