
#include <stdio.h>

int main() {

 double A,B;
 while(1)
 {
     scanf("%lf %lf",&A,&B);
     if (A==0 && B==0)
        break;
        printf("%.0lf\n",A*B);
 }
    return 0;
}
