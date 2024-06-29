#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    int cost_single_tickets = n * a;
    int cost_multi_then_single = (n / m) * b + (n % m) * a;
    int cost_extra_multi_ticket = ((n + m - 1) / m) * b;
    int min_cost = min(cost_single_tickets, min(cost_multi_then_single, cost_extra_multi_ticket));
    printf("%d\n", min_cost);
    return 0;
}