#include <stdio.h>
/// <summary>
/// TOÁN TỬ SO SÁNH
/// == Toán tử bằng Chứng minh 2 vế của biểu thức bằng nhau
/// > Toán tử lớn hơn
/// < Toán tử nhỏ hơn
/// >= Toán tử lớn hơn HOẶC bằng
/// <= Toán tử nhỏ hơn HOẶC bằng
/// != Toán tử khác
/// </summary>
/// <returns></returns>
int main()
{
	printf("5 = 5 KQ LOGIC = %d \n", 5 == 5);//KQ là TRUE 1
	printf("5 > 5 KQ LOGIC = %d \n", 5 > 5);//KQ là FALSE 0
	printf("5 < 5 KQ LOGIC = %d \n", 5 < 5);//KQ là FALSE 0
	printf("5 >= 5 KQ LOGIC = %d \n", 5 >= 5);//KQ là TRUE 1
	printf("5 <= 5 KQ LOGIC = %d \n", 5 <= 5);//KQ là TRUE 1
	printf("5 != 5 KQ LOGIC = %d \n", 5 != 5);//KQ là FALSE 0
}