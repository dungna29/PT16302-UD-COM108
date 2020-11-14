/// <summary>
/// HÀM KHÔNG TRẢ VỀ CÓ THAM SỐ - void
/// </summary>
/// <returns></returns>

//Cách dùng - <tham số> chính là các biến có kiểu dữ liệu được truyền vào hàm
/*
 * <kiểu hàm> <tên hàm>(<tham số>){
 *		body code.
 * }
 */
#include <stdio.h>
// Tham số có thể là các kiểu dữ liệu khác nhau
// Có thể có nhiều kiểu dữ liệu trên 1 lần truyền vào
void tinhTongHaiSo(int a,int b) 
{
	//Gọi các tham số vào để tương tác với nó
	printf("%d + %d = %d", a, b, a + b);
}
void xepHang(float diemGPA_C)
{
	if (diemGPA_C >=5)
	{
		printf("Qua mon");
	}else
	{
		printf("Chuc mung ban da quay vao o hoc lai");
	}
}
int main()
{
	/*
	 *	Lưu ý: Gọi hàm có tham số truyền vào
		1. Phải truyền đầy đủ các tham số theo vị trí đúng
		2. Không thể không truyền tham số vì sẽ gây lỗi
		3. Có thể sử dụng nhiều kiểu dữ liệu kết hợp trong tham số.
	 */
	//tinhTongHaiSo(5, 5);
	xepHang(4.9);

	//Bài tập:
	/*
	 * Viết 1 chương trình tính toán với 3 số nguyên gồm 4 chức năng:
	 * 1. Phép cộng
	 * 2. Phép trừ
	 * 3. Phép nhân
	 * 4. Phép chia
	 * 
	 * Sử dụng Switch Case và phải chia các phép toán thành các hàm
	 * sau đó gọi vào Switch Case.
	 * +1 điểm nếu sử dụng hàm có tham số 
	 */
}
