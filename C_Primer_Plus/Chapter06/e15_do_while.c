/* do_while.c -- 出口条件循环 */
#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations! You are cured!\n");

	return 0;
}


/*
>>> Execution Result:
To enter the triskaidekaphobia therapy club,
please enter the secret code number: 12
To enter the triskaidekaphobia therapy club,
please enter the secret code number: 14
To enter the triskaidekaphobia therapy club,
please enter the secret code number: 13
Congratulations! You are cured!
 */