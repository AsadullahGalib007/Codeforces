
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int m, n, i;
    char s1[101];
    gets(s1);
    n=strlen(s1);
    s1[0]=toupper(s1[0]);
    for(i=1; i<n; i++)
    {
     s1[i]=tolower(s1[i]);
    }

    printf("%s",s1);

    return 0;
}
