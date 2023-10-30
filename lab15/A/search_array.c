#include <stdio.h>
void main() {
    int j,n,i,search,item=0;
    printf(" How many element you want in array: ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i);
        scanf("%d",&arr[i]);
    }
    printf(" Enter element you want to search: ");
    scanf("%d",&search);

    for ( i = 0; i < n; i++)
    {
        if(search==arr[i]){
            item=i;
            j++;
        }
    }
    if(j>0){
         printf("Element found at index %d .", item);
    }else{
        printf("Element not found.");
    }
    
}