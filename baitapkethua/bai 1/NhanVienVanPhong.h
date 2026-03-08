#include "NhanVien.h"
#include<iostream>
using namespace std;
class NhanVienVanPhong: public NhanVien{

    private soNgay;
    NhanVienVanPhong(string hoTen,string ngaySinh,double luong,int soNgay)
    :NhanVien(hoTen,ngaySinh,luong)
        {
        this->soNgay = soNgay;
        }
    void tinhLuong()
    {
        luong = soNgay * 100000;
    }
     void xuat() {
        NhanVien::xuat();
        cout << "Nhan Vien Van phong, So ngay lam viec: " << soNgay << endl;
    }
}
