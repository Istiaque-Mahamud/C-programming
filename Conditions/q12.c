#include<stdio.h>
int main(){
    double x,y;
    scanf("%lf%lf",&x,&y);
    int operator;
    scanf("%d",&operator);
    if (operator == 1) {
        printf("Addition: %.2lf\n", x+y);
    } else if (operator == 2) {
        printf("Subtraction: %.2lf\n",x-y);
    } else if (operator == 3) {
        printf("Multiplication: %.2lf\n",x*y);
    } else if (operator == 4) {
        if (y == 0) {
            printf("Division: Zero is not valid");
        } else {
            int div=x/y;
            printf("Division: %d\n",div);
        }
    }else{
        printf("Invalid Input");
    }
    return 0;
}