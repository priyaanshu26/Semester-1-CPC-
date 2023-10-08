#include <stdio.h>
void main() {
    char i='a', j='A';
    while (j<='Z') {
        printf(" %c ",j);
        j++;
    }
    printf("\n");
    while (i<='z') {
        printf(" %c ",i);
        i++;
    }
}