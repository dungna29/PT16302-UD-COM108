#include <stdio.h>
/// <summary>
/// CÂU LỆNH ElseIf
/// Câu lệnh này giúp thêm nhiều điều kiện khác nhau
/// </summary>
/// <returns></returns>
int main()
{
	/*
	 * Cách dùng	
	 */

	// if (true)
	// {
	// 		Nếu điều kiện IF thỏa mãn thì chạy vào đây sau đó sẽ thoát khỏi câu lệnh
	//      Không chạy tiếp sang các câu điều kiện cùng khối
	// }else if (true)
	// {
	// 		Nếu điều kiện Else IF thỏa mãn thì chạy vào đây sau đó sẽ thoát khỏi câu lệnh
	//      Không chạy tiếp sang các câu điều kiện cùng khối
	// }else if (true)
	// {
	// 	
	// }else if (true)
	// {
	// 	
	// }else
	// {
	// 		Nếu tất cả các điều kiện trên không thỏa mãn sẽ vào đây
	// }



	float gpa = 8.5, nghi = 5, thi = 5, online = 8.5;//Khai báo 1 biến kiểu dữ liệu là kiểu số thực và có khởi tạo giá trị ban đầu
	// gpaC >=5 , nghi <=3, thi >=5, online>=7.5	
	if (gpa >= 5 && nghi <= 3 && thi >= 5 && online >= 7.5)
	{
		printf("Qua Mon\n");
	}
	else
	{
		printf("Mat 600k\n");
	}
	//Tính điểm đánh giá năng lực học sinh dựa vào điểm thi
	// GPA < 3 - Nên học kinh tế
	// GPA < 5 - Nên học lại cho biết
	// GPA < 6 - Nên xem xét lại việc học cần chăm hơn
	// GPA >=6  <8 - Khá
	// GPA >=8  <=9 - Giỏi
	// GPA >=10  - Thôi không cần học nữa đâu
	if (gpa == 10)
	{
		printf("Thoi khong can hoc nua");
	}
	else if (gpa >= 8)
	{
		printf("Gioi");
	}
	else if (gpa >= 6)
	{
		printf("Kha");
	}
	else if (gpa >= 5)
	{
		printf("Qua mon can cham hon");
	}
	else if (gpa >= 4)
	{
		printf("Hoc lai cho biet");
	}else
	{
		printf("Nen doi nganh");
	}
}