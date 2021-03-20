/* user and group to drop privileges to */
static const char *user  = "matteo";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#90922C",   /* during input */
	[FAILED] = "#992A26",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = " __________________________________ \n/ Hello There! I hope you know the \\\n\\ password ;-)                     /\n ---------------------------------- \n        \\   ^__^\n         \\  (oo)\\_______\n            (__)\\       )\\/\\\n                ||----w |\n                ||     ||";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "monospace:size:pixelsize=24:antialias=true:autohint=true";
