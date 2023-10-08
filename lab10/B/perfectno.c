# include<stdio.h>
void main(){
    int i=1,n,count;
    printf("Enter number ");
    scanf("%d",&n);
    while (i<n){
        if(n%i==0){
            count+=i;
        }
        i++;
    }
    printf("%d\t",count);
    if(count==n){
        printf("perfect number");
    }else{
        printf("Not perfect number");
    }
}