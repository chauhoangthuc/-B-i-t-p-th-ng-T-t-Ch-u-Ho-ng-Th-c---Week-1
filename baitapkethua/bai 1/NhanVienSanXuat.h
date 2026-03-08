#include "NhanVien.h"
#include<iostream>
using namespace std;
class NhanVienSanXuat :: NhanVien()
{
    private:
    //attributes
        double luongCB;
        int soSP;
    public:
    //methods
    NhanVienSanXuat(string hoTen,string ngaySinh,double luong,double luongCanBan,int soSanPham)
    : NhanVien(hoTen,ngaySinh,luong);
    {
        this->luongCanBan = luongCanBan;
        this->soSanPham = soSanPham;
    }
    void tinhLuong()
    {
        luong = luongCB + soSP * 5000;
    }
    void xuat()
    {
        NhanVien::xuat();
         cout << "Loai: San xuat, Luong can ban: " << luongCB
             << ", So san pham: " << soSP << endl;
    }
}
