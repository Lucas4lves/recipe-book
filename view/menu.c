#include<stdbool.h>
#include<recipe.h>
#include<stdio.h>

int run(){

	int option;
	bool is_running;
	do {
		printf("OPTIONS\n");	
		printf("1 - GET RECIPES\n");	
		printf("2 - CREATE A RECIPE\n");	

		scanf("%d", &option);
		
		switch(option){
			case 1:
			printf("CALL GET RECIPES\n");	
			is_running = false;
			return 0;

			case 2:
			printf("CALL CREATE RECIPES\n");	
			Recipe * nr = new_recipe(1, "Dummy recipe");
			print_recipe(nr);
			is_running = false;
			return 0;
			
			default:
				return 0;
		}
	
	}while(is_running);

	return 0;

}
