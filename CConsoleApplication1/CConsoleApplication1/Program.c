// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
void thongTinMonHoc()
{
	char ten[50];
	int maMon, tinChi;
	const int hocPhiMotTin = 500000;
	while (getchar() != '\n');
	printf("nhap ten mon hoc: ");
	fgets(ten, sizeof(ten), stdin);
	printf("nhap ma mon hoc: ");
	scanf_s("%d", &maMon);
	printf("nhap so tin chi: ");
	scanf_s("%d", &tinChi);
	int hocPhi = tinChi * hocPhiMotTin;
	printf("ten mon hoc %s\n", ten);
	printf("ma mon hoc %d\n", maMon);
	printf("so tin chi %d\n", tinChi);
	printf("hoc phi %d VND\n", hocPhi);
	

}
void tinhTongSoLe()
{

}
void thongTinDiemLab()
{

}

int main()
{
	int chon;
	do
	{
		printf("_____MENU_____\n");
		printf("1. Thong tin mon hoc\n");
		printf("2. Tinh tong so le\n");
		printf("3. Thong tin diem lab\n");
		printf("0. Thoat\n");
		printf("Chon chuc nang ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			thongTinMonHoc();
			break;
		}


		

	}	while (chon != 0);
	
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