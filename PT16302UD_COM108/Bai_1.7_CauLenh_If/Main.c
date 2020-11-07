#include <stdio.h>
/// <summary>
/// Câu lệnh IF là 1 loại câu lệnh điều kiện và để vào được if thì cần điều kiện luôn đúng
/// </summary>
/// <returns></returns>
int main()
{
	//Cách dùng: Gõ if + Tab
	// if (true)//(true) biểu thức điều kiện của if
	// { Mở lệnh
	//	 Thực hiện 1 hành động nào đó ở đây với điều kiện biểu thức phải true	
	// } Đóng lệnh
	float gpaC = 4.9;
	if(gpaC >= 5)
	{
		printf("Chuc mung ban qua mon C");
	}
	if (gpaC <= 5)
	{
		printf("Chuc mung ban mat 600k hoc lai");
	}
	/*
	 * Bài 1: Viết 1 chương trình cho phép người dùng nhập 1 số nguyên
	 * - Kết quả: In ra màn hính số nguyên đố là số chẵn hay số lẻ
	 * 
	 * Bài 2: Viết 1 chương trình cho phép người dùng nhập 1 số nguyên
	 * - Kết quả: In ra số đó là số âm hay số dương
	 * 
	 * Bài 3: Viết 1 chương trình nhập điểm C nhập vào 4 đầu điểm
	 * 1. Số buổi nghỉ
	 * 2. Điểm thi
	 * 3. Điểm tổng kết
	 * 4. Điểm Online
	 * 
	 * Kết quả: Nếu số buổi nghỉ <=3 và Điểm thi >=5 Điểm TK >=5 Điểm Onl >=7.5 
	 * thì sẽ in ra màn hình chúc mừng quan môn
	 */
}