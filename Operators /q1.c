#include<stdio.h>
int main(){
    double x,y;
    scanf("%lf%lf",&x,&y);
    double Addition= x+y;
    double Sub= x-y;
    double Mul= x*y;
    int Quotient= (int)x/(int)y;
    int Reminder= (int)x%(int)y;

    printf("%.2lf\n",Addition);
    printf("%.2lf\n",Sub);
    printf("%.2lf\n",Mul);
    printf("%d\n",Quotient);
    printf("%d\n",Reminder);

    return 0;


}