#include<stdio.h>
#include<string.h>
typedef struct list{
    char na[30];
    char nu[12];
}lis;
int main()
{
    lis a[5];
    int i;
    char s[30];
    for(i=0;i<5;i++)
        scanf("%s%s",a[i].na,a[i].nu);
    scanf("%s",s);
    for(i=0;i<5;i++)
        if(!strcmp(a[i].nu,s)) {printf("%s\n",a[i].na); i=100;}
    if(i==5) printf("no data\n");
    return 0;
}
