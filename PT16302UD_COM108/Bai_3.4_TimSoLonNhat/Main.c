#include <stdio.h>
/// <summary>
/// Tìm số lớn nhất hoặc bé nhất
/// </summary>
/// <returns></returns>
int main()
{
	int arrNumber[] = { 9,89,77,56,75,99 };
	int max = arrNumber[0];//max = 9
	for (int i = 1; i < 6; i++)
	{
		if (max < arrNumber[i])
		{
			max = arrNumber[i];
		}
	}
	printf("So lon nhat la: %d", max);
}