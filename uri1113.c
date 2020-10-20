#include <stdio.h>

int main() {
 int A,B,I;
 for (I=0;I<100;I++)
 {
 scanf("%d %d",&A,&B);
 if (A==B)
    break;
 if (A>B)
    printf("Decrescente\n");
    else
    printf("Crescente\n");
 }
    return 0;
}
