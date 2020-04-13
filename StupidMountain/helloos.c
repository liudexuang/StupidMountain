#include <stdio.h>

main()
{
    printf("hello world\n");

	int i; /*变量声明。变量i是32比特的整数类型*/

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

