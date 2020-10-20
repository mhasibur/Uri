
#include <stdio.h>

int main()
{
 double X,Y,M;

 scanf("%lf %lf", &X, &Y);

 M = (X/11 * 3.5) + (Y/11 * 7.5);

 printf("MEDIA = %.5lf\n", M);

 return 0;
}
