#include <stdio.h>

int main() {
    int t, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &k);
        int count = 0;
        int num = 0;
        while (count < k) {
            num++;
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
            }
        }
        printf("%d\n", num);
    }

    return 0;
}