// #include <conio.h>
#include <stdio.h>

int main() {
	int x = 10;
	{
		int x = 20;
		{
			int x = 30;
			printf("%d\n", x);
		}
		printf("%d\n", x);
	}
	printf("%d\n", x);
}
