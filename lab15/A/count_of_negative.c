#include <stdio.h>
void main() {
    int n,i,j=0;
    printf("How many number you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter No: %d ", i+1);
        scanf("%d",&arr[i]);

    }
    for ( i = 0; i < n; i++)
    {
        if (arr[i] < 0) (j++) ;
    }
    printf(" Count: %d ",j);
}
