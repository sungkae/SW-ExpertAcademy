#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int A[1001];
	int query;
	cin >> query;
	int min = 0;
	int max = 0;
	int count = 0;
	int sum = 0;
	for (int i = 0; i < query; i++)
	{
		cin >> A[i];
	}
	for (int i = 2; i = query - 2; i++)
	{
		if (A[i]-A[i+1] <0)
		{
			max = A[i + 1];
			min = A[i + 1] - A[i];
			count = 0;			
		}
		else 
		{
			//
			//if (min > A[i] - A[i + 1])
			//{
			//	min = A[i] - A[i + 1];
			//}
			count++; 
		}

		if (count == 2)
		{
			int tmpArr[5] = { A[i - 2],A[i - 1],A[i],A[i + 1],A[i + 2] };
			sort(tmpArr, tmpArr + 5);
			sum += tmpArr[4] - tmpArr[3];
			count = 0;
		}
	}

	system("pause");
	return 0;
}