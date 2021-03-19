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
