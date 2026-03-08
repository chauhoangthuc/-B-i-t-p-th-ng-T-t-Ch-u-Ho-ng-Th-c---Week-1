#include<bits/stdc++.h>
using namespace std;

class NhanVien{
    // attributes
protected:
    string hoTen;
    string ngaySinh;
    double luong;

    //methods
public:
    NhanVien();

    NhanVien(string hoTen,string ngaySinh,double luong)
    {
        this->hoTen = hoTen;
        this->ngaySinh = ngaySinh;
        this->luong = luong;
    }
    NhanVien(string hoTen,string ngaySinh)
    {
        this->hoTen = hoTen;
        this->ngaySinh = ngaySinh;
        this->luong = 0;
    }
    ~NhanVien();
    void nhap();
    void xuat();
    double tinhLuong();
    string getHoTen()
    {
        return this->hoTen;
    }
    string getNgaySinh()
    {
        return this->ngaySinh;
    }
    double getLuong()
    {
        return this->luong;
    }
};

