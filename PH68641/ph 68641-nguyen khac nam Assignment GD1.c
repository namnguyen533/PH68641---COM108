// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
#include <stdio.h>
#include <math.h>
	void tinhThuong()
{
	// khai bao
	double soThuc1, soThuc2, thuong;
	while (1 == 1) {
		// nguoi dung nhap
		scanf_s("%lf", &soThuc1);
		scanf_s("%lf", &soThuc2);

		if (soThuc2 == 0) {
			printf("So chia phai khac 0");
		}
		else if (soThuc1 == soThuc2)
		{
			printf("ngu");
		}
		else if ("") {
		}
		else {
			// tinh toan
			thuong = soThuc1 / soThuc2;
			// in ket qua
			printf("lf\n", thuong);
		}
		printf("");
	}
}
	void kiemTraSoNguyen()
	{
		double soCanKiemTra;
		int luaChon;
		do
		{
			printf("nhap so can kiem tra: ");
			scanf_s("%lf", &soCanKiemTra);
			// co muon tiep tuc khong
			printf("co tiep tuc chuc nang khong(1: co , 0: khong): ");
			scanf_s("%d", &luaChon);
		} while (luaChon == 1);
	}
	void uoCChungVaBoiChung()
	{
		double soThuNhat, soThuHai, uocSoChung, boiSoChung;
		int luaChon;
		do
		{
			printf("nhap so thu nhat: ");
			scanf_s("%lf", &soThuNhat);
			printf("nhap so thu hai: ");
			scanf_s("%lf", &soThuHai);
			// co muon tiep tuc khong
			printf("co tiep tuc chuc nang khong(1: co , 0: khong): ");
			scanf_s("%d", &luaChon);
		} while (luaChon == 1);
	}
	void tinhTienQuanKaraoke()
	{
		double gioBatDau, gioKetThuc, soGioThue, tienThanhToan;
		int luaChon;
		do
		{
			printf("nhap gio bat dau: ");
			scanf_s("%lf", &gioBatDau);
			printf("nhap gio ket thuc: ");
			scanf_s("%lf", &gioKetThuc);
			// co muon tiep tuc khong
			printf("co tiep tuc chuc nang khong(1: co , 0: khong): ");
			scanf_s("%d", &luaChon);
			printf("------------------------------------------------------------\n");
		} while (luaChon == 1);
	}
	void doiTien()
	{
		double soTienCanDoi;
		int luaChon;
		do
		{
			printf("Ban co muon tiep tuc k: ");
			scanf_s("%d", &luaChon);
			printf("------------------------------------------------------------\n");
		} while (luaChon == 1);
	}
	void tinhToanTien()
	{
		int luaChon;
		do
		{
			printf("Ban co muon tiep tuc k: ");
			scanf_s("%d", &luaChon);
			printf("------------------------------------------------------------\n");
		} while (luaChon == 1);
	}
void vayTienMuaXeTraGop()
{
	int luaChon;
	do
	{
		printf("Ban co muon tiep tuc k: ");
		scanf_s("%d", &luaChon);
		printf("------------------------------------------------------------\n");
	} while (luaChon == 1);

}
void sapXepThongTinSinhVien()
{
	int luaChon;
	do
	{
		printf("Ban co muon tiep tuc k: ");
		scanf_s("%d", &luaChon);
		printf("------------------------------------------------------------\n");
	} while (luaChon == 1);

}
void gameFPL()
{
	int luaChon;
	do
	{
		printf("Ban co muon tiep tuc k: ");
		scanf_s("%d", &luaChon);
		printf("------------------------------------------------------------\n");
	} while (luaChon == 1);

}
void tinhToanPhanSo()
{
	int luaChon;
	do
	{
		printf("Ban co muon tiep tuc k: ");
		scanf_s("%d", &luaChon);
		printf("------------------------------------------------------------\n");
	} while (luaChon == 1);

}
void tinhLaiSuatNganHangVaiTraGop()
{
	int luaChon;
	do
	{
		printf("Ban co muon tiep tuc k: ");
		scanf_s("%d", &luaChon);
		printf("------------------------------------------------------------\n");
	} while (luaChon == 1);

}
void epKieuDuLieu()
{
	int soNguyen;
	int luaChon;
	int kyTu;
	do
	{
		printf("nhap so thuc; ");
		scanf_s(" %d", &soNguyen);
		kyTu = (char)soNguyen;
		printf(" so nguyen au khi ep kieu: %c\n", kyTu);
		printf(" co tiep tuc chuc nang khong(1: co , 0: khong): ");
		scanf_s("%d", &luaChon);
	} while (luaChon == 0);
}
void bangCuuChuong()
{
	int  bangCuuChuong = 1;
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", bangCuuChuong, i, bangCuuChuong * i);
		if (i == 10 && bangCuuChuong < 9)
		{
			i = 0;
			bangCuuChuong++;
			printf("___________________________________\n");
		}

	}
}

double tinhToanCoBan(double soThuc, double soThuc2, double toanTu)
{
	double ketQua;
	if (toanTu == '+')
	{
		ketQua = soThuc + soThuc2;
	}
	else if (toanTu == '-')
	{
		ketQua = soThuc - soThuc;
	}
	else if (toanTu == '*')
	{
		ketQua = soThuc * soThuc;
	}
	else if (toanTu == ':')
	{
	     ketQua = soThuc / soThuc2;
	}
	
	return ketQua;

}
double tinhSoLon(double so1, double so2, double so3)
{
	double ketQua;
	ketQua = fmax(so1, fmax(so2, so3));
	return ketQua;
}
int main()
{

	int chon;
	do
	{
		printf("In menu\n");
		printf("0. thoat\n");
		printf("1. Kiem tra so nguyen\n");
		printf("2. Tim uoc so chung va boi Boi so chung cua 2 so\n");
		printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
		printf("4. Tinh toan tien\n");
		printf("5. Chuc nang doi tien\n");
		printf("6. Tinh lai suat ngan hang vai tra gop\n");
		printf("7. Vay tien mua xe tra gop\n");
		printf("8. sap xep thong tin sinh vien\n");
		printf("9. Game FPL\n");
		printf("10. Tinh toan phan so\n");
		printf("Nhap chuc nang can thuc hien: ");
		scanf_s("%d", &chon);
		printf("------------------------------------------------------------\n");
		switch (chon)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uoCChungVaBoiChung();
			break;
		case 3:
			tinhTienQuanKaraoke();
			break;
		case 4:
			tinhToanTien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			tinhLaiSuatNganHangVaiTraGop();
			break;
		case 7:
			vayTienMuaXeTraGop();
			break;
		case 8:
			sapXepThongTinSinhVien();
			break;
		case 9:
			gameFPL();
			break;
		case 10:
			tinhToanPhanSo();
			break;

		}
	} while (chon != 0);
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