#include<stdio.h>
typedef struct stu{
    int num;
    char nam[20];
    double sco;
}st;
int main()
{
    st lis[5],tmp;
    int i,j,t;
    double max=0;
    for(i=0;i<5;i++)
        scanf("%d%s%lf",&lis[i].num,lis[i].nam,&lis[i].sco);
    for(i=0;i<4;i++){
        max=lis[i].sco;t=i;
        for(j=i+1;j<5;j++){
            if(lis[j].sco > max) {t=j;max=lis[j].sco;}
        }
        tmp=lis[t];
        lis[t]=lis[i];
        lis[i]=tmp;
    }
    for(i=0;i<5;i++)
        printf("%d %s %.2f\n",lis[i].num,lis[i].nam,lis[i].sco);
    return 0;
}
