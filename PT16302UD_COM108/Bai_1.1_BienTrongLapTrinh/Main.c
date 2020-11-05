#include <stdio.h>
/// <summary>
/// Biến trong lập trình là gì?
/// Biến dùng đẻ lưu trữ 1 giá trị hoặc nhiều giá trị theo kiểu dữ liệu
/// Biến được lưu trữ ở trên ram hay còn gọi là bộ nhớ tạm của máy tính
/// Biến có kiểu dữ liệu ví dụ như: số nguyên, số thực, chuỗi, ký tự
/// </summary>
/// <returns></returns>
int _namsinh;
int main()
{
	//Phần 1: Cách khai báo 1 biến trong lập trình
	// Tên có phân biệt chữ hoa và chữ thường 
	// Tên biến không được giống nhau.
	// <Kiểu dữ liệu> <Tên biến> =(Toán tử gán) <giá trị cần lưu>;(Để kết thúc câu lệnh)
	int a = 5;//Khai báo 1 biến a có kiểu dữ liệu là số nguyên và có khởi tạo giá trị ban đầu
	int b;//Khai báo 1 biến b có kiểu dữ liệu là số nguyên và không khởi tạo giá trị
	int ac;//2 tên biến ac và Ac khác nhau vì có phân biệt chữ hoa và chữ thường
	int Ac;

	/*
	 * Phần 2: + Cách đặt tên biến cơ bản với 1 từ
	 * - Tên biến phải có ý nghĩa
	 * - Tên biến không gây hiểu lầm
	 *		   + Cách đặt tên biến 2 từ trở lên
	 * - C1: normal: tensinhvien
	 * - C2: CamelCase: TenSinhVien
	 * - C3: UnderScore: ten_Sinh_vien	
	 * Kết luận: Thông thường tên biến sẽ viết thường chỉ có tên hàm và tên Class viết hoa chữ cái đầu	   
	 */

	/*
	 * Phần 3: 2 Loại biến là biến Toàn Cục và Biến Cục Bộ
	 * - Biến cục bộ: là biến được khai báo bên trong của hàm
	 * - Biến toàn cục: là biến được khai báo bên ngoài hàm và nên sử dụng _ gạch dưới trước tên biến
	 */

	/*
	 * Phần 4: Các kiểu dữ liệu trong lập trình
	 * 1. int: kiểu số nguyên
	 * 2. long, byte,short: kiểu số nguyên
	 * 3. char: kiểu ký tự chỉ lưu trữ được 1 ký tự '5'
	 * 4. double,float: kiểu số thực
	 * 5. boolean: (C không có) true hoặc false trong C hiện tại đang là 0 hoặc 1
	 * 6. string: kiểu chuỗi - Bao gồm nhiều ký tự lại với nhau
	 */
	return 0;
}