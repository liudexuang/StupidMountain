#include <stdio.h>

main()
{
    printf("hello world\n");

	int x; /*��������������i��32���ص���������*/

	int y;

	int n=0;

	int add = 0x0000;


	for (x = 0; x < 320; x++)
	{
		for (y = 0; y < 200; y++)
		{
			if (9999 <=(x-159)*(x-159) + (y-99)*(y-99) <= 10001)
			{
				n = n + 1;
				printf("%d\n", x);
				printf("%d\n", y);

				printf("hello world\n");
				printf("%d\n", n);
			}

		}
	}
}

