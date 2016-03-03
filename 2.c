#include<stdio.h>
#include<string.h>
typedef struct list{
    char bkn[100];
    char at[50];
    int y,m,d,r;
}lis;
int main()
{
    lis a[5];
    int i;
    char s[50];
    for(i=0;i<5;i++)
    {
        scanf("%s%s%d%d%d%d",a[i].bkn,a[i].at,&a[i].y,&a[i].m,&a[i].d,&a[i].r);
    }
    scanf("%s",s);
    for(i=0;i<5;i++)
        if(!strcmp(a[i].at,s)) printf("%s %s %d %d %d %d\n",a[i].bkn,a[i].at,a[i].y,a[i].m,a[i].d,a[i].r);
    return 0;
}
