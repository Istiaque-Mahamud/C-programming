 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100]; 
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int number, position;
 
    printf("number: ");
    scanf("%d", &number);
    printf("position: ");
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position");
    } else {
 
        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[position] = number;
        n++; 
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}