#include <stdio.h>

int f(int x) {
    if (x == 1 || x == 2) {
        return 1;
    }

    return f(x - 1) + f(x - 2);
}

int main() {
    int a;
    scanf("%d", &a);
    if (a <= 0) {
        printf("n/a");
        return 0;
    }

    printf("%d", f(a));
    return 0;
}
