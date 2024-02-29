#include <stdio.h>

int main(){
	int idade1;
	
	printf("por favor digite sua idade:\n");
	scanf("%d", &idade1);
printf("\n");
	if (idade1 >= 15 &&idade1 <= 18)
	  printf ("idade permitida");
	  else 
	   printf("_idade nao permitida_");
	
printf("\n");	
	
	return 0;
}
