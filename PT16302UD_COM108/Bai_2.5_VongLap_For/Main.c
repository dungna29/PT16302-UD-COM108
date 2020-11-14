#include <stdio.h>
/// <summary>
/// Vòng lặp FOR
/// </summary>
/// <returns></returns>
int main()
{
	//Cách sử dụng: for + tab
	// i = 0: Điểm bắt đầu kiểu sô nguyên
	// i < length: Điều kiện để ngắt vòng lặp
	// i++: tăng biến i lên 1
	// for (int i = 0; i < điều kiện ngắt; i++)
	// {
	//
	// }
	
	for (int i = 0; i < 10; i++)
	{
		printf("Lan thu %d \n", i);
		if (i == 5)
		{
			break;
		}
	}

}
