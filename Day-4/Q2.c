#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1;
    int nextTerm;

    printf("Enter the nth term ");
    scanf("%d", &n);

   
    if (n == 1) {
        printf("The 1st  term is: %d\n", t1);
        return 0;
    }

    for (i = 2; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("The %dth Fibonacci term is: %d\n", n, t1);

    return 0;
}