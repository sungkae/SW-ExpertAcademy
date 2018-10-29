#include <iostream>

using namespace std;

int main()
{
	int testCase,day;
	int price[1000001] = { 0 };

	cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		cin >> day;
		//매매가 입력
		int max = 0,count = 0;
		for (int j = 0; j < day; ++j)
		{
			cin >> price[j];
			if (max < price[j])
			{
				max = price[j];
				count++;
			}
		}
		if (count == day && max == price[0])
		{
			cout << "0" << endl;
			continue;
		}


		//구하자, 배열의 size는 day만큼이다.
		
	}

	return 0;
}