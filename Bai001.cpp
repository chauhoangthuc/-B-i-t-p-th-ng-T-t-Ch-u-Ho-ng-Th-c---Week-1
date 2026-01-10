#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
double cong(double a,double b)
{
    return a + b;
}
double tru(double a,double b)
{
    return a - b;
}
double nhan(double a,double b)
{
    return a * b;
}
double chia(double a,double b)
{
    return a / b;
}
int main()
{
    double a,b;
    cin >> a >> b;
    cout << cong(a,b) << el;
    cout << tru(a,b) << el;
    cout << nhan(a,b) << el;
    cout << chia(a,b) << el;
    return 0;
}
