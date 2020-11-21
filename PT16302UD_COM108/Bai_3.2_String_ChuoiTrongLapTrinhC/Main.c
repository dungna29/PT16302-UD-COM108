#include <stdio.h>
/// <summary>
/// CHUỖI TRONG LẬP TRÌNH STRING
/// </summary>
/// <returns></returns>
int main()
{
	//H O A N G - Tên Hoàng là 1 tập hợp nhiều ký tự
	//String: là tập hợp nhiều ký tự trên bàn phím
	//Áp dụng kiến thức của mảng sinh ra mảng ký tự
	// Nhược điểm của char: chỉ lưu trữ 1 ký tự

	char name1[] = {'H','O','A','N','G'};
	//printf("%s", name1); in cả 1 mảng String ra màn hình
	//Sử dụng vòng lặp để in từng ký tự ra màn hình
	for (int i = 0; i < 5; i++)
	{
		printf("%c", name1[i]);
	}
	printf("\n");

	//Nhập tên sau đó in ra màn hình
	char name[50];//Một chuỗi có thể chứa 50 ký tự
	printf("Moi ban nhap ten vao chuong trinh: ");
	//gets_s(name, 50);
		//Cách 1
		//scanf_s("%s", &name, 50);

		//Cách 2
		//fgets(name, 50, stdin);

		//Cách 3
		//scanf_s("%[^\n]", name, 20);//Regex
		//printf("Ten ban vua nhap la: %s", ten1);
	printf("Chao ban : %s", name);
}
