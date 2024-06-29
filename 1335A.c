#include <stdio.h>

int main() {
    int n, t, z;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &t);

        if(t < 3) {  
            printf("%d\n", 0);
        } else {
            z = (t - 1) / 2;  
            printf("%d\n", z);
        }
    }

    return 0;
}