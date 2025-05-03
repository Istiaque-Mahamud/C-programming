#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    double x=((3.31*a*a)+(2.01*b*b*b))/((7.16*b*b)+(2.01*a*a*a));
    printf("%lf\n",x);
    return 0;
}