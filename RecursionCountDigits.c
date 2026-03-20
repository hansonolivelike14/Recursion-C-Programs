// Count number of digits using Recursion

#include <stdio.h>
int countDigits(int n) {
    if (n==0)
        return 0;
    else
        return 1 + countDigits(n/10);
}
int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num==0)
        printf("Number of digits: 1\n");
    else {
        if (num<0)
            num = -num;

        int digits = countDigits(num);
        printf("Number of digits is: %d\n", digits);
    }
    return 0;
}
