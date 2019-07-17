#include <stdio.h>

typedef int I;
//#pragma pack(1)
struct sample
{
	char a;
	int i;
	char b;
}__attribute__((__packed__));

typedef struct sample data_t;

int main()
{
	struct sample x;
	data_t y;

	printf("Sizeof(struct sample): %zu\n",sizeof(struct sample));
	printf("Sizeof(data_t): %zu\n",sizeof(data_t));
	printf("Sizeof(x): %zu\n",sizeof(x));
	printf("Sizeof(y): %zu\n",sizeof(y));
}
