#include<stdio.h>
int main(){
    double x,y;
    char ch;
    scanf("%lf %c%lf",&x,&ch,&y);
    
    if (ch == '*') {
        printf("Multiplication: %lf\n",x*y);
    } else if (ch == '/') {
        if (y == 0) {
            printf("Division: Zero as divisor is not valid!\n");
        } else {
            printf("Division: %lf\n",x/y);
        }
    } 
    return 0;
    
}