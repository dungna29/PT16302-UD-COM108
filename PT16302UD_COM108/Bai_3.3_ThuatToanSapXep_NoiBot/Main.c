#include <stdio.h>
/// <summary>
/// THUẬT XOÁN SẮP XẾP NỔI BỌT
/// </summary>
/// <returns></returns>
int main()
{
	int arrNumber[] = { 9,8,7,6,5 };
	printf("Mang truoc khi sap xep: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arrNumber[i]);
	}
	//Sử dụng thuật toán
	for (int i = 0; i < 5; i++)
	{
		printf("\nLan chay thu: %d \n", i);
		for (int j = i + 1; j < 5; j++)
		{
			printf("\nKiem tra %d > %d \n", arrNumber[i], arrNumber[j]);
			if (arrNumber[i] > arrNumber[j])//Đảo < thành sắp xếp từ lớn đến bé
			{
				int temp = arrNumber[i];
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
			for (int i = 0; i < 5; i++)
			{
				printf("%d ", arrNumber[i]);
			}
		}
		printf("Ket qua lan chay thu %d \n", i);
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", arrNumber[i]);
		}
		printf("\n");
	}
	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = i + 1; j < 5; j++)
	// 	{
	// 		if (arrNumber[i]> arrNumber[j])
	// 		{
	// 			int temp = arrNumber[i];
	// 			arrNumber[i] = arrNumber[j];
	// 			arrNumber[j] = temp;
	// 		}
	// 	}
	// }
	printf("\n Mang sau khi sap xep: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arrNumber[i]);
	}
}
