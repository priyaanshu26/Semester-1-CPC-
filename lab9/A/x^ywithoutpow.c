#include <stdio.h>
void main() {
    int x,y,i=1,pow=1;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);
    while (i<=y) {
        pow=pow*x;
        i++;
        //printf("%d",pow);
    }
    printf("%d",pow);
}