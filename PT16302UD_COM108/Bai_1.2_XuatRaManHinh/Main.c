#include <stdio.h>
/// <summary>
/// printf - Dùng để xuất giá trị in ra màn hình 
/// </summary>
/// <returns></returns>
int main()
{
	//			Phần 1: Cách sử dụng
	// Cách 1: printf("Đưa dữ liệu (Tập hợp nhiều ký tự) hiển thị vào đây");
	printf("Nam nay la POLY 10 tuoi \n");//\n dùng để xuống dòng
	// Cách 2: in giá trị của biến ra màn hình
	// printf("<định dạng cần in>",<biến chứa giá trị>);
	//<định dạng cần in>: "%d"(số nguyên) "%c"(ký tự) "%f"(kiểu float) "%s"(chuỗi)
	
	//Khai báo nhiều biến có cùng kiểu dữ liệu ở trên cùng 1 dòng
	int tuoiCuaToi = 21, nam = 2020;
	//int nam = 2020; Tiết kiệm line code trong lập trình
	printf("%d \n", tuoiCuaToi);
	printf("Nam hien tai: %d Tuoi cua toi: %d", nam, tuoiCuaToi);

	char c = '5';
	/*
	 * Bài 1: Viết 1 chương trình khai báo 3 năm sinh
	 * sau đó in 3 năm sinh ra màn hình theo công thức sau:
	 * Nam Sinh 1: 1999
	 * Nam Sinh 2: 2000
	 * Nam Sinh 3: 2001
	 * 
	 * Bài 2: Viết 1 chương trình in điểm môn C ra màn hình 
	 * theo công thức sau
	 * Diem C cua ban la: 8.6
	 * 
	 * Bài 3: Viết 1 chương trình in 1 ký tự bất kì ra màn hình
	 * 
	 */
}