#include  <stdio.h>

int main(void)
{
int a;
int b;

 /* Enter Numbers */
printf("Please enter the first number : ");
scanf("%d", &a);
printf("Please enter the second number : ");
scanf("%d", &b);

/* Calculations */

printf("Calculations :\n ");
printf("\t%d + %d = %d\n", a, b, a + b); 
printf("\t%d - %d = %d\n", a, b, a + b );
printf("\t%d * %d = %d\n", a, b, a *b);
printf("\t%d / %d = %.3f\n", a, b, a / (double)b);


return 0;

}
