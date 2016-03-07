#include <stdlib.h>
#include <stdio.h>

#include "dice.h"

static char* randbard0lvl(void) {
	unsigned roll;
	roll = d(11);
	switch (roll) {
		case  1: return("Blade Ward");
		case  2: return("Dancing Lights");
		case  3: return("Friends");
		case  4: return("Light");
		case  5: return("Mage Hand");
		case  6: return("Mending");
		case  7: return("Message");
		case  8: return("Minor Illusion");
		case  9: return("Prestidigintation");
		case 10: return("True Strike");
		case 11: return("Vicious Mockery");
		default:
			printf("Impossible random level 0 bard spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";
}

static char* randbard1lvl(void) {
	unsigned roll;
	roll = d(19);
	switch (roll) {
		case  1: return("Animal Friendship");
		case  2: return("Bane");
		case  3: return("Charm Person");
		case  4: return("Comprehend Languages");
		case  5: return("Cure Wounds");
		case  6: return("Detect Magic");
		case  7: return("Disguise Self");
		case  8: return("Dissonant Whispers");
		case  9: return("Faerie Fire");
		case 10: return("Healing Word");
		case 11: return("Heroism");
		case 12: return("Identify");
		case 13: return("Illusory Script");
		case 14: return("Longstrider");
		case 15: return("Silent Image");
		case 16: return("Sleep");
		case 17: return("Speak with Animals");
		case 18: return("Tasha's Hideous Laughter");
    	case 19: return("Thunderwave");
    case  0: return("Unseen Servant");
		default:
			printf("Impossible random level 1 bard spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randbard2lvl(void) {
	unsigned roll;
	roll = d(23);
	switch (roll) {
		case  1: return("Animal Messenger");
		case  2: return("Blindness");
		case  3: return("Deafness");
		case  4: return("Calm Emotions");
		case  5: return("Cloud of Daggers");
		case  6: return("Crown of Madness");
		case  7: return("Detect Thoughts");
		case  8: return("Enhance Ability");
		case  9: return("Enthrall");
		case 10: return("Heat Metal");
		case 11: return("Hold Person");
		case 12: return("Invisibility");
		case 13: return("Knock");
		case 14: return("Lesser Restoration");
		case 15: return("Locate Animals or Plants");
		case 16: return("Locate Object");
		case 17: return("Magic Mouth");
		case 18: return("Phantasmal Force");
		case 19: return("See Invisibility");
		case 20: return("Shatter");
		case 21: return("Silence");
		case 22: return("Suggestoin");
		case 23: return("Zone of Truth");
		default:
			printf("Impossible random level 2 bard spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randcleric0lvl(void) {
	unsigned roll;
	roll = d(7);
	switch (roll) {
		case  1: return("Guidance");
		case  2: return("Light");
		case  3: return("Mending");
		case  4: return("Resistance");
		case  5: return("Sacred Flame");
		case  6: return("Spare the Dying");
		case  7: return("Thaumaturgy");
		default:
			printf("Impossible random level 0 cleric spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randcleric1lvl(void) {
	unsigned roll;
	roll = d(15);
	switch (roll) {
		case  1: return("Bane");
		case  2: return("Bless");
		case  3: return("Command");
		case  4: return("Create or Destroy Water");
		case  5: return("Cure Wounds");
		case  6: return("Detect Evil and Good");
		case  7: return("Detect Magic");
		case  8: return("Detect Poison and Disease");
		case  9: return("Guiding Bolt");
		case 10: return("Healing Word");
		case 11: return("Inflict Wounds");
		case 12: return("Protection from Evil and Good");
		case 13: return("Purify Food and Drink");
		case 14: return("Sanctuary");
		case 15: return("Shield of Faith");
		default:
			printf("Impossible random level 1 cleric spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randcleric2lvl(void) {
	unsigned roll;
	roll = d(18);
	switch (roll) {
		case  1: return("Aid");
		case  2: return("Augury");
		case  3: return("Blindness");
		case  4: return("Deafness");
		case  5: return("Calm Emotions");
		case  6: return("Continual Flame");
		case  7: return("Enhance Ability");
		case  8: return("Find Traps");
		case  9: return("Gentle Repose");
		case 10: return("Hold Person");
		case 11: return("Lesser Restoration");
		case 12: return("Locate Object");
		case 13: return("Prayer of Healing");
		case 14: return("Protection from Poison");
		case 15: return("Silence");
		case 16: return("Spiritual Weapon");
		case 17: return("Warding Bond");
		case 18: return("Zone of Truth");
		default:
			printf("Impossible random level 2 cleric spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randdruid0lvl(void) {
	unsigned roll;
	roll = d(8);
	switch (roll) {
		case  1: return("Druidcraft");
		case  2: return("Guidance");
		case  3: return("Mending");
		case  4: return("Poison Spray");
		case  5: return("Produce Flame");
		case  6: return("Resistance");
		case  7: return("Shillelagh");
		case  8: return("Thorn Whip");
		default:
			printf("Impossible random level 0 druid spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randdruid1lvl(void) {
	unsigned roll;
	roll = d(16);
	switch (roll) {
		case  1: return("Animal Friendship");
		case  2: return("Charm Person");
		case  3: return("Create or Destory Water");
		case  4: return("Cure Wounds");
		case  5: return("Detect Magic");
		case  6: return("Detect Poison and Disease");
		case  7: return("Entangle");
		case  8: return("Faerie Fire");
		case  9: return("Fog Cloud");
		case 10: return("Goodberry");
		case 11: return("Healing Word");
		case 12: return("Jump");
		case 13: return("Longstrider");
		case 14: return("Purify Food and Drink");
		case 15: return("Speak with Animals");
		case 16: return("Thunderwave");
		default:
			printf("Impossible random level 1 druid spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randdruid2lvl(void) {
	unsigned roll;
	roll = d(18);
	switch (roll) {
		case  1: return("Animal Messenger");
		case  2: return("Barkskin");
		case  3: return("Beast Sense");
		case  4: return("Darkvision");
		case  5: return("Enhance Ability");
		case  6: return("Find Traps");
		case  7: return("Flame Blade");
		case  8: return("Flaming Sphere");
		case  9: return("Gust of Wind");
		case 10: return("Heat Metal");
		case 11: return("Hold Person");
		case 12: return("Lesser Restoration");
		case 13: return("Locate Animals or Plants");
		case 14: return("Locate Object");
		case 15: return("Moonbeam");
		case 16: return("Pass without Trace");
		case 17: return("Protection from Poison");
		case 18: return("Spike Growth");
		default:
			printf("Impossible random level 2 druid spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randpaladin1lvl(void) {
	unsigned roll;
	roll = d(15);
	switch (roll) {
		case  1: return("Bless");
		case  2: return("Command");
		case  3: return("Compelled Duel");
		case  4: return("Cure Wounds");
		case  5: return("Detect Evil and Good");
		case  6: return("Detect Magic");
		case  7: return("Detect Poison and Disease");
		case  8: return("Divine Favor");
		case  9: return("Heroism");
		case 10: return("Protection from Evil and Good");
		case 11: return("Purify Food and Drink");
		case 12: return("Searing Smite");
		case 13: return("Shield of Faith");
		case 14: return("Thunderous Smite");
		case 15: return("Wrathful Smite");
		default:
			printf("Impossible random level 1 paladin spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randpaladin2lvl(void) {
	unsigned roll;
	roll = d(8);
	switch (roll) {
		case  1: return("Aid");
		case  2: return("Branding Smite");
		case  3: return("Find Steed");
		case  4: return("Lesser Restoration");
		case  5: return("Locate Object");
		case  6: return("Magic Weapon");
		case  7: return("Protection from Poison");
		case  8: return("Zone of Truth");
		default:
			printf("Impossible random level 2 paladin spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randranger1lvl(void) {
	unsigned roll;
	roll = d(13);
	switch (roll) {
		case  1: return("Alarm");
		case  2: return("Animal Friendship");
		case  3: return("Cure Wounds");
		case  4: return("Detect Magic");
		case  5: return("Detect Poison and Disease");
		case  6: return("Ensnaring Strike");
		case  7: return("Fog Cloud");
		case  8: return("Goodberry");
		case  9: return("Hail of Thorns");
		case 10: return("Hunter's Mark");
		case 11: return("Jump");
		case 12: return("Longstrider");
		case 13: return("Speak with Animals");
		default:
			printf("Impossible random level 1 ranger spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randranger2lvl(void) {
	unsigned roll;
	roll = d(13);
	switch (roll) {
		case  1: return("Animal Messenger");
		case  2: return("Barkskin");
		case  3: return("Beast Sense");
		case  4: return("Cordon of Arrows");
		case  5: return("Darkvision");
		case  6: return("Find Traps");
		case  7: return("Lesser Restoration");
		case  8: return("Locate Animals or Plants");
		case  9: return("Locate Object");
		case 10: return("Pass without Trace");
		case 11: return("Protection from Poison");
		case 12: return("Silence");
		case 13: return("Spike Growth");
		default:
			printf("Impossible random level 2 ranger spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randsorcerer0lvl(void) {
	unsigned roll;
	roll = d(16);
	switch (roll) {
		case  1: return("Acid Splash");
		case  2: return("Blade Ward");
		case  3: return("Chill Touch");
		case  4: return("Dancing Lights");
		case  5: return("Fire Bolt");
		case  6: return("Friends");
		case  7: return("Light");
		case  8: return("Mage Hand");
		case  9: return("Mending");
		case 10: return("Message");
		case 11: return("Minor Illusion");
		case 12: return("Poison Spray");
		case 13: return("Prestidigination");
		case 14: return("Ray of Frost");
		case 15: return("Shocking Grasp");
		case 16: return("True Strike");
		default:
			printf("Impossible random level 0 sorcerer spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randsorcerer1lvl(void) {
	unsigned roll;
	roll = d(20);
	switch (roll) {
		case  1: return("Burning Hands");
		case  2: return("Charm Perons");
		case  3: return("Chromatic Orb");
		case  4: return("Color Spray");
		case  5: return("Comprehend Languages");
		case  6: return("Detect Magic");
		case  7: return("Disguise Self");
		case  8: return("Expeditious Retreat");
		case  9: return("False Life");
		case 10: return("Feather Fall");
		case 11: return("Fog Cloud");
		case 12: return("Jump");
		case 13: return("Mage Armor");
		case 14: return("Magic Missile");
		case 15: return("Ray of Sickness");
		case 16: return("Shield");
		case 17: return("Silent Image");
		case 18: return("Sleep");
		case 19: return("Thunderwave");
		case 20: return("Witch Bolt");
		default:
			printf("Impossible random level 1 sorcerer spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randsorcerer2lvl(void) {
	unsigned roll;
	roll = d(25);
	switch (roll) {
		case  1: return("Alter Self");
		case  2: return("Blindness");
		case  3: return("Deafness");
		case  4: return("Blur");
		case  5: return("Cloud of Daggers");
		case  6: return("Crown of Madness");
		case  7: return("Darkness");
		case  8: return("Darkvision");
		case  9: return("Detect Thoughts");
		case 10: return("Enhance Ability");
		case 11: return("Enlarge or Reduce");
		case 12: return("Gust of Wind");
		case 13: return("Hold Person");
		case 14: return("Invisibility");
		case 15: return("Knock");
		case 16: return("Levitate");
		case 17: return("Mirror Image");
		case 18: return("Misty Step");
		case 19: return("Phantasmal Force");
		case 20: return("Scorching Ray");
		case 21: return("See Invisibility");
		case 22: return("Shatter");
		case 23: return("Spider Climb");
		case 24: return("Suggestion");
		case 25: return("Web");
		default:
			printf("Impossible random level 2 sorcerer spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randwarlock0lvl(void) {
	unsigned roll;
	roll = d(9);
	switch (roll) {
		case  1: return("Blade Ward");
		case  2: return("Chill Touch");
		case  3: return("Eldrich Blast");
		case  4: return("Friends");
		case  5: return("Mage Hand");
		case  6: return("Minor Illusion");
		case  7: return("Poison Spray");
		case  8: return("Prestidigination");
		case  9: return("True Strike");
		default:
			printf("Impossible random level 0 warlock spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randwarlock1lvl(void) {
	unsigned roll;
	roll = d(11);
	switch (roll) {
		case  1: return("Armor of Agathys");
		case  2: return("Arms of Hadar");
		case  3: return("Charm Perons");
		case  4: return("Comprehend Languages");
		case  5: return("Expeditious Retreat");
		case  6: return("Hellish Rebuke");
		case  7: return("Hex");
		case  8: return("Illusory Script");
		case  9: return("Protection from Evil and Good");
		case 10: return("Unseen Servant");
		case 11: return("Witch Bolt");
		default:
			printf("Impossible random level 1 warlock spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randwarlock2lvl(void) {
	unsigned roll;
	roll = d(12);
	switch (roll) {
		case  1: return("Cloud of Daggers");
		case  2: return("Crown of Madness");
		case  3: return("Darkness");
		case  4: return("Enthrall");
		case  5: return("Hold Person");
		case  6: return("Invisibility");
		case  7: return("Mirror Image");
		case  8: return("Misty Step");
		case  9: return("Ray of Enfeeblement");
		case 10: return("Shatter");
		case 11: return("Spider Climb");
		case 12: return("Suggestion");
		default:
			printf("Impossible random level 2 warlock spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randwizard0lvl(void) {
	unsigned roll;
	roll = d(16);
	switch (roll) {
		case  1: return("Acid Splash");
		case  2: return("Blade Ward");
		case  3: return("Chill Touch");
		case  4: return("Dancing Lights");
		case  5: return("Fire Bolt");
		case  6: return("Friends");
		case  7: return("Light");
		case  8: return("Mage Hand");
		case  9: return("Mending");
		case 10: return("Message");
		case 11: return("Minor Illusion");
		case 12: return("Poison Spray");
		case 13: return("Prestidigination");
		case 14: return("Ray of Frost");
		case 15: return("Shocking Grasp");
		case 16: return("True Strike");
		default:
			printf("Impossible random level 0 wizard spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";
}

static char* randwizard1lvl(void) {
	unsigned roll;
	roll = d(30);
	switch (roll) {
		case  1: return("Alarm");
		case  2: return("Burning Hands");
		case  3: return("Charm Perons");
		case  4: return("Chromatic Orb");
		case  5: return("Color Spray");
		case  6: return("Comprehend Languages");
		case  7: return("Detect Magic");
		case  8: return("Disguise Self");
		case  9: return("Expeditious Retreat");
		case 10: return("False Life");
		case 11: return("Feather Fall");
		case 12: return("Find Familiar");
		case 13: return("Fog Cloud");
		case 14: return("Grease");
		case 15: return("Identify");
		case 16: return("Illusory Script");
		case 17: return("Jump");
		case 18: return("Longstrider");
		case 19: return("Mage Armor");
		case 20: return("Magic Missile");
		case 21: return("Protection from Evil and Good");
		case 22: return("Ray of Sickness");
		case 23: return("Shield");
		case 24: return("Silent Image");
		case 25: return("Sleep");
		case 26: return("Tasha's Hideous Laughter");
		case 27: return("Tenser's Floating Disk");
		case 28: return("Thunderwave");
		case 29: return("Unseen Servant");
		case 30: return("Witch Bolt");
		default:
			printf("Impossible random level 1 wizard spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

static char* randwizard2lvl(void) {
	unsigned roll;
	roll = d(35);
	switch (roll) {
		case  1: return("Alter Self");
		case  2: return("Arcand Lock");
		case  3: return("Blindness");
		case  4: return("Deafness");
		case  5: return("Blur");
		case  6: return("Cloud of Daggers");
		case  7: return("Continual Flame");
		case  8: return("Crown of Madness");
		case  9: return("Darkness");
		case 10: return("Darkvision");
		case 11: return("Detect Thoughts");
		case 12: return("Enlarge or Reduce");
		case 13: return("Flaming Sphere");
		case 14: return("Gentle Repose");
		case 15: return("Gust of Wind");
		case 16: return("Hold Person");
		case 17: return("Invisibility");
		case 18: return("Knock");
		case 19: return("Levitate");
		case 20: return("Locate Object");
		case 21: return("Magic Mouth");
		case 22: return("Magic Weapon");
		case 23: return("Melf's Acid Arrow");
		case 24: return("Mirror Image");
		case 25: return("Misty Step");
		case 26: return("Nystul's Magic Aura");
		case 27: return("Phantasmal Force");
		case 28: return("Ray of Enfeeblement");
		case 29: return("Rope Trick");
		case 30: return("Scorching Ray");
		case 31: return("See Invisibility");
		case 32: return("Shatter");
		case 33: return("Spider Climb");
		case 34: return("Suggestion");
		case 35: return("Web");
		default:
			printf("Impossible random level 2 wizard spell %d\n", roll);
			exit(EXIT_FAILURE);			
	}
	return "";

}

char* rand0lvl(void) {
	int d6;
	d6 = d(6);
	switch (d6) {
		case 1: return randbard0lvl();
		case 2: return randcleric0lvl();
		case 3: return randdruid0lvl();
		case 4: return randsorcerer0lvl();
		case 5: return randwarlock0lvl();
		case 6: return randwizard0lvl();
		default:
			printf("Impossible random level 0 spell %d\n", d6);
			exit(EXIT_FAILURE);			
	}
	return "";
};

char* rand1lvl(void) {
	int d8;
	d8 = d(8);
	switch (d8) {
		case 1: return randbard1lvl();
		case 2: return randcleric1lvl();
		case 3: return randdruid1lvl();
		case 4: return randpaladin1lvl();
		case 5: return randranger1lvl();
		case 6: return randsorcerer1lvl();
		case 7: return randwarlock1lvl();
		case 8: return randwizard1lvl();
		default:
			printf("Impossible random level 1 spell %d\n", d8);
			exit(EXIT_FAILURE);			
	}
	return "";
};

 char* rand2lvl(void) {
	int d8;
	d8 = d(8);
	switch (d8) {
		case 1: return randbard2lvl();
		case 2: return randcleric2lvl();
		case 3: return randdruid2lvl();
		case 4: return randpaladin2lvl();
		case 5: return randranger2lvl();
		case 6: return randsorcerer2lvl();
		case 7: return randwarlock2lvl();
		case 8: return randwizard2lvl();
		default:
			printf("Impossible random level 2 spell %d\n", d8);
			exit(EXIT_FAILURE);			
	}
	return "";
};

char* rand3lvl(void) {
	return "3rd Level Spell";
}

char* rand4lvl(void) {
	return "4th Level Spell";
}

char* rand5lvl(void) {
	return "5th Level Spell";
}
