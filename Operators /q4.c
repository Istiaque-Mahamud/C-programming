#include <stdio.h>

int main() {
    int X;
    
    printf("Enter a number (X): ");
    scanf("%d", &X);
    
    printf("X++ : %d\n", X++);
    printf("++X : %d\n", ++X);
    printf("X-- : %d\n", X--);
    printf("--X : %d\n", --X);
    
    return 0;
}
