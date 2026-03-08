#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Diem
{
    private:
        int x, y;
    public:
        Diem();
        Diem(int ox,int oy);
        Diem(int ox);
        void xuat();
        ~Diem();
};
Diem :: Diem()
{
     x = y =0;
}
Diem :: Diem(int ox,int oy)
{
    x = ox;
    y = oy;
}
Diem :: Diem(int ox)
{
    x = ox;
    y = 0;
}
Diem::~Diem()
{
    x = 0;
    y = 0;
}
void Diem ::xuat()
{
   cout << "x = " << x << endl;
    cout << "y = " << y <<  endl;
}
int main()
{
    Diem a(5, 2);
    Diem b;
    Diem c;
    cout << "Diem A la:" << endl;
    a.xuat();
    cout << "Diem B la:" << endl;
    b.xuat();
    cout << "Diem C  la:" <<endl;
    c.xuat();
    c.~Diem();
    cout << "Diem C la:" <<endl;
    c.xuat();
    return 0;
}
