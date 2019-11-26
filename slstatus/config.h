/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
	{ keyboard_indicators, 	" %s ",	"c?m?" },
	{ battery_state,"ac/%s",	"NULL" },
	{ battery_perc, "%s%%",	"NULL" },
	{ vol_perc,	" vol/%s%% ", "/dev/mixer" },
	{ wifi_essid, 	" %s ",	"iwm0" },
	{ datetime, 	" %s ",	"%a %b %e %H:%M" },
};
