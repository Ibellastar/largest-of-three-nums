#include "largest_num.h"
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = find_max(num1, num2, num3);
    printf("The largest number is: %d\n", max);
    return 0;
}
