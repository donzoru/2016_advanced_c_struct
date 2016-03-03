#include<stdio.h>
#include<string.h>
typedef struct list{
    int nu;
    double a,b,c,d,ave;
}lis;
int main()
{
    lis a[3];
    int i;
    for(i=0;i<3;i++){
        scanf("%d%lf%lf%lf%lf",&a[i].nu,&a[i].a,&a[i].b,&a[i].c,&a[i].d);
        a[i].ave=(a[i].a+a[i].b+a[i].c+a[i].d)/4.0;}
    for(i=0;i<3;i++)
        printf("%d %.2f\n",a[i].nu,a[i].ave);
    return 0;
}
