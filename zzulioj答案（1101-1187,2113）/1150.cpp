#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char c[1000];
    gets(c);
    int sum=0;
    for(int i=0;i<(int)strlen(c);i++)
    {
        if(isalpha(c[i]!=0)||c[i]==' ')
        continue;
        if(c[i]=='0')
        {
            sum++;
            continue;
        }
        if(c[i]>48&&c[i]<58)
        {
            sum++;
            for(i++;i<(int)strlen(c);i++)
            {
                if(isalpha(c[i])!=0||c[i]==' ')
                    break;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
