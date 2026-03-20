#include <stdio.h>

// print numbers from N to 1
void printNto1(int n) {
    if (n==0)
        return;
    printf("%d ", n);
    printNto1(n-1);
}

// print numbers from 1 to N
void print1toN(int n) {
    if (n==0)
        return;
    print1toN(n-1);
    printf("%d ", n);
}

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Numbers from N to 1:\n");
    printNto1(N);

    printf("Numbers from 1 to N:\n");
    print1toN(N);

    return 0;
}
