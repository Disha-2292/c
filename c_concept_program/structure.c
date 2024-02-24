/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct stud{
    int rollno;
    char name[10];
    float per;
}s1,s2;
int main()
{
    printf("Enter your roll number\n");
    scanf("%d",&s1.rollno);
    printf("Roll no is %d\n",s1.rollno);
    
    printf("Enter your name\n");
    scanf("%s",&s1.name);
    printf("Name is %s\n",s1.name);
    
    printf("Enter your percentage\n");
    scanf("%f",&s1.per);
    printf("Percentage is %f\n",s1.per);
    
    printf("Enter your roll number\n");
    scanf("%d",&s2.rollno);
    printf("Roll no is %d\n",s2.rollno);
    
    printf("Enter your name\n");
    scanf("%s",&s2.name);
    printf("Name is %s\n",s2.name);
    
    printf("Enter your percentage\n");
    scanf("%f",&s2.per);
    printf("Percentage is %f\n",s2.per);

    return 0;
}



/*union
#include <stdio.h>
union stud{
    int rollno;
    char name[10];
    float per;
}s1,s2;
int main()
{
    printf("Enter your roll number\n");
    scanf("%d",&s1.rollno);
    printf("Roll no is %d\n",s1.rollno);
    
    printf("Enter your name\n");
    scanf("%s",&s1.name);
    printf("Name is %s\n",s1.name);
    
    printf("Enter your percentage\n");
    scanf("%f",&s1.per);
    printf("Percentage is %f\n",s1.per);
    
    printf("Enter your roll number\n");
    scanf("%d",&s2.rollno);
    printf("Roll no is %d\n",s2.rollno);
    
    printf("Enter your name\n");
    scanf("%s",&s2.name);
    printf("Name is %s\n",s2.name);
    
    printf("Enter your percentage\n");
    scanf("%f",&s2.per);
    printf("Percentage is %f\n",s2.per);

    return 0;
}
*/