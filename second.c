#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = num + 2;  // Increment by 2

    printf("After incrementing by 2, the number is: %d\n", num);

    return 0;
}
