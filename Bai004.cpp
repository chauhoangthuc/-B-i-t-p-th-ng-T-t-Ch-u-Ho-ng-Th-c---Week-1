#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
struct calculate{
    int now;
    int du;
};
struct Time{
  int gio,phut,giay;
  calculate tinhgiay(int a,int b);
  calculate tinhphut(int a,int b,int du);
  calculate tinhgio(int a,int b ,int du);

};
calculate Time:: tinhgiay(int a,int b)
{
    int tong =  a + b;
    int now = tong % 60;
    int du = tong / 60;
    return {now,du};
}
calculate Time:: tinhphut(int a, int b, int du)
{
    int tong = a + b + du;
    int now = tong % 60;
    int du1 = tong / 60;
    return {now,du1};
}
calculate Time:: tinhgio(int a,int b,int du)
{
     int tong = a + b + du;
    int now = tong % 24;
    int du1 = tong / 24;
    return {now,du1};
}
void nhap(Time &a)
{

    cout << "Nhap gio: ";
    cin >> a.gio;
    cout << "Nhap phut: ";
    cin >> a.phut;
    cout << "Nhap giay: ";
    cin >> a.giay;

}
void xuli(Time a, int x,int y,int z)
{
    calculate giay = a.tinhgiay(a.giay,z);
    calculate phut = a.tinhphut(a.phut,y,giay.du);
    calculate gio = a.tinhgio(a.gio,x,phut.du);
    cout << "Gio phut giay hien tai la : ";
    cout << gio.now << "::" << phut.now << "::" << giay.now;
}
int main()
{
    Time a;
    nhap(a);
     int x,y,z;
    cout << "Nhap gio can them: ";
    cin >> x;
    cout << "Nhap phut can them: ";
    cin >> y;
    cout << "Nhap giay can them: ";
    cin >> z;
    xuli(a,x,y,z);


    return 0;
}
