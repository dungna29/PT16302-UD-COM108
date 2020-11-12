#include <stdio.h>
/// <summary>
/// VÒNG LẰNG DO WHILE
/// </summary>
/// <returns></returns>

int main()
{
	//Cách dùng: do + tab
	// do
	// {
	// 		Luôn chạy ít nhất 1 lần.
	//		Điều kiện để chạy vòng lặp là biểu thức While phải là True
	// }
	// while (true);

	//Ví dụ2: 
	char c;
	do
	{
		printf("Em muon hoc lai C khong? : c = co || k = khong ");
		scanf_s("%c", &c);
		getchar();		
	}
	while (!(c == 'c'));


	//Ví dụ 1: Biểu thứ While false thì chương trình sẽ chạy ít nhất 1 lần
	// do
	// {
	// 	printf("Test");
	// }
	// while (1 >9);

	/*
	 * Bài 1: Viết 1 chương trình cho phép người dùng nhập vào từ 0 đến 100. 
	 * Nếu người dùng nhập không đúng yêu cầu thì yêu cầu người dùng nhập lại.
	 * 
	 * Bài 2: Viết 1 chương trình cho phép người dùng chỉ nhập vào số chẵn.
	 * Nếu số lẻ thông báo và bắt người dùng nhập lại.
	 * 
	 * Bài 3: Viết 1 chương trình cho phép người dùng nhập vào 1 bảng cửu chương kiểu số nguyên
	 * Sau đó in bảng cửu chương người dùng đã chỉ định ra màn hình. Sử dụng While hoặc Do While.
	 */
}