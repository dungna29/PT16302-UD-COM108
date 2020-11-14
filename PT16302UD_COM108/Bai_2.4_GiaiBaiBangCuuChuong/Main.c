#include <stdio.h>
/// <summary>
/// Giải bài bảng cửu chương
/// </summary>
/// <returns></returns>
int main()
{
	while (1)
	{
		//Bước 1: Khai báo biến
		int input = 0,temp = 0;
		int c = 0;
		//Bước 2: Kiểm tra giá trị người dùng nhập vào trong khoảng
		do
		{
			printf("Moi ban nhap vao BANG CUU CHUONG :");
			scanf_s("%d", &input);// 8
			if (!(input >= 0 && input < 10))
			{
				printf("Ban chi duoc nhap tu 1 - 9  [Moi Ban Nhap Lai]\n");
			}
		}
		while (!(input >= 0 && input < 10));

		//Bước 3: In bảng cửu chương	
		do
		{
			printf("%d x %d = %d \n", input, temp, input * temp);
			temp++;//Tăng nó tư 0 lên đến 10
		}
		while (temp <= 10);
		printf("\n Ban co muon tiep tuc khong? 1 = co 0= dung lai :");
		scanf_s("%d", &c);		
		if (c == 0)
		{
			break;
		}
	}
}
