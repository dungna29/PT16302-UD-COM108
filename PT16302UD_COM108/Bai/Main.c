#include <stdio.h>
/// <summary>
/// Nhập ký tự từ bàn phím vào trong chương trình
/// scanf_s("%d",<biến để hứng giá trị>);
/// </summary>
/// <returns></returns>
int main()
{
	int namsinh = 0;
	//Nhập năm sinh của bạn vào và in ra màn hình
	printf("Moi ban nhap nam sinh vao: \n");
	scanf_s("%d", &namsinh);//Gán dữ liệu từ bàn phím vào biến và chỉ định kiểu dữ liệu nhập vào
	printf("Nam sinh ban vua nhap la: %d",namsinh);

	//Bài tập 1: Viết 1 chương trình cho phép người dùng 
	//nhập vào năm sinh và in ra tuổi
	return 0;
}