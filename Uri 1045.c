#include <stdio.h>

int main() {
 double A,B,C,X,Y,Z,temp;
 scanf("%lf %lf %lf",&A, &B, &C);
 if(A<B)
    {
        temp=A;
        A=B;
        B=temp;
  }
  if(A<C)
    {
        temp=A;
  A=C;
   C=temp;
   }
   if(B<C)
    {
        temp=B;
   B=C;
   C=temp;
    }
   X=A*A;
   Y=B*B;
   Z=C*C;
   if (A>= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
   else if (X==Y+Z)
   {
    printf("TRIANGULO RETANGULO\n");

   }
    else if (X>Y+Z)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
   else if (X<Y+Z)
   {
       printf("TRIANGULO ACUTANGULO\n");
   }
    if (A==B && B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (A==B || B==C || C==A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
