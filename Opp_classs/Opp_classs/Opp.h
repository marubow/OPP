#pragma once
#include <iostream>
using namespace std;
class Opp
{
// thuộc tính : private, public
private:
	int giatri1, giatri2, giatri3, giatri4;
public:
// khoi tao
	Opp();
// destruction
	~Opp(); 
// thuộc tính 
	int a1, newgt1, newgt2;
// Phương thức : hiển thị, các toán tử bên trong hiển thị nó
	/*void set_gt1(int gt1);
	void set_gt2(int gt2);
	int get_gt2();
	int get_gt1();*/
	int get_gt1();
	int get_gt2();
	int get_gt3();
	int get_gt4();
	void set_gt1(int newgiatri1);
	void set_gt2(int newgiatri2);
	void set_gt3(int newgiatri3);
	void set_gt4(int newgiatri4);
	void display();
	int nhap();
	int xuat();
	int sum(int newgiatri1, int newgiatri2);
	int hieu(int newgiatri1, int newgiatri2);
	int multi(int newgiatri1, int newgiatri2);
	int vantoc(int newgiatri1, int newgiatri2, int newgiatri3);
	int tongket(int newgiatri1, int newgiatri2, int newgiatri3, int newgiatri4);
	void menu();
	int giatritest(int giatri);
};
Opp::Opp()
{

}
Opp::~Opp()
{

}
// cac ham thanh vien
void Opp::display()
{
	cout << "\t_*==Menu==*_" << endl;
	cout << "==========================" << endl;
	cout << "Moi ban chon  cac chuc nang sau :" << endl;
	cout << "1. + - x / hai so:" << endl;
	cout << "2. Trung binh cong hai so." << endl;
	cout << "3. Van toc ban dau." << endl;
	cout << "4. Nhap diem kiem tra " << endl;
	cout << "5. Tinh p s va total." << endl;
	cout << "============================" << endl;
}
//void Opp::set()
//{
//	return giatri;
//}
//int Opp::get()
//{
//	return giatri;
//}
int Opp::get_gt1()
{
	return giatri1;
}
void Opp::set_gt1(int newgiatri1)
{
	giatri1 = newgiatri1;
}
void Opp::set_gt3(int newgiatri3)
{
	giatri3 = newgiatri3;
}
void Opp::set_gt4(int newgiatri4)
{
	giatri4 = newgiatri4;
}
int Opp::get_gt4()
{
	return giatri4;
}
int Opp::get_gt3()
{
	return giatri3;
}
int Opp::get_gt2()
{
	return giatri2;
}
void Opp::set_gt2(int newgiatri2)
{
	giatri2 = newgiatri2;
}
int Opp::nhap()
{
	cout << "Nhap vao so: ";
	cin >> a1;
	return a1;
}
int Opp::xuat()
{
	cout << "Gia tri " << a1;
	return a1;
}
int Opp::sum(int newgiatri1, int newgiatri2)
{
	int a3;
	a3 = newgiatri1 + newgiatri2;
	cout << "Tong " << a3;
	return a3;
}
int Opp::hieu(int newgiatri1, int newgiatri2)
{
	int a3;
	a3 = newgiatri1 - newgiatri2;
	cout << "Hieu: " << a3;
	return a3;
}
int Opp::multi(int newgiatri1, int newgiatri2)
{
	int a3;
	a3 = newgiatri1 * newgiatri2;
	cout << "Multi: " << a3;
	return a3;
}
int Opp::vantoc(int newgiatri1, int newgiatri2, int newgiatri3)
{
	int v;
	v = newgiatri1 + newgiatri2 * newgiatri3;
	return v;
}
int Opp::tongket(int newgiatri1, int newgiatri2, int newgiatri3, int newgiatri4)
{
	int tongket;
	tongket = (newgiatri1 + newgiatri2 + newgiatri3 * 2 + newgiatri4 * 3) / 7;
	cout << tongket << endl;
	return tongket;
}

void Opp::menu()
{
	cout << " chon me nu tu 1 -7: " << endl;
}
int Opp::giatritest(int newgt)
{
	cin >> newgt;
	cout << newgt;
	return newgt;
}
