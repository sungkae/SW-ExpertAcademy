#include <stdio.h>
#include <stdlib.h>
int main()
{
	char car[5], phone[5];
	int  i, j, k;

	car[5] = 0;
	phone[5] = 0;

	for (int i = 1; i <= 7; ++i)
	{
		car[0] = i + 2 + '0';
		car[3] = i + '0';

		phone[0] = i + '0';
		phone[3] = i + 2 + '0';

		for (j = 2; j < 9; ++j)
		{
			if ((j == i) || (j == i + 2))
				continue;
			car[1] = j + '0';
			phone[1] = j + '0';
			for (k = 1; k < j; ++k)
			{
				if ((k == i) || (k == i + 2))
					continue;
				car[2] = k + '0';
				phone[1] = k + '0';
				if (strtol(car, NULL, 10) + strtol(phone, NULL, 10) == 16456)
				{
					printf("CAR NUMBER IS %s\n", car);
				}
			}
		}
	}
	system("pause");
	return 0;
}