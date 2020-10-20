#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[105];
    gets(s);
    char l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (s[i] == ',')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
