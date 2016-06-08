#include<stdio.h>
int main()
{
    int i,j,n=10,c=0,s=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c=c+1;
        }
        if(c<3)
        {
            s++;
        }
        c=0;
    }
printf("%d",s);
return 0;
}
