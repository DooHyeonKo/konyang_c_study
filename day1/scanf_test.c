#include <stdio.h>

int main() {
    int n1, n2;

    printf("두 정수를 입력하세요: \n");
    scanf("%d %d", &n1, &n2);

    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);

    return 0;
}