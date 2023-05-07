#include <iostream>
#include <vector>
using namespace std;
class Visitor {
private:
    int giave = 70000;
    int x = 20000; // x la gia moi tro choi
    int choi = 0;
public:
    Visitor(int dachoi) {
        choi = dachoi;
    }
    int TinhGV() {
        return giave + (choi * x);
    }
};
int main() {
    int num_visitors, dachoi;
    int dthu = 0;
    cout << "Nhap so luong nguoi tham quan cong vien ";
    cin >> num_visitors;
    for (int i = 0; i < num_visitors; i++) {
        cout << "Nhap so tro choi da choi ung voi nguoi thu " << i + 1 << ": ";
        cin >> dachoi;
        Visitor visitor(dachoi);
        dthu += visitor.TinhGV();
    }
    cout << "Tong doanh thu cua cong vien la: " << dthu << endl;
    return 0;
}