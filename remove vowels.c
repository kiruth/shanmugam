#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,c=0,l;
    char b[10];
    char a[10]="shalini";
    l=strlen(a);
 
    for(i=l-1;i>=0;i--)
    {
        b[i]=a[i];
        printf("%c",b[i]);
    }
    printf("\n");
    for(i=l;i>=0;i--)
    {
    if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u'&&b[i]!='A'&&b[i]!='E'&&b[i]!='I'&&b[i]!='O'&&b[i]!='U')    
    {
        printf("%c",b[i]);
    }
    }
return 0;
}
