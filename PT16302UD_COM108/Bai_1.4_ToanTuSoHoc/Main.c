#include <stdio.h>
/// <summary>
/// TOÁN TỬ SỐ HỌC
/// + (Phép cộng) - (Phép trừ) *(Phép nhân) / (Phép chia) 
/// ++ (Tăng lên 1 đơn vị) -- (Giảm 1 đơn vị)
/// % Phép chia lấy dư
/// </summary>
/// <returns></returns>
int main()
{
	int a = 5, b = 5, kq = 0;
	kq = a + b;
	printf("%d + %d = %d \n", a, b, kq);
	a++;//Tăng a lên 1 
	b++;
	kq = a + b;
	printf("++ %d + ++%d = %d \n", a, b, kq);
	//Phép chia lấy dư
	printf("8/2 lay du: %d \n", 8 % 2);
	printf("9/2 lay du: %d \n", 9 % 2);
}