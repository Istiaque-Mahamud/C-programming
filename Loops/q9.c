#include <stdio.h>
int main() {
    int N;
    float A,HW,CT,MT,TF,total;
    scanf("%d", &N);
    
    for (int i=1;i<=N;i++) {
        scanf("%f%f%f%f%f",&A,&HW,&CT,&MT,&TF);
        
        total = A+HW+CT+MT+TF;

        printf("Student %d : ",i);
        if (total >= 90) {
        printf("A\n");
        }
        else if (total >= 86) {
        printf("A-\n");
        }
        else if (total >= 82){ 
        printf("B+\n");
        }
        else if (total >= 78){
        printf("B\n");
        }
        else if (total >= 74){ 
        printf("B-\n");
        }
        else if (total >= 70){
        printf("C+\n");
        }
        else if (total >= 66){ 
        printf("C\n");
        }
        else if (total >= 62){ 
        printf("C-\n");
        }
        else if (total >= 58){ 
        printf("D+\n");
        }
        else if (total >= 55){ 
        printf("D\n");
        }
        else {
            printf("F\n");
        }
    }
    
    return 0;
}
