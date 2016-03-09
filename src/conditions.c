#include <stdio.h>

#include "dice.h"
#include "conditions.h"
#include "utility.h"

void indefinitemadness(void) {
	unsigned d100;
	d100 = d(100);
	niceprint("The creature is afflicted by the following indeffinite madness:\n\n");
	if (d100 < 16)
		niceprint("\"Being drunk keeps me sane.\"\n\n");
	else if (d100 < 26)
		niceprint("\"I keep whatever I find.\"\n\n");
	else if (d100 < 31)
		niceprint("\"I try to become more like someone else I know--adopting his or her style of dress, mannerisms, and name.\"\n\n");
	else if (d100 < 36)
		niceprint("\"I must bend the truth, exaggerate, or outright lie to be interesting to other people.\"\n\n");
	else if (d100 < 46)
		niceprint("\"Achieving my goal is the only thing of interest to me, and I'll ignore everything else to pursue it.\"\n\n");
	else if (d100 < 51)
		niceprint("\"I find it hard to care about anything that goes on around me.\"\n\n");
	else if (d100 < 56)
		niceprint("\"I don't like the way people judge me all the time.\"\n\n");
	else if (d100 < 71)
		niceprint("\"I am the smartest, wisest, strongest, fastest, and most beautiful person I know.\"\n\n");
	else if (d100 < 81)
		niceprint("\"I am convinced that powerful enemies are hunting me, and their agents are everywhere I go. I am sure they're watching me all the time.\"\n\n");
	else if (d100 < 86)
		niceprint("\"There's only one person I can trust. And only I can see this special friend.\"\n\n");
	else if (d100 < 96)
		niceprint("\"I can't take anything seriously. The more serious the situation, the funnier I find it.\"\n\n");
	else
		niceprint("\"I've discoverd that I really like killing people.\"\n\n");

};