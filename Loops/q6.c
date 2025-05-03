#include <stdio.h>
int main() {
    int x,n,choice;
    scanf("%d%d",&x,&n);
    
    for (int i=0;i<n;i++) {
        scanf("%d",&choice);
        
        if (choice==x) {
            printf("Right, Player-2 wins!\n");
            return 0;
        } else {
            printf("Wrong, %d Choice(s) Left!\n",n-i-1);
        }
    }
    printf("Player-1 wins!\n");
    return 0;
}
