#include <stdio.h>
/// <summary>
/// VÒNG LẶP WHILE
/// Dùng để lặp lại 1 hành động nào đó
/// break - continue - goto
/// </summary>
/// <returns></returns>
int main()
{
	//Cách sử dụng: wh + tab 
	// Vòng lặp mà không có điều kiện dừng thì gọi là vòng lặp vô hạn
	// while (true) - Phải có 1 biểu thức và nếu thỏa mãn thì nó sẽ cho phép lặp lại hành động đó
	// { mở lệnh
	//		Chỉ chạy khi biểu thức đúng
	// 	
	// } đóng lệnh

	//Ví dụ 4: sử dụng break dùng để ngắt vòng lặp
	while (1)
	{
		char h;
		printf("\n Cau co thich to khong? (c = co) || (k = khong) : ");
		scanf_s("%c", &h);
		getchar();
		if (h == 'c')
		{
			printf("Ok");
			break;
		}

	}
	



	//Ví dụ 3: Vòng lặp có điều kiện dừng và dừng khi a = 10
	// int a = 0;
	// while (a < 10)
	// {		
	// 	printf("Day la vong lap gi? %d \n", a);		
	// 	a++;
	//
	// }



	//Ví dụ 2: Đây là vòng lặp vô hạn vì nó không có điểm dừng
	// while (3 > 2)
	// {
	// 	printf("Day la vong lap gi? \n");
	// 	
	// }


	// Ví dụ 1:
	// while (1)
	// {
	// 	//Bước 1: Khai báo biến
	// 	int a = 0;
	// 	//Bước 2: In ra màn hình yêu cầu người dùng nhập vào
	// 	printf("Moi ban nhao vao 1 so nguyen :");
	// 	scanf_s("%d", &a);
	// 	//Bước 3: Thực hiện 1 hành động
	// 	if (a % 2 == 0)
	// 	{
	// 		printf("Chan \n");
	// 	}
	// 	else
	// 	{
	// 		printf("Le \n");
	// 	}
	// }
	
}