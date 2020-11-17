#include <stdio.h>
/// <summary>
/// Mảng Array
/// </summary>
/// <returns></returns>
int main()
{
	int a = 9;//Chưa 1 giá trị
	//Muốn chứa 1 tập giá trị thì khai báo nhiều biến?

	/*
	 * 1. Array còn gọi là mảng dùng để lưu trữ nhiều
	 * giá trị có cùng KIỂU DỮ LIỆU
	 * 2. Array là một mảng tĩnh không phải mảng động
	 * 3. Vị trí (index) bắt đầu trong Array là 0
	 */
	//Cách dùng:
	//<kiểu dữ liệu> <arr + tên biến>[] = { <giá trị 1>, <giá trị 2>... };
	//<kiểu dữ liệu> <arr + tên biến>[<kích thước mảng>]
	int arrNumber[] = { 8,7,8,9,10 };//Khai báo 1 mảng số nguyên có 5 phần tử
	int arrNumber2[5];//Khai báo 1 mảng số nguyên có kích thước 5 phần tử

	//Lấy giá trị đơn ra khỏi mảng cần phải index
	//arrNumber[<vị trí>];
	arrNumber[3];
	printf("%d", arrNumber[0]);
	printf("%d", arrNumber[1]);
	printf("%d", arrNumber[2]);
	printf("%d", arrNumber[3]);
	printf("%d", arrNumber[4]);
	//In tất cả các phần tử trong mảng sử dụng vòng lặp để in
	for (int i = 0; i < 5; i++)
	{
		printf("%d - ", arrNumber[i]);
	}

	//Gán giá trị cho mảng cần biết index
	arrNumber2[0] = 9;//Gán giá trị 9 cho vị trí index 0
	arrNumber2[0] = 7;//Gán giá trị 7 cho vị trí index 0
	arrNumber2[1] = 3;
	arrNumber2[2] = 3;
	arrNumber2[3] = 3;
	arrNumber2[4] = 3;
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d - ", arrNumber2[i]);
	}

}