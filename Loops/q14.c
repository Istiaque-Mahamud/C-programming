//From chatGPT (Surrender)
#include <stdio.h>

int main() {
    int n, r;
    long long n_fact = 1, r_fact = 1, nr_fact = 1, nCr;
    
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    
    if (n >= r && n >= 0 && r >= 0) {
        for (int i = 2; i <= n; i++) {
            n_fact *= i;
            if (i == r) r_fact = n_fact;
            if (i == (n - r)) nr_fact = n_fact;
        }
        nCr = n_fact / (r_fact * nr_fact);
        printf("%lld\n", nCr);
    } else {
        printf("Invalid input. Ensure n >= r and both are non-negative.\n");
    }
    
    return 0;
}
