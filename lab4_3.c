#include <stdio.h>
#include <string.h>
int main()
{
	char n[200]={'\0'};
    int i=0,j=0;
    scanf("%s",n);
    for(i=0; i<strlen(n); i++)
    {
        if(n[i]!=n[i+1]){
            printf("%c",n[i]);
        }
    }

    return 0;
}

