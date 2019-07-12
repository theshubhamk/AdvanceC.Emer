#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char *name;
	int roll_no;
	float *marks;
	float avg;
	char grade;
}student_t;

int main()
{
	size_t m,n;
	printf("Enter 'm' value: \n");
	scanf("%zu", &m);
	printf("Enter the value of 'n'\n");
	scanf("%zu", &n);

	student_t *p = malloc(m * sizeof(student_t));
	if(!p)
	{
		perror("malloc");
		exit(1);
	}
	populate(p, m, n);
	avg_grade(p, m:wq
		)