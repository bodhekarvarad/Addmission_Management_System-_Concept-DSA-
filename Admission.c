#include <stdio.h> 
#include <string.h>
#define size 100 
typedef struct admission 
{ 
    //personel info 
 
    char student_name[30];    
	 char DOB[12];    
	  char gender[7];     
	  int income;  
	  //int size;   
	  float percentages_10th; 
 
    //college info 
 
    char institute_name[50];    
	 char branch[25];     
	 int year;     
	 int total_fees;    
	  int paid_fees;    
	   int remaining_fees;     
	   char admission_date[12];    
	    char place[15]; 
} student; 
 
void input(student *s, int i) 
{ 
    printf("\n__________________________________________________\n\n* Personel Info Of Student - \n\n");     
	fflush(stdin);    
	 printf("\tFull Name - ");     
	 gets(s[i].student_name);   
	   printf("\tDate Of Birth - ");   
	     gets(s[i].DOB);    
		  printf("\tGender - ");    
		   gets(s[i].gender);    
		    printf("\tAnnual Family Income (rs.) - ");     
			scanf("%d", &s[i].income);    
			 printf("\t10th Percentage - "); 
			 scanf("%f", &s[i].percentages_10th);
printf("\n* Institute Info - \n\n");
fflush(stdin);
printf("\tInstitute Name - ");
gets(s[i].institute_name);
printf("\tBranch - ");
gets(s[i].branch);
printf("\tYear(1,2,3) - ");
scanf("%d", &s[i].year);
printf("\tTotal Fees - ");
scanf("%d", &s[i].total_fees);
printf("\tPaid Fees - ");
scanf("%d", &s[i].paid_fees);
s[i].remaining_fees = s[i].total_fees - s[i].paid_fees;
printf("\tRemaining Fees - %d\n", s[i].remaining_fees);
fflush(stdin);
printf("\tAdmission Date - ");
gets(s[i].admission_date);
printf("\tPlace - ");
gets(s[i].place);
printf("\n__________________________________________________\n");
}
void display(student *s, int i)
{
printf("\n__________________________________________________\n");
printf("\n\t*** Student Data ***\n\n");
printf("\n* Personel Info - \n\n");
printf("\tFull Name - %s\n", s[i].student_name);
printf("\tDate Of Birth - %s\n", s[i].DOB);
printf("\tGender - %s\n", s[i].gender);
printf("\tAnnual Family Income (rs.) - %d\n", s[i].income);
printf("\t10th Percentage - %f\n", s[i].percentages_10th);
printf("\n* College Info - \n\n");
printf("\tInstitute Name - %s\n", s[i].institute_name);
printf("\tBranch - %s\n", s[i].branch);
printf("\tYear(1,2,3) - %d\n", s[i].year);
printf("\tTotal Fees - %d\n", s[i].total_fees);
printf("\tPaid Fees - %d\n", s[i].paid_fees);
printf("\tRemaining Fees - %d\n", s[i].remaining_fees);
printf("\tAdmission Date - %s\n", s[i].admission_date);
printf("\tPlace - %s\n", s[i].place);
printf("\n__________________________________________________\n");
}
int main()
{
student s[size];
int i = 0, op, top = 0;
char name[30];
printf("\n__________________________________________________\n");
printf("\n\t*** Diploma Admission Process ***\n");
do
{
printf("\n__________________________________________________\n");
printf("\n\t\t*** Operations ***\n\n\t[1]. New Admission\n\t[2]. Search Student\n\t[3]. Quit\n\n ");
printf("Choose Operation - ");
scanf("%d", &op);
switch (op)
{
case 1:
input(s, top);
top++;
break;
case 2:
fflush(stdin);
printf("\nName of the student to be search - ");
gets(name);
fflush(stdin);
int j = 0;
for (j; j <= top; j++)
{
i = strcmp(name, s[j].student_name);
if (i == 0)
{
printf("\n***! Student Found !***\n\n");
display(s, j);
break;
}
if (j == top && i != 0)
printf("\nThere is no such student available..\n");
i = 0;
}
break;
case 3:
return 0;
default:
printf("\n\t** Invalid Option **\n");
break;
}
} 
while (i < size);
}
