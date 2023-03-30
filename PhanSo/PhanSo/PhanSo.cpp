#pragma once

using namespace std;

#include <iostream>

class PhanSo
{
private:
	int TuSo, MauSo;
public:
	void set(int a, int b)
	{
		TuSo = a;
		MauSo = b;
	}
	void Nhap()
	{
		cout << "Nhap lan luot tu & mau cua phan so: ";
		cin >> TuSo >> MauSo;
	}
	void Xuat()
	{
		cout << TuSo << "/" << MauSo << endl;
	}

	void Cong(PhanSo& a)
	{
		TuSo = TuSo * a.MauSo + MauSo * a.TuSo;
		MauSo = MauSo * a.MauSo;
	}
	void Tru(PhanSo& a)
	{
		TuSo = TuSo * a.MauSo - MauSo * a.TuSo;
		MauSo = MauSo * a.MauSo;
	}
	void Nhan(PhanSo& a)
	{
		TuSo = TuSo * a.TuSo;
		MauSo = MauSo * a.MauSo;
	}
	void Chia(PhanSo& a)
	{
		TuSo = TuSo * a.MauSo;
		MauSo = MauSo * a.TuSo;
	}

};