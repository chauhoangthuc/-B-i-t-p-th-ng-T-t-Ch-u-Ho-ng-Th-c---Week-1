#include<bits/stdc++.h>
using namespace std;
#define ll long long
class HinhChuNhat
{
private:
    int chieudai,chieurong;
public:
    HinhChuNhat();
    HinhChuNhat(int chieudai,int chieurong)
    {
        this->chieudai = chieudai;
        this->chieurong = chieurong;
    }
    void setter(int chieudai,int chieurong)
    {
        this->chieudai = chieudai;
        this->chieurong = chieurong;
    }
    int area()
    {
        return this->chieudai * this->chieurong;
    }
};
int main()
{
    HinhChuNhat hcn;
    hcn.setter(6,7);
    cout <<hcn.area() << endl;


}
