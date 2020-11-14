#include <stdio.h>
/// <summary>
/// Hàm không trả về và không có tham số
/// Code tất cả code vào trong 1 hàm thì rất khó để bảo trì code
/// Giúp tái sử dụng code trong lập trình
/// Chia các chức năng thành các hàm riêng biệt
/// </summary>
/// <returns></returns>

int a = 0, b = 0, input = 0;
void nhapSo()
{
	printf("Moi ban nhap so thu 1: \n");
	scanf_s("%d", &a);
	printf("Moi ban nhap so thu 2: \n");
	scanf_s("%d", &b);
}
void chuNang1()
{
	nhapSo();
	printf("%d + %d = %d - Day la ket qua ban muon", a, b, a + b);
}
void chuNang2()
{
	nhapSo();
	printf("%d x %d = %d - Day la ket qua ban muon", a, b, a * b);
}
void menu()
{	
	
	printf("****** Chuong Trinh May Tinh POLY ****** \n");
	printf("****** 1. Phep Cong 2 So          ****** \n");
	printf("****** 2. Phep Nhan 2 So          ****** \n");
	printf("Moi ban chon chuc nang: ");
	scanf_s("%d", &input);
	switch (input)
	{
	case 1:
		chuNang1();
		break;
	case 2:
		chuNang2();
		break;
	default:
		printf("Chuc nang ban chon khong ton tai");
		break;
	}
}


int main()
{
	
	menu();

}
