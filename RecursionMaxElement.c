#include <stdio.h>
int findMax(int arr[], int n) {
    if (n==1)
        return arr[0];
    int max_rest = findMax(arr, n-1);

    if (arr[n-1] > max_rest)
        return arr[n-1];
    else
        return max_rest;
}

int main() 
{
    int arr[] = {5, 12, 3, 7, 45, 9, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    printf("Maximum element in the array is: %d\n", max);
    return 0;
}
