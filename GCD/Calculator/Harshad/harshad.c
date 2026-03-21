#include <stdio.h>

int main() {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if(n % sum == 0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");

    return 0;
}