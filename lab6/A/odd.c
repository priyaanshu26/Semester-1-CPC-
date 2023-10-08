#include <stdio.h>

void main() {
    int a;

    printf("Enter a: ");
    scanf("%d", &a);
        if ((a%10)%2==0) {
            printf("a is even");
        }
        else{
            printf("a is odd");
        }
}
