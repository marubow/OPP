#include "Opp.h"
#include <iostream>
using namespace std;

void main()
{
	int temp1, temp2, temp3, temp4, diem, i;
	float Float;
	// khai bao somoi thuoc doi tuong class Opp
	Opp* somoi = new Opp;
	somoi->display();
	cout << "Nhap vao tu 1 - 5: "; cin >> i;
	while (i < 1 || i > 5)
	{
		cout << "Nhap lai: ";
		cin >> i;
	}
	switch (i) {
	case 1:
		cout << "Nhap s1: ";
		cin >> temp1;
		somoi->set_gt1(temp1);
		cout << "\nNhap s2:";
		cin >> temp2;
		somoi->set_gt2(temp2);
		somoi->sum(somoi->get_gt1(), somoi->get_gt2());// +
		somoi->hieu(somoi->get_gt1(), somoi->get_gt2());// -
		somoi->multi(somoi->get_gt1(), somoi->get_gt2());// *
		break;
	case 2:
		cout << "Nhap s1: ";
		cin >> temp1;
		somoi->set_gt1(temp1);
		a = somoi->get_gt1();
		cout << "Nhap s2: ";
		cin >> temp2;
		somoi->set_gt2(temp2);
		b = somoi->get_gt2();
		temp3 = (a + b) / 2;
		cout << "\nTBC: " << temp3 << endl;
		break;
	case 3:
		int v0, a, t;
		cout << "Nhap lan luot: v0, a, t";
		cin >> v0;
		somoi->set_gt1(v0);
		cin >> a;
		somoi->set_gt2(a);
		cin >> t;
		somoi->set_gt3(t);
		somoi->vantoc(somoi->get_gt1(), somoi->get_gt2(), somoi->get_gt3());
		break;
	case 4:
		int b, c, d;
		cout << "Nhap diem: ";
		cin >> temp1;
		while (temp1 < 0 || temp1 > 10)
		{
			cout << "Nhap lai ";
			cin >> temp1;
		}
		somoi->set_gt1(temp1);
		cout << "Nhap diem: ";
		cin >> temp2;
		while (temp2 < 0 || temp2 > 10)
		{
			cout << "Nhap lai ";
			cin >> temp2;
		}
		somoi->set_gt2(temp2);
		cout << "Nhap diem: ";
		cin >> temp3;
		while (temp3 < 0 || temp3 > 10)
		{
			cout << "Nhap lai "; cin >> temp3;
		}
		somoi->set_gt3(temp3);
		cout << "Nhap diem: ";
		cin >> temp4;
		while (temp4 < 0 || temp4 > 10)
		{
			cout << "Nhap lai "; cin >> temp4;
		}
		somoi->set_gt4(temp4);
		cout << "TKCC ";
		// do get tra ve kieu int nen gan duoc bang bien a
		a = somoi->get_gt1();
		b = somoi->get_gt2();
		c = somoi->get_gt3();
		d = somoi->get_gt4();
		somoi->tongket(a, b, c, d);
		cout << "\n";
		break;
	case 5:
		int p, s, Total;
		cout << "Nhap lan luot cac so: ";
		cin >> temp1;
		somoi->set_gt1(temp1);
		cin >> temp2;
		somoi->set_gt2(temp2);
		cout << "  p = s1 + s2: ";
		// tong
		somoi->sum(somoi->get_gt1(), somoi->get_gt2());
		cout << "\n S= s1 - s2:";
		somoi->hieu(somoi->get_gt1(), somoi->get_gt2());
		break;
	case 7:
		cout << "\nNhap s1:";
		cin >> temp1;
		somoi->set_gt1(temp1);
		cout << "\nNhap s2:";
		cin >> temp2;
		somoi->set_gt2(temp2);
		somoi->sum(somoi->get_gt1(), somoi->get_gt2());
		cout << "\n";
		break;
	default:
		somoi->display();
		break;
	}
	system("pause");
}