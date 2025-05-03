#include<stdio.h>
int main(){
    double x,y;
    scanf("%lf%lf",&x,&y);
    int operator,Case;
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
            scanf("%d",&Case);
            if (Case == 1) {
                printf("Quotient: %d", (int)(x/y));
            } else if (Case == 2) {
                printf("Remainder: %d",(int)x%(int)y);
            } else {
                printf("Invalid Input");
            }
        }
       
        }

    return 0;
}