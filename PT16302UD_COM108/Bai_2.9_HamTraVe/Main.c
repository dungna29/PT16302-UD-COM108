#include <stdio.h>
/// <summary>
/// HÀM TRẢ VỀ
/// </summary>
/// <returns> </returns>

// <kiểu dữ liệu>: int,float,double, char (giá trị đơn) hoặc nó có thể là tập giá trị
// return <về giá trị của kiểu hàm>; Hàm có kiểu dữ liệu là gì thì phải trả về đúng kiểu đấy
// <kiểu dữ liệu> <tên hàm> (<tham số>...)
// {
// 	//Body code
// 	return <về giá trị của kiểu hàm>;
// }

//Cả 1 hàm này trả ra kiểu số nguyên và giá trị là 2020
int getYear()
{
	return 2020;
}

int tinhTong(int a, int b, int c)
{
	int kq = a + b + c;
	return kq;
}
void tinhTong2(int a, int b, int c)
{
	int kq = a + b + c;
	printf("Ham Void: %d \n", kq);
}

int main()
{
	printf("Tuoi: %d", getYear() - 2000);

	int a = tinhTong(5, 5, 5) +1 ;//Khi hàm là giá trị kiểu số có thể tính toán được
	printf("Day la Ham Return : %d", a);//Vì hàm chỉ là giá trị nên phải in ra dùng printf
	tinhTong2(5, 5, 5);
	//Bài tập:
	/*
	 * Viết 1 chương trình tính toán với 3 số nguyên gồm 4 chức năng:
	 * 1. Phép cộng
	 * 2. Phép trừ
	 * 3. Phép nhân
	 * 4. Phép chia
	 *
	 * Sử dụng Switch Case và phải chia các phép toán thành các hàm trả về
	 * sau đó gọi vào Switch Case.
	 * +1 điểm nếu sử dụng hàm có tham số
	 */
}
