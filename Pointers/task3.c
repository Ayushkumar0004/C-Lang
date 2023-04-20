// wap to find the factorial of the no using pointer
#include <stdio.h>
void factorial(int num, int *result_ptr) {
    int i;
    *result_ptr = 1;
    for (i = 1; i <= num; i++) {
        *result_ptr *= i;
    }
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(num, &result);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}