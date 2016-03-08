#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
typedef struct lis{
    char bkn[100];
    char atu[50];
    int y,m,d,r;
}lis;
int main()
{
    lis a[5];
    int i;
    char s[50];
    for(i=0;i<5;i++)
        cin>>a[i].bkn>>a[i].atu>>a[i].y>>a[i].m>>a[i].d>>a[i].r;
    cin>>s;
    for(i=0;i<5;i++)
        if(!strcmp(a[i].atu,s)) printf("%s %s %d %d %d %d\n",a[i].bkn,a[i].atu,a[i].y,a[i].m,a[i].d,a[i].r);
    return 0;
}
