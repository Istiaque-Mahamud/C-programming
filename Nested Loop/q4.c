#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        for (int j=0;j<n-i;j++){
            printf("_");
        }
        for (int k=0;k<i;k++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0; 
}
