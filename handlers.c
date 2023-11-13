#include "main.h"

print_t handlers[NUM_HANDLERS] = {
	{"s", print_s},
	{"%", print_percent},
};
