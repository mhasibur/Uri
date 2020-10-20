
#include <stdio.h>

int main() {
 int i,j, x=5,y=7;
 for (i=1;i<=9; i+=2)
 {
     for (j=y; j>=x;j--)
 {
     printf("I=%d J=%d\n",i,j);
 }
 x=y;
 y=y+2;
}
    return 0;
}
