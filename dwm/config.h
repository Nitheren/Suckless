/* See LICENSE file for copyright and license details. */
/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int snap      = 0;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const unsigned int gappx     = 5;       /* gap pixel between windows */
static const char *fonts[]          = { "monospace:size=11" };
static const char dmenufont[]       = "monospace:size=11";

/*#include "/home/nith/suckless/dwm/themes/light-and-black.h" */
/*#include "/home/nith/suckless/dwm/themes/default-theme.h"*/
/*#include "/home/nith/suckless/dwm/themes/default.h"*/ 
#include "/home/nith/suckless/dwm/themes/gray.h"

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

static const Rule rules[] = {
				/* xprop(1):
				 *	WM_CLASS(STRING) = instance, class
				 *	WM_NAME(STRING) = title
				 */
				/* class      instance    title       tags mask     isfloating   monitor */
				{ "Gimp",     NULL,       NULL,       0,            0,           -1 },
				{ "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
				{ "Surf",     NULL,       NULL,       1 << 8,       0,           -1 },
};

/* layout(s) */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
#include "tcl.c"
#include "fibonacci.c"
#include "gridmode.c"
static const Layout layouts[] = {
				/* symbol     arrange function */
				{ "[T]",      tile },    /* first entry is default */
				{ "[F]",      NULL },    /* no layout function means floating behavior */
				{ "[M]",      monocle },
				{ "[S]",      spiral },
				{ "[TCL]",    tcl },
				{ "[HHH]",		grid }
};

/* key definitions */
#define XF86MonBrightnessDown	0x1008ff03
#define XF86MonBrightnessUp	0x1008ff02
#define XF86AudioMute		0x1008ff12
#define XF86AudioLowerVolume	0x1008ff11
#define XF86AudioRaiseVolume	0x1008ff13
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }
/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_gray5, "-sf", col_gray4, NULL };
static const char *termcmd[]  = { "st","-e","tmux", NULL };
static const char *cmdbrightnessup[]  = { "xbacklight", "-inc", "10", NULL };
static const char *cmdbrightnessdown[]  = { "xbacklight", "-dec", "10", NULL };
static const char *cmdsoundup[]  = { "amixer", "-q", "sset", "Master", "5%+", NULL };
static const char *cmdsounddown[]  = { "amixer", "-q", "sset", "Master", "5%-", NULL };
static const char *cmdsoundtoggle[] = { "amixer", "-q", "sset", "Master", "toggle", NULL };
static const char *cmdbrowser[] = { "tabbed","-d","-c","surf","-e", NULL };
static const char *lock[] = { "slock", NULL };
static const char *ranger[] = { "st", "-e", "ranger", NULL };
static const char *news[] = { "st", "-e", "newsboat", NULL };
static const char *music[] = { "st", "-e", "cmus", NULL };

static Key keys[] = {
				/* modifier                     key        function        argument */
				/*programs*/
				{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
				{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },
				{ MODKEY|ShiftMask,							XK_r,			 spawn,					 {.v = ranger} },
				{ MODKEY|ShiftMask,						  XK_w,	   	 spawn,					 {.v = cmdbrowser } },
				{ MODKEY|ShiftMask,							XK_m,	   	 spawn,					 {.v = music } },
				{ MODKEY|ShiftMask,							XK_n,	   	 spawn,					 {.v = news } },

				{ MODKEY,                       XK_b,      togglebar,      {0} },
				{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
				{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
				{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
				{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
				{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
				{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
				{ MODKEY,                       XK_Return, zoom,           {0} },
				{ 0,                            XF86MonBrightnessDown,     spawn, {.v = cmdbrightnessdown } },
				{ 0,                            XF86MonBrightnessUp,       spawn, {.v = cmdbrightnessup } },
				{ 0,                            XF86AudioMute,             spawn, {.v = cmdsoundtoggle } },
				{ 0,                            XF86AudioRaiseVolume,      spawn, {.v = cmdsoundup } },
				{ 0, 														XF86AudioLowerVolume, 	   spawn, {.v = cmdsounddown } },
				{ MODKEY,                       XK_Tab,    view,           {0} },
				{ MODKEY,												XK_Escape, spawn, 	   	   {.v = lock } },
				{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },

				/*layout keybinds*/
				{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
				{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
				{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
				{ MODKEY|ShiftMask,             XK_f,      setlayout,      {.v = &layouts[3]} },
				{ MODKEY|ShiftMask,             XK_t,      setlayout,      {.v = &layouts[4]} },
				{ MODKEY, 											XK_g,			 setlayout,			 {.v = &layouts[5]} },
				{ MODKEY|ShiftMask,             XK_j,      rotatestack,    {.i = +1 } },
				{ MODKEY|ShiftMask,             XK_k,      rotatestack,    {.i = -1 } },
				{ MODKEY|ShiftMask,		XK_t,	   setlayout,	   {.v = &layouts[4]} },
				{ MODKEY,                       XK_space,  setlayout,      {0} },
				{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },

				{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
				{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
				{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
				{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
				{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
				{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
				TAGKEYS(                        XK_1,                      0)
								TAGKEYS(                        XK_2,                      1)
								TAGKEYS(                        XK_3,                      2)
								TAGKEYS(                        XK_4,                      3)
								TAGKEYS(                        XK_5,                      4)
								TAGKEYS(                        XK_6,                      5)
								TAGKEYS(                        XK_7,                      6)
								TAGKEYS(                        XK_8,                      7)
								TAGKEYS(                        XK_9,                      8)
								{ MODKEY|ShiftMask,             XK_Escape,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
				/* click                event mask      button          function        argument */
				{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
				{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
				{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
				{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
				{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
				{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
				{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
				{ ClkTagBar,            0,              Button1,        view,           {0} },
				{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
				{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
				{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};