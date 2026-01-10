#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
bool check(int x)
{
    if(x % 400 == 0)
        return true;
    if(x % 100 == 0)
        return false;
    if(x % 4 == 0)
        return true;
    return false;
}
string s[10] ={"o","Chu Nhat","Thu Hai","Thu Ba","Thu Tu","Thu Nam","Thu Sau","Thu Bay"};
int main()
{
    int x,y;
    cin >> x >> y;
    int g = y;
    cout << "Ngay ban nhap la:" << s[x] << el;
    y = y % 7;
    x =(x + y)%7;
    cout << "Sau " << g << " ngay thi ngay trong tuan se la:" << s[x];
    return 0;
}
