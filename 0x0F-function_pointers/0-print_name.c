#include "function_pointers.h"
/**
 *print_name - this function print a name
 *@name: value of enter
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
