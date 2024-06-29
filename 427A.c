#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("0\n");
        return 0;
    }

    int e[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &e[i]);
    }

    int uc = 0; 
    int ao = 0; 
    for (int i = 0; i < n; i++) {
        if (e[i] == -1) {
            if (ao > 0) {
                ao--;
            } else {
                uc++;
            }
        } else {
            ao += e[i];
        }
    }
    printf("%d\n", uc);
    
    return 1;
}
