#include <stdio.h>
void main() {
    int n,i;
    printf("How many number you want to enter: ");
    scanf("%d",&n);
    int arr1[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter %d : ", i+1 );
        scanf("%d",&arr1[i]);
    }
        printf(" Array 1 : \n");
    for ( i = 0; i < n; i++)
    {
        printf(" %d \n",arr1[i]);
    }
    int arr2[n];
    for ( i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    }
        printf(" Array 2 : \n");
    for ( i = 0; i < n; i++)
    {
        printf(" %d \n",arr2[i]);
    }
    

}