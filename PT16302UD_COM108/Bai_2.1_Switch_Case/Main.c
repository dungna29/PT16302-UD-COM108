#include <stdio.h>
/// <summary>
/// Switch Case - Câu lệnh rẽ nhánh
/// </summary>
/// <returns></returns>
int main()
{
	// Cách sử dụng sw từ khóa chọn switch
	// switch (input) - input là biến có kiểu là số nguyên, kiểu char... nó là nơi truyền lựa chọn xuống dưới các case(Trường hợp)
	// {
	// case 1:  - Trường hợp 1 và chỉ khi input truyền khớp với 1
	// 		//Nếu thỏa mãn vào case thì sẽ thực hiện 1 hành động nào đó
	// 	break; Kết thúc 1 case khi nó thực hiện xong và thoát ra ngoài
	// case 2:
	// 	printf("%d x %d = %d - Day la ket qua ban muon", a, b, a * b);
	// 	break;
	// default:
	// 	printf("Chuc nang ban chon khong ton tai");
	// 	break;
	// }
	int a = 0, b = 0, input = 0;
	//Bước 1: Tạo menu hiển thị
	printf("****** Chuong Trinh May Tinh POLY ****** \n");
	printf("****** 1. Phep Cong 2 So          ****** \n");
	printf("****** 2. Phep Nhan 2 So          ****** \n");
	printf("Moi ban chon chuc nang: ");
	scanf_s("%d", &input);	
	switch (input)
	{
	case 1:
		printf("Moi ban nhap so thu 1: \n");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2: \n");
		scanf_s("%d", &b);
		printf("%d + %d = %d - Day la ket qua ban muon", a, b, a + b);
		break;
	case 2:
		printf("Moi ban nhap so thu 1: \n");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2: \n");
		scanf_s("%d", &b);
		printf("%d x %d = %d - Day la ket qua ban muon", a, b, a * b);
		break;
	default:
		printf("Chuc nang ban chon khong ton tai");
		break;
	}

	/*
	 * Bài tập: Viết 1 chương trình sử dụng Switch Case để tạo ra menu sau:
	 * 1. Xếp loại học lực khi nhập điểm GPA vào - Tùy biến các loại xếp hạng
	 * 2. Cộng 4 số lại với nhau.
	 * 3. Kiểm tra số vào là số chẵn hay lẻ.
	 * 4. Kiểm tra số nguyên âm và nguyên dương.
	 * 5. Kiểm tra điểm thi để biết học lại hay không?
	 */
	
	

	
}
