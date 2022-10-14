#include <stdio.h>
#include <stdlib.h>

int main()
{
int numA=0, numB=1, numC, i, rep;

   printf("Digite a quantidade de repeticoes: ");
   scanf("%d", &rep);

   printf("\nResultado:\n");
   printf("%d", numA);
   printf(", ");
   printf("%d", numB);

for(i = 0; i < rep; i++){
numC = (numA + numB);
numA = numB;
numB = numC;
   printf(", %d", numC);



}
return 0;
}
