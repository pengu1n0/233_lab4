#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  char n[1000] , g[11][5]={"i","of","the","on","at","for", "with", "a", "an" , "in" ,"and"} ;
  char *m;
  int a=0,b,j,i=0,k=0;
  scanf("%1000[^\n]s",n);
  for(j=0; n[j]!='\0'; j++)
  {
        if((n[j]<='a'&&n[j]>='z')||n[j]!=' ')
        {
            i++;
        }
  }
