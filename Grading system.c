#include<stdio.h>

int main()

    {
        int written;
        int coursework;
        int total;
        char grade;

      printf("Enter Written Exam Marks");
      scanf("%d", &written);
      printf("written exam marks =%d", written);

      if (written >50)
      { printf("INVALID");
        return 0;
      }
      
      printf("Enter Coursework Marks");
      scanf("%d", &coursework);
      printf("coursework marks =%d", coursework);

      if(coursework >50)
      {
        printf("INVALID");
      return 0;
      }
printf("enter two integers:");
scanf("%d %d", &written, &coursework);
printf("%d+%d=%d", written, coursework, total);

if(total >= 70 && total <=100)
grade = "A";

else if("total >60")
grade = "B";

else if("total >50")
grade = "C";

else if("total >=40")
grade = "D";

else if("total >0")
grade = "F";

return 0;
    }