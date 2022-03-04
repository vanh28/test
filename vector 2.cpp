#include <bits/stdc++.h>
using namespace std;
struct phanso{
	int tu, mau;
};
void nhap(phanso &x) {
	cin >> x.tu >> x.mau;
}
void xuat(phanso &x) {
	cout << x.tu << "/" << x.mau;
}
phanso tong(phanso x1, phanso x2) {
	phanso re;
	re.tu = x1.tu*x2.mau + x1.mau*x2.tu;
	re.mau = x1.mau*x2.mau;
	return re;
}
int main() {
	phanso x1, x2, ketqua;
	nhap(x1);
	xuat(x1);
	return 0; 
}
