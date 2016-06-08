#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5},i,j,t;
for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
i=1;
printf("%d",a[i]);
return 0;
}
