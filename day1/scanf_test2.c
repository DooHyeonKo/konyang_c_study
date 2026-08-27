#include <stdio.h>

int main() {
    double n1, n2;

    printf("첫번 째 숫자를 입력하세요 \n");
    scanf("%lf", &n1);

    printf("두번 째 숫자를 입력하세요 \n");
    scanf("%lf", &n2);
    
    printf("덧셈 결과 : %.2lf\n", n1 + n2);
    printf("뺼셈 결과 : %.2lf\n", n1 - n2);
    printf("곱셈 결과 : %.2lf\n", n1 * n2);
    printf("나눗셈 결과 : %.2lf\n", n1 / n2);

    
}