#include <stdio.h>
int main()
{
 double N1, N2, N3, N4, Distance;

 scanf("%lf %lf %lf %lf", &N1, &N3, &N2, &N4);

 Distance = sqrt(pow(N2-N1,2)+pow(N4-N3,2));

 printf("%.4lf\n", Distance);
 return 0;
}
