#include<ingredient.h>

struct Ingredient * new_ingredient(int id, char* name){
    struct Ingredient *i = malloc(sizeof(struct Ingredient));

    i->Id = id;
    i->Name = name;

    return i;

}