#include <stdio.h>

main()
{
    printf("hello world\n");

	int i; /*��������������i��32���ص���������*/

	for (i = 0; i <= 19; i++)
	{
		printf("%d", i);
		if (i == 31839)
		{
			i = 7;
		}
		else
		{
			i = 5;
		}
	}


}

