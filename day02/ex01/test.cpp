#include <stdio.h>

int main()
{
	static int a  = 5;
	printf("%d\n", a--);
	if (a)
		main();
	return 0;
}