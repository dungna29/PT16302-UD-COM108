#include <stdio.h>

int main()
{
	/*
	 * Viết 1 chương trình cho phép 
	 * người dùng chọn số muốn nhập
	 * Sau khi nhập xong in tất cả ra màn hình
	 */
	int input = 0, number = 0;
	int arrNumber[100];
	printf("Ban muon nhap bao nhieu so: ");
	scanf_s("%d", &input);//Lấy giá trị mà người dùng muốn nhập
	for (int i = 0; i < input; i++)//Điều kiện để ngắt vòng lặp chính là số người dùng muốn nhập
	{
		//Sử dụng vòng lặp cho phép người dùng nhập giá trị vào nhiều lần
		printf("Moi ban nhap so thu %d :", i);
		scanf_s("%d", &number);
		arrNumber[i] = number;//Gán giá trị cho mảng theo vị trí index
	}
	printf("Nhung so ban da nhap la: \n");
	for (int i = 0; i < input; i++)//In tất cả các phần tử trong mảng ra màn hình
	{
		printf("%d ", arrNumber[i]);
	}
	return 0;

	/*
	 *	Switch Case và (hàm trả về hoặc không trả về sẽ cộng 1 điểm)
	 * Bài về nhà phần mảng- Viết 1 chương trình gồm các chức năng sau
	 * 1. Nhập 1 dãy điểm do người dùng chọn
	 * 2. In tất cả đầu điểm trên 5
	 * 3. In tất cả các đầu điểm lẻ.
	 * 4. Cộng 2 điểm cho tất cả các đầu điểm dưới 3 xong in ra màn
	 *  hình điểm gốc và điểm sau khi tăng
	 */
}
