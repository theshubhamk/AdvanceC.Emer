/*		TITLE: Implementing various bitwise functions
		AUTHOR: Shubham Kumar Singh
		DATE: Sun Jun  9 15:23:11 IST 2019
		DESCRIPTION: Input: A number from user.
			     Output:print the output numbers.
*/

#include <stdio.h>
#include <stdlib.h>

//declare funtions
int get_nbits(unsigned, int);
int replace_nbits(unsigned, int, unsigned);
int get_nbits_from_pos(unsigned, int, int);
int replace_nbits_from_pos(unsigned, int, int, unsigned);
int toggle_bits_from_pos(unsigned, int, int);

int main()
{
	//clear screen
	system("clear");

	//declare vars
	unsigned char num, val;
	unsigned mask;
	int num_of_bits, pos, out, opt;

	//prompt + read user
	printf("select the option 1. get_nbits 2.replace_nbits 3.replace_nbits 4.replace_n_bits_from_position 5.toggle_n_bits_from_position :\t");
	scanf("%d", &opt);
/*
	printf("Enter the number: ");
	scanf("%hhd", &num);
		
	printf("Enter the no. of bits: ");
	scanf("%d", &num_of_bits);

	printf("Enter the value: ");
	scanf("%hhd", &val);

	printf("Enter the position: ");
	scanf("%d", &pos);
*/
	switch (opt)
	{		
		case 1:	
			printf("Enter the number: ");
			scanf("%hhd", &num);
		
			printf("Enter the no. of bits: ");
			scanf("%d", &num_of_bits);
		
			//call and print get_nbits
			printf("1) the answer of get_nbits is %d\n", get_nbits(num, num_of_bits));
			printf("\n");
			mask = 1 << (sizeof(int) << 3) - 1;
			for( ;mask; mask >>= 1)
			{
				get_nbits(num, num_of_bits) & mask? putchar('1'): putchar('0');
			}		
			putchar('\n');
			break;
		case 2:
			printf("Enter the number: ");
			scanf("%hhd", &num);
		
			printf("Enter the no. of bits: ");
			scanf("%d", &num_of_bits);

			printf("Enter the value: ");
			scanf("%hhd", &val);
			//call and print replace_nbits
			printf("2) the answer of replace_nbits is %d\n", replace_nbits(num, num_of_bits,val));
			printf("\n");
			mask = 1 << (sizeof(int) << 3) - 1;
			for( ;mask; mask >>= 1)
			{
				replace_nbits(num, num_of_bits,val) & mask? putchar('1'): putchar('0');
			}		
			putchar('\n');
			break;
		case 3:	
			printf("Enter the number: ");
			scanf("%hhd", &num);
		
			printf("Enter the no. of bits: ");
			scanf("%d", &num_of_bits);

			printf("Enter the position: ");
			scanf("%d", &pos);

			//call and print get_nbits_from_postion
			printf("3) the answer for get_nbits_from_position is %d\n", get_nbits_from_pos(num, num_of_bits, pos));
			printf("\n");
			mask = 1 << (sizeof(int) << 3) - 1;
			for( ;mask; mask >>= 1)
			{
				get_nbits_from_pos(num, num_of_bits, pos) & mask? putchar('1'): putchar('0');
			}		
			putchar('\n');
			break;
		case 4:
			printf("Enter the number: ");
			scanf("%hhd", &num);
		
			printf("Enter the no. of bits: ");
			scanf("%d", &num_of_bits);

			printf("Enter the value: ");
			scanf("%hhd", &val);
		
			printf("Enter the position: ");
			scanf("%d", &pos);
			//call and print replace_n_bits_from_position
			printf("4) the answer for replace_nbits_from_position is %d\n", replace_nbits_from_pos(num, num_of_bits, pos, val));
			printf("\n");
			mask = 1 << (sizeof(int) << 3) - 1;
			for( ;mask; mask >>= 1)
			{
				replace_nbits_from_pos(num, num_of_bits, pos, val) & mask? putchar('1'): putchar('0');
			}		
			putchar('\n');
			break;
		case 5:
			printf("Enter the number: ");
			scanf("%hhd", &num);
		
			printf("Enter the no. of bits: ");
			scanf("%d", &num_of_bits);

			printf("Enter the position: ");
			scanf("%d", &pos);
	
			//call and print toggle_n_bits_from_position
			printf("5) the answer for toggle_bits_from_position is %hhd\n", toggle_bits_from_pos(num, num_of_bits, pos));
			printf("\n");
			mask = 1 << (sizeof(int) << 3) - 1;
			for( ;mask; mask >>= 1)
			{
				toggle_bits_from_pos(num, num_of_bits, pos) & mask? putchar('1'): putchar('0');
			}		
			putchar('\n');
			break;
		default:
			printf("Enter the valid option\n");
	}
}

//1
int get_nbits(unsigned num, int num_of_bits)
{
	return (0xFF >> (8 - num_of_bits)) & num;
}
//2
int replace_nbits(unsigned num, int num_of_bits, unsigned val)
{
	return 0xFF << num_of_bits & num | 0xFF >> (8 - num_of_bits) & val;
}
//3
int get_nbits_from_pos(unsigned num, int num_of_bits, int pos)
{
	return ( ((~(0xFF << num_of_bits)) << (pos - num_of_bits + 1)) & (num) ) >> (pos - num_of_bits + 1);
}
//4
int replace_nbits_from_pos(unsigned num, int num_of_bits, int pos, unsigned val)
{
	return (((~( (~(0xFF << num_of_bits)) << (pos - num_of_bits + 1) )) & (num)) | ( ( (val) & ((~(0xFF << num_of_bits))) ) << (pos - num_of_bits + 1) ));
}
//5
int toggle_bits_from_pos(unsigned num, int num_of_bits, int pos)
{
	return ~(num) & (~(0xFF << num_of_bits)) << (pos - num_of_bits + 1) | ~((~(0xFF << num_of_bits)) << (pos - num_of_bits + 1)) & num;
}
