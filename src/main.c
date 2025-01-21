#include<stdio.h>
#include <menu.c>
int main()
{
	printf("START!\n");
	if(run() != 0){
		fprintf(stderr, "Unable to start the program! \n");
		return 1;
	}
	return 0;
}
