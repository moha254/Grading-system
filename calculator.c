#include<stdio.h>

int main()
{
     //variables
    int coursework, written; 
    char grade;

    //taking marks
    printf("ENTER YOUR COURSEWOK MARKS: ");
    scanf("%d", &coursework);
    //checks marks is valid or not 
    //marks is valid if it belongs to 0 - 100

    if(coursework <0 || coursework >100){
        printf("INVALID COURSEWORK");
        //Stop execution
        return 0;
    }
   
    printf("ENTER YOUR WRITTEN EXAM MARKS: ");
    scanf("%d", &written);

    if(written <0 || written >100){
        printf("INVALID WRITTEN");
        return 0;
    }
   
    printf("coursework marks = %d\n", coursework);
    printf("written exam marks = %d\n", written);

    if(coursework >= 70 && coursework <= 100)
    grade = 'A';

   else if(coursework >= 60)
   grade = 'B';

   else if(coursework >= 50)
   grade = 'C';
   
   else if(coursework >= 40)
   grade = 'D';

   else if(coursework >= 0)
   grade = 'F';

   if(written >= 70 && written <=100)
   grade = 'A';

   else if(written >= 60)
   grade = 'B';

   else if(written >= 50)
   grade = 'C';

   else if(written >= 40)
   grade = 'D';

   else if(written >= 0)
   grade = 'F';
  
   printf("Grade : %c\n", grade);
   return 0;
}