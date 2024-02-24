#include<stdio.h>
int main(){
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int *ptr;
    ptr = &n;
    
    printf("Number is: %d\n",n);
    printf("Address of variable is: %x\n",ptr);
    printf("Value of Pointer variable is: %d\n",*ptr);
}