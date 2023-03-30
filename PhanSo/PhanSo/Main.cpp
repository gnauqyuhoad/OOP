#include <iostream>
#include "PhanSo.cpp"


int main()
{
	PhanSo a, b, c;
	a.Nhap();
	b.Nhap();
	cout << "Ket qua phep Cong 2 phan so: ";
	c = a;
	c.Cong(b);
	c.Xuat();

	cout << "Ket qua phep Tru 2 phan so: ";
	c = a;
	c.Tru(b);
	c.Xuat();

	cout << "Ket qua phep Nhan 2 phan so: ";
	c = a;
	c.Nhan(b);
	c.Xuat();

	cout << "Ket qua phep Chia 2 phan so: ";
	c = a;
	c.Chia(b);
	c.Xuat();
}