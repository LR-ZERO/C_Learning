// fathm_ft.c -- 把2英寻转换成英尺
#include <stdio.h>
int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yesm, I said %d feet!\n", 6 * fathoms);

	return 0;
}