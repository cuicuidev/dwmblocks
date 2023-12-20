//#define SC(route) "$HOME/.local/src/dwmblocks/scripts/" #route

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{"Bat: ", "acpi | awk '{print $4}' | sed s/,//",                         1,              0},
	{""	, "acpi | awk '{print $3}' | sed s/,//",			 1,		 0},

	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	 1,              0},

	{""     , "date '+%d %b (%a) %I:%M%p'",					 5,		 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
