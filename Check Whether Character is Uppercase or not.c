
#include<stdio.h>

int main()
{
char cha;
printf("PLease Enter a charecter: \n");
scanf("%c",&cha);
if(cha>='a'&&cha<='z')
printf(" %c is not a upper character\n",cha);
else if(cha>='A'&&cha<='Z')
printf(" %c is a upper character\n",cha);

return 0;
}
