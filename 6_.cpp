#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

typedef struct stu{
    int num;
    char nam[20];
    double sco;
}st;
int main()
{
    st lis[5],tmp;
    int i,j,t;
    double m=0;
    for(i=0;i<5;i++)
        cin>>lis[i].num>>lis[i].nam>>lis[i].sco;
    for(i=0;i<4;i++){
        m=lis[i].sco;t=i;
        for(j=i+1;j<5;j++){
            if(lis[j].sco > m) {t=j;m=lis[j].sco;}
        }
        tmp=lis[t];
        lis[t]=lis[i];
        lis[i]=tmp;
    }
    for(i=0;i<5;i++)
        printf("%d %s %.2f\n",lis[i].num,lis[i].nam,lis[i].sco);
    return 0;
}
