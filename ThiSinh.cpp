#include <iostream>
#include <string.h>
using namespace std;
class Candidate
{
	private:
	char MaSV[100];
	char HovaTen[100];
	int Ngaysinh;
	int Thangsinh;
	int Namsinh;
	float Diemtoan;
	float Diemvan;
	float Diemanh;
	public:
	void set();
	bool Sumscore();
	void print();
};
void Candidate::set()
{
	cout << "Nhap vao Ma SV: ";
	cin >> MaSV;
	cin.ignore();
	cout << "Nhap vao Ho va ten: ";
	cin.getline(HovaTen, 100);
	cout << "Nhap ngay thang nam sinh cua sinh vien: ";
	cin >> Ngaysinh >> Thangsinh >> Namsinh;
	cout << "Nhap diem toan cua sinh vien: ";
	cin >> Diemtoan;
	cout << "Nhap diem van cua sinh vien: ";
	cin >> Diemvan;
	cout << "Nhap diem anh cua sinh vien: ";
	cin >> Diemanh;
}
bool Candidate::Sumscore()
{
	if ((Diemtoan + Diemanh + Diemvan) >= 15)
	return true;
	return false;
}
void Candidate::print()
{
	cout << "Ho va ten: " << HovaTen << endl;
	cout << "Ma so sinh vien: " << MaSV << endl;
	cout << "Ngay thang nam sinh: " << Ngaysinh << " " << Thangsinh << " " << Namsinh << endl;
	cout << "Diem toan: " << Diemtoan << endl;
	cout << "Diem van: " << Diemvan << endl;
	cout << "Diem anh: " << Diemanh << endl;
}
class TestCandidate
{
	public:
	void Nhapsinhvien(int n, Candidate x[]);
	void Insinhvien(int n, Candidate x[]);
};
void TestCandidate::Nhapsinhvien(int n, Candidate x[])
{
	for (int i = 0; i < n; i++) {
	x[i].set();
}
}
void TestCandidate::Insinhvien(int n, Candidate x[])
{
	for (int i = 0; i < n; i++) {
	if (x[i].Sumscore()) {
	x[i].print();
}
}
}
int main()
{
	int n;
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	Candidate a[100];
	TestCandidate b;
	b.Nhapsinhvien(n, a);
	b.Insinhvien(n, a);
	return 0;
	// wanna add some functions
	// but dont wanna do anything right 
}
