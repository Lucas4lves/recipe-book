#ifndef INGREDIENT_H
#define INGREDIENT_H

#include<commons.h>

struct Ingredient{
	int Id;
	char * Name;
};

struct Ingredient * new_ingredient(int id, char* name);

#endif
