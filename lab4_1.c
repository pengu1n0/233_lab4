#include <stdio.h>
int main()
{
    int n,i,j,m=0,mn=2000;
    int b,c,sum;
    scanf("%d",&n);
    int a[n][3];
    for (i=0;i<n;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-2;i++){
        for(j=i;j<i+3;j++){
            sum=sum+(a[j][0]*4)+(a[j][1]*2)+(a[j][2]*1);
        }
        if(m<sum){
           m=sum;
           b=i+1;
        }
        if(mn>sum){
           mn=sum;
           c=i+1;
        }
        sum=0;
    }
    printf("%d %d",b,c);

    return 0;
}
