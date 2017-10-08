#ifndef VARIABLES_H_   /* Include guard */
#define VARIABLES_H_
#include <stdbool.h>
/* 
	- This function should be responsible for getting the value of a variable
	- To execute commands, You must always search for the executable files 
	  in the value returned by lookup_variable("PATH");
	- Your code must be dynamic and can handle any number of variables, However,
	  performance is not an issue since in practice we expect low number of variables,
	  as a tip: simple array lookup would be fine
*/
const char *lookup_variable(char *key);

/*
	- This function should be responsible for setting the value of a variable
*/
void set_variable(char *key, char *value, bool export);


/*
	[OPTIONAL] Doesn't affect the code logic
	- This is a helper function to print all your variables
	- Might help much in the debugging or testing
*/
void print_all_variables(void);

void destroy_all_variables();

#endif // VARIABLES_H_