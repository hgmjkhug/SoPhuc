#include <iostream>
using namespace std;
class SoPhuc {
    private:
        double thuc, ao;
    public:
        SoPhuc() 
       { 
            thuc = 0;
            ao = 0;
        }
        SoPhuc(double thuc, double ao)
       {
            this->thuc = thuc;
            this->ao = ao;
        }
        void nhap() 
        {
            cout << "Nhap phan thuc: ";
            cin >> thuc;
            cout << "Nhap phan ao: ";
            cin >> ao;
        }
        void xuat() 
        {
            cout << thuc << " + " << ao << "i" << endl;
        }
        SoPhuc cong(SoPhuc b) 
        { 
            SoPhuc c;
            c.thuc = thuc + b.thuc;
            c.ao = ao + b.ao;
            return c;
        }
        SoPhuc tru(SoPhuc b) 
        {
            SoPhuc c;
            c.thuc = thuc - b.thuc;
            c.ao = ao - b.ao;
            return c;
        }
        SoPhuc nhan(SoPhuc b) 
        {
            SoPhuc c;
            c.thuc = thuc * b.thuc - ao * b.ao;
            c.ao = thuc * b.ao + ao * b.thuc;
            return c;
        }
        SoPhuc chia(SoPhuc b) 
        { 
            SoPhuc c;
            double mau = b.thuc * b.thuc + b.ao * b.ao;
            c.thuc = (thuc * b.thuc + ao * b.ao) / mau;
            c.ao = (ao * b.thuc - thuc * b.ao) / mau;
            return c;
        }
};
int main() {
    SoPhuc a, b, tong, hieu, tich, thuong;
    cout << "Nhap so phuc a: " << endl;
    a.nhap();
    cout << "Nhap so phuc b: " << endl;
    b.nhap();
    tong = a.cong(b);
    hieu = a.tru(b);
    tich = a.nhan(b);
    thuong = a.chia(b);
    cout << "Tong hai so phuc: ";
   	 tong.xuat();
    cout << "Hieu hai so phuc: ";
  	  hieu.xuat();
    cout << "Tich hai so phuc: ";
    	tich.xuat();
    cout << "Thuong hai so phuc: ";
    	thuong.xuat();
    return 0;
}
