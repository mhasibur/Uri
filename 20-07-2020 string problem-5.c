#include <stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("Enter the string");
    scanf("%[^\n]",ch);
         printf("%s",strlwr(ch));
        return 0;
}

