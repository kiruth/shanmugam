#include<stdio.h>
#include<string.h>
int main()
{
char a[11]="12345678967";
int i,j,l,k=0;
l=strlen(a);
for(i=0;i<l;)
{
    if(k<=2)
    {
        printf("%c",a[i]);
        k++;
        i++;
    }
    else
    {
        printf(".");
        k=0;
    }
}
return 0;
}
