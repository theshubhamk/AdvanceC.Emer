/*		TITLE: Collect student data using struct and display them.
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  7 14:11:08 IST 2019
		DESCRIPTION: Input: Read student data.
			     Output: print data either of single student or all students as per user input.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defining the structure
typedef struct
{
	char *name;
	int roll_no;
	float *marks;
	float avg;
	char grade;
}student_t;

//Declare the function
void populate(student_t *p, size_t m, size_t n);
void average_grade(student_t *, size_t, size_t);
void all_stud_info(student_t *, size_t, size_t);
void select_stud_info(student_t *, size_t, size_t, char *, int);

//start the main function
int main()
{
	//Clear the output screen
	system("clear");

	//Declare the variables
	size_t m, n;
	int op;
	char stud_name[20];
	int rol_no;
	char again;
	
	//Prompt + read the 'm' value
	printf("Enter the number of student: \n");
	scanf("%zu", &m);

	//Prompt + read 'n' value
	printf("Enter the number of subjects:\n");
	scanf("%zu", &n);

	//Allocating the Memory of the structure
	student_t *p = malloc(m * sizeof(student_t));

	//Error handling 
	if (!p)
	{
		perror("malloc");
		exit(1);
	}

	//Calling the populate function
	populate(p, m ,n);

	//Calling the average and grade function
	average_grade(p, m, n);


	//Select the option for read the student information 
	printf("Select the option\n");
	printf("1.Details of all student\n2.Details of one student\n");
	scanf("%d", &op);
	switch (op)
	{
		case 1 :
			//Call a function for Display the all student information
			all_stud_info(p, m, n);
			break;

		case 2 :
			//Call a function for Display the selected student information
			printf("Select to search student name or roll no\n");
			printf("1.Student name : \n2.Roll_no\n");
			scanf("%d", &op);
			
			//Check the condition 
			if (op == 1)
			{
				printf("Enter the student name: ");
				scanf("%s", stud_name);
				getchar();
			}
			else
			{
				printf("Enter the Roll no: ");
				scanf("%d", &rol_no);
			}
			
			//Calling a function 
			select_stud_info(p, m, n, stud_name, rol_no);
			break;
	}
}

//Function definition
void populate (student_t *p, size_t m, size_t n)
{
	//Declare the temporary variables
	size_t i, j, size;
	char buffer[20] = {'\0'};

	float sum;

	for (i = 0; i < m; i++)
	{
		//prompt + Read the name
		printf("Enter the student name: \n");
		scanf("%s", buffer);

		//obtaining string length
		size = strlen(buffer);

		//Allocating the memory for storeing the name
		p[i].name = malloc(size + 1);
		strcpy(p[i].name, buffer);

		//prompt + read the value
		printf("Enter the  Roll_na: \n");
		scanf("%d", &p[i].roll_no);

		//Allocating the memory for storeing the marks
		p[i].marks = malloc(n * sizeof(float));

		printf("Enter the sub marks: \n");
		for (j = 0; j < n; j++)
		{
			scanf("%f", p[i].marks + j);
		}

		printf("\n");

	}
}

//Function defination
void average_grade(student_t *p, size_t m, size_t n)
{
	//Declare the temporary variable
	size_t i, j;
	float  sum;

	for (i = 0; i < m; i++)
	{
		sum = 0;
		for (j = 0; j < n; j++)
		{
			sum += *(p[i].marks + j);
		}

		p[i].avg = (sum / (n * 100)) * 100;


		//Logic to find grade
		if (p[i].avg >= 90)
		{
			p[i].grade = 'A';
		}
		else if (p[i].avg >= 80 && p[i].avg < 90)
		{
			p[i].grade = 'B';
		}
		else if (p[i].avg >= 70 && p[i].avg < 80)
		{
			p[i].grade = 'C';
		}
		else if (p[i].avg >= 60 && p[i].avg < 70)
		{
			p[i].grade = 'D';
		}
		else if (p[i].avg >= 50 && p[i].avg < 60)
		{
			p[i].grade = 'E';
		}
		else
		{
			p[i].grade = 'F';
		}
	}
}

//Function defination for display Details of all student
void all_stud_info(student_t *p, size_t m, size_t n)
{
	size_t i, j;

	//Display the all student details
	for (i = 0; i < m; i++)
	{
		printf("Student Name : %s\n", p[i].name);
		printf("Roll No : %d\n", p[i].roll_no);
		printf("Obtained Marks :\n");
		for (j = 0; j < n; j++)
		{
			printf("%.2f\n", *(p[i].marks + j));
		}
		printf("Sub avg : %.2f\n", p[i].avg);
		printf("Grade   : %c\n", p[i].grade);
	}
}

//Function defination
void select_stud_info(student_t *p, size_t m, size_t n, char * stud_name, int rol_no)
{
	size_t i, j;


	for (i = 0; i < m; i++)
	{
		//Check the condition if equal enter the body and Display the search student information
		if (*stud_name == *(p[i].name) || rol_no == p[i].roll_no)
		{
			printf("Student Name : %s\n", p[i].name);
			printf("Roll No : %d\n", p[i].roll_no);
			printf("Obtained Marks :\n");
			for (j = 0; j < n; j++)
			{
				printf("%.2f\n", *(p[i].marks + j));
			}
			printf("Sub avg : %.2f\n", p[i].avg);
			printf("Grade   : %c\n", p[i].grade);
			
			break;
		}
	}

	if (i >= m)
	{
		printf("Student name or roll_no is not present\n");
	}
}
