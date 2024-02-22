/*user input-Name,rollno,per,mobile,address*/

#include <stdio.h>

int main()
{
    printf("User Details\n");
    
    //Datatype variable ;
    char name[10] ;
    int rno;
    float per;
    
    //user input
    printf("Enter student name\n");
    scanf("%s",&name);
    
    printf("Enter student roll no\n");
    scanf("%d",&rno);
    
    printf("Enter student percentage\n");
    scanf("%f",&per);

    //printing values
    printf("Name is %s\n",name);
    printf("Roll no is %d\n",rno);
    printf("Percentage is %f\n",per);
    return 0;
}
