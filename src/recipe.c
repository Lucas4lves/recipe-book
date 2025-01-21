#include<recipe.h>
#include<commons.h>

Recipe * new_recipe(int id, char* title){
	Recipe *nr = malloc(sizeof(Recipe));
	struct Ingredient * i = new_ingredient(1, "Chuchu");

	nr->Id = id;
	nr->Title = title;
	nr->Ingredients[0] = &i;

	return nr;
}

void print_recipe(Recipe * r){
	printf("Id: %d, Title: %s Ingredients: %s (...)\n", r->Id, r->Title, r->Ingredients[0]);
}

