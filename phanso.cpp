#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
class PhanSo{
    private:
        ll tu,mau;
    public:
        //PhanSo();
        PhanSo(int,int);
        void rutgon();
        friend istream& operator >> (istream&, PhanSo&);
        friend ostream& operator << (ostream&, PhanSo);
        PhanSo operator + (PhanSo);

};
ll ucln(ll a,ll b)
{
    while(b!=0)
    {
        ll du = a % b;
        a = b;
        b = du;
    }
    return a;
}
ll lcm(ll a, ll b)
{
    ll c = ucln(a, b);
    return (a * b) / c;
}
PhanSo PhanSo :: operator +(PhanSo another)
{
    ll c = lcm(this -> mau,another.mau);
    this -> tu *= (c / this -> mau);
    another.tu *= (c / another.mau);
    PhanSo tong(1,1);
    tong.tu = this -> tu + another.tu;
    tong.mau = c;
    ll g = ucln(tong.tu, tong .mau);
    tong.tu /=g;
    tong.mau /=g;
    return tong;
}
istream& operator >> (istream& in, PhanSo& a)
{
    in >> a.tu  >> a.mau;
    return in;
}
ostream& operator << (ostream& out, PhanSo a)
{
    out << a.tu << "/" << a. mau << el;
    return out;
}

PhanSo :: PhanSo(int a,int b)
{
    this -> tu = a;
    this -> mau = b;
}

void PhanSo :: rutgon()
{
    ll g = ucln(this -> tu,this -> mau);
    this -> tu /=g;
    this -> mau /=g;
}
int main()
{
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;

    cout << p + q;

    return 0;
}
