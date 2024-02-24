//Call by value
#include<stdio.h>
int addno(int num1,int num2);
int main(){
    int num1,num2;
    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter second number\n");
    scanf("%d",&num2);
    
    int result=addno(num1,num2);
    printf("Result is %d\n",result);
    return 0;
}
int addno(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
//Call by reference
#include<stdio.h>
int addno(int *num1,int *num2);
int main(){
    int num1,num2,res;
    printf("Enter two numbers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    res=addno(&num1,&num2);
    printf("Result is %d",res);
    return 0;
}
int addno(int *num1,int *num2){
    int sum=*num1 + *num2;
    return sum;
}