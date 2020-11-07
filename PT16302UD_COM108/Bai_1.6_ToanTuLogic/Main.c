#include <stdio.h>
/// <summary>
/// TOÁN TỬ LOGIC (NỐI 2 BIỂU THỨC LẠI VỚI NHAU)
/// <biểu thức 1> && <biểu thức 2> Bắt buộc tất cả các biểu thức phải đúng
/// <biểu thức 1> || <biểu thức 2> Chỉ cần ít nhất 1 biểu thức đúng sẽ trả ra đúng
/// !<biểu thức 1> Phủ định của 1 hoặc nhiều biểu thức
/// </summary>
/// <returns></returns>
int main()
{
	float diemThi = 4, gpaC = 5, diemOnline = 7.5;
	//int kq = (diemThi >= 5) && (gpaC >= 5) && (diemOnline >= 7.5);
	//int kq = (diemThi >= 5) || (gpaC >= 5) || (diemOnline >= 7.5);
	//int kq = !(diemThi >= 5) && (gpaC >= 5) && (diemOnline >= 7.5);
	int kq = !((diemThi >= 5) && (gpaC >= 5) && (diemOnline >= 7.5));
	printf("Diem thi: %f - Diem TB: %f - Diem Onl: %f - KQ LOGIC %d", diemThi, gpaC, diemOnline, kq);
}