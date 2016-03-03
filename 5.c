#include<stdio.h>
#include<string.h>
typedef struct list{
    int nu;
    double a,b,c;
}lis;
int main()
{
    lis a[5];
    int i,max=0,k=0,he=0;
    double sum=0;
    for(i=0;i<5;i++){
        scanf("%d%lf%lf%lf",&a[i].nu,&a[i].a,&a[i].b,&a[i].c);
        he=a[i].a+a[i].b+a[i].c;
        sum+=he;
        if(he>max) {max=he;k=i;}}
    printf("%.2f\n %d %.2f %.2f %.2f %.2f\n",sum/15.0,a[k].nu,a[k].a,a[k].b,a[k].c,(a[k].a+a[k].b+a[k].c)/3.0);
    return 0;
}
