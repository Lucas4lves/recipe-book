#ifndef RECIPE_H
#define RECIPE_H
#include<ingredient.h>

typedef struct{
	int Id;
	char * Title;	
	struct Ingredient * Ingredients[];
}Recipe;

Recipe * new_recipe(int id, char* title, struct Ingredient ingredients[]);
void print_recipe(Recipe * r);
#endif
