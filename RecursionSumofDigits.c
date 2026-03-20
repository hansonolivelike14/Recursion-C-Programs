// Recursion program to find the sum of the digits of a number

#include <stdio.h>
int sumOfDigits(int n) {
    if (n==0)
        return 0;
    else
        return (n%10) + sumOfDigits(n / 10);
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}
