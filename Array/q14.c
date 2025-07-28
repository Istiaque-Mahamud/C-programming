#include<stdio.h>
int main(){
    int num1,num2,i;
    printf("Enter First Array Input: ");
    scanf("%d",&num1);
    int arr1[num1];
    printf("Enter %d numbers: \n",num1);
    for(i=0;i<num1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter Second Array Input: ");
    scanf("%d",&num2);
    int arr2[num2];
    printf("Enter %d numbers: \n",num2);
    for(i=0;i<num2;i++){
        scanf("%d",&arr2[i]);
    }
    int  temp[100];
    for(i=0;i<num1;i++){
        temp[i]=arr1[i];
    }
    for(i=0;i<num2;i++){
        arr1[i]=arr2[i];
    }
    for(i=0;i<num1;i++){
        arr2[i]=temp[i];
    }



    printf("\nAfter swapping:\n");
    printf("Array A: ");
    for (i=0;i<num2;i++) {
        printf("%d ",arr1[i]);
    }

    printf("\nArray B: ");
    for (i=0;i<num1;i++) {
        printf("%d ",arr2[i]);
    }
    return 0;
}
