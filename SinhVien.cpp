#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
class SinhVien
{
private:
    string ma;
    string ten;
    string lop;
    string email;
    float gpa;
public:
    string getlop()
    {
        return this -> lop;
    }
    SinhVien()
    {
        ma = ten = email = "";
        gpa = 0;
    }
    SinhVien(string ten, string email, double gpa)
    {
        this -> ten = ten;
        this -> email = email;
        this -> gpa = gpa;
    }
    bool operator < (SinhVien another)
    {
        return this -> ma < another .ma;
    }

    friend istream& operator >> (istream& in, SinhVien &a);
    friend ostream& operator << (ostream& out, SinhVien a);
};

istream&  operator >> (istream& in, SinhVien &a)
{
    in >> a.ma;
    in.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.email;
    return in;
}
ostream& operator << (ostream& out, SinhVien a)
{
    out << a.ma << " " << a.ten  <<" " << a.lop << " " <<  a.email;
    return out;
}
bool cmp(SinhVien a,SinhVien b)
{
    return a.getlop() < b.getlop();
}
int main()
{
    ll n;
    cin >>n;
    SinhVien a[n];
    map<int, vector<SinhVien>> mp;
    for(int i = 0; i < n; i++)
    {
        SinhVien tmp;
        cin >> tmp;
        mp[stoi(tmp.getlop().substr(1, 2))].push_back(tmp);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int nam;
        cin >> nam;
        cout << "DANH SACH SINH VIEN LOP" << nam << el;
        for(SinhVien x : mp[nam])
            cout << x;
    }
    return 0;
}
