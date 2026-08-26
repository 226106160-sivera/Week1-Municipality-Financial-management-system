#include <stdio.h>

int main()
{
  char municipality[35];
  char mayor[25];
  int population;

  printf(" Municipality Financial Management system\n\n");

printf("Enter municipality name: ");
scanf("%49s",& municipality);

printf("Enter Mayor: "); 
scanf("%49s",& mayor);
printf("Enter Population: "); 
scanf("%d",& population);
printf("\n---------------------------------\n"); 
printf("Municipality: %s\n", municipality); 
printf("Mayor       : %s\n", mayor); 
printf("Population  : %d\n", population); 

return 0;
}
