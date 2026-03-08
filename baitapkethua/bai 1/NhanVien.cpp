#include "NhanVien.h"
void NhanVien:: nhap()
{
    getline(cin,hoTen);
    cin.ignore();
    getline(cin,ngaySinh);
    cin.ignore();
}
void NhanVien:: xuat()
{
     cout << "Ho ten: " << hoTen << ", Ngay sinh: " << ngaySinh
         << ", Luong: " << luong << endl;
}
double NhanVien:: tinhLuong()
{
    return 0;
}
NhanVien :: ~NhanVien(){
}
