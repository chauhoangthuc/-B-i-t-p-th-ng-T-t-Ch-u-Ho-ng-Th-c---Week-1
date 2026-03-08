#include<bits/stdc++.h>
using namespace std;
#define ll long long
class HinhTron
{
    private:
        int banKinh;
        const double pi =acos(-1);
    public:
        HinhTron()
        {
            banKinh = 0;
        }
        void nhap()
        {
            cin >> banKinh;
        }
        double Perimeter()
        {
            return 2 *banKinh * pi;
        }
        double Area()
        {
            return banKinh * banKinh * pi;
        }
};
int main()
{
    HinhTron ht;
    ht.nhap();
    cout << ht.Perimeter() <<endl;
    cout << ht.Area() <<endl;


    return 0;
}
