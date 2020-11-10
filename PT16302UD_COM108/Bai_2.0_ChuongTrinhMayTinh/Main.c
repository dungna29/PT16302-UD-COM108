#include <stdio.h>
/// <summary>
/// VIẾT 1 CHƯƠNG TRÌNH MÁY TÍNH
/// </summary>
/// <returns></returns>
int main()
{
	int a = 0, b = 0, input = 0;
	//Bước 1: Tạo menu hiển thị
	printf("****** Chuong Trinh May Tinh POLY ****** \n");
	printf("****** 1. Phep Cong 2 So          ****** \n");
	printf("****** 2. Phep Nhan 2 So          ****** \n");
	printf("Moi ban chon chuc nang: ");
	scanf_s("%d", &input);
	printf("Moi ban nhap so thu 1: \n");
	scanf_s("%d", &a);
	printf("Moi ban nhap so thu 2: \n");
	scanf_s("%d", &b);
	if (input == 1)
	{
		printf("%d + %d = %d - Day la ket qua ban muon", a, b, a + b);
	}
	else if (input == 2)
	{
		printf("%d x %d = %d - Day la ket qua ban muon", a, b, a * b);
	}
	else
	{
		printf("Chuc nang ban chon khong ton tai");
	}
}