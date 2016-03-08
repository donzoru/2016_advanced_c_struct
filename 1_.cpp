#include<iostream>
using namespace std;
typedef struct lis{
    int y,m,d;
}lis;
int main()
{
    int sum;
    lis a;
    cin>>a.y>>a.m>>a.d;
    sum=(a.m-1)*30+a.d;
    if(a.m>2) sum-=2;
    if(a.m<=8) sum+=a.m/2;
    else sum+=(a.m+1)/2;
    if((a.y%4==0 && a.y%100!=0)||a.y%400==0) sum++;
    cout<<sum;
    return 0;
}
