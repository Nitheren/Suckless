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
	{ battery_state,	"%s","BAT0" },
	{ battery_perc, 	"%s%%",	"BAT0" },
	{ wifi_essid, 	" %s ",	"wlp1s0" },
	{ datetime, 	" %s ",	"%a %b %e %I:%M" },
};
