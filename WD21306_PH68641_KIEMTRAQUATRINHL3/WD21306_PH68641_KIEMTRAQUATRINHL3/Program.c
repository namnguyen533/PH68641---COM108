
// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
// bai 1
void nhapThongTinsp()
{
	char ten[50];
     int soLuong;
	 while (getchar() != '\n');
	 printf("Vui long nhap ten san pham: ");
	 fgets(ten, sizeof(ten), stdin);
	 scanf_s("%d", &soLuong);
	 printf("Vui long nhap so luong: ");
	 scanf_s("%d", &soLuong);
	 printf("%s\n", ten);
	 printf("%d\n", soLuong);
	 
}
// bai 2
void trungBinhCong()
{
	
}


int main()
{
	int chon, tiepTuc = 1;
	do
	{
		printf("________MENU________\n");
		printf("1, Nhap thong tin san pham\n");
		printf("2, Trung binh cong chia het cho3\n");
		printf("0, Thoat chuong trinh\n");
		printf("Vui long chon chuc nang: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
			case 1:
			nhapThongTinsp();
			break;
		default:
			break;
		}
	}
	while (chon != 0);
}
// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184
