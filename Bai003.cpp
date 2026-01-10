#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
struct dathuc{
    int b2,b1,b0;
    void nhap(dathuc&);
    void in(dathuc);
    dathuc cong(dathuc a, dathuc b);
    dathuc tru(dathuc a, dathuc b);
    dathuc nhan(dathuc a, dathuc b);
    ll tinh(dathuc a)
    {
        return a.b0;
    }
};
void dathuc::nhap(dathuc& a)
{
    cin >> a.b2 >> a.b1 >> a.b0;
}
void dathuc::in(dathuc a)
{
    cout << a.b2 << "x^2" << a.b1 << "x" << a.b0 << el;
}
dathuc dathuc :: cong (dathuc a,dathuc b)
{
    dathuc c;
    c.b2 = a.b2 + b.b2;
    c.b1 = a.b1 + b.b1;
    c.b0 = a.b0 + b.b0;
    return c;
}
dathuc dathuc :: tru (dathuc a,dathuc b)
{
    dathuc c;
    c.b2 = a.b2 - b.b2;
    c.b1 = a.b1 - b.b1;
    c.b0 = a.b0 - b.b0;
    return c;
}
dathuc dathuc :: nhan (dathuc a,dathuc b)
{
    dathuc c;
    c.b2 = a.b2 * b.b2;
    c.b1 = a.b1 * b.b1;
    c.b0 = a.b0 * b.b0;
    return c;
}

int main()
{
    dathuc a,b;
    a.nhap(a);
    b.nhap(b);
    dathuc c = a.cong(a,b);
    c.in(c);
    c = a.tru(a,b);
    c.in(c);
    c = a.nhan(a,b);
    c.in(c);
    cout << a.tinh(a) << el;
    cout << b.tinh(b);
    return 0;
}
