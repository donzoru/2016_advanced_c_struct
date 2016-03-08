#include<iostream>
#include<string.h>
using namespace std;
typedef struct lis{
    char na[30];
    char nu[12];
}lis;
int main()
{
    lis a[5];
    int i;
    char s[30];
    for(i=0;i<5;i++)
        cin>>a[i].na>>a[i].nu;
    cin>>s;
    for(i=0;i<5;i++)
        if(!strcmp(a[i].nu,s)) {cout<<a[i].na<<endl; i=100;}
    if(i==5) cout<<"no data\n"<<endl;
    return 0;
}
