#include<bits/stdc++.h>

using namespace std;
#define ll long long
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
NhanVien :: NhanVien()
{
    this->hoTen = "";
        this->ngaySinh = "";
        this->luong = 0;
}
class NhanVienSanXuat :public NhanVien
{
    private:
    //attributes
        double luongCB;
        int soSp;
    public:
    //methods
    NhanVienSanXuat():NhanVien()
    {
        luongCB = 0;
        soSp = 0;
    }
    NhanVienSanXuat(string hoTen,string ngaySinh,double luong,double luongCanBan,int soSanPham)
    : NhanVien(hoTen,ngaySinh,luong)
    {
        this->luongCB = luongCanBan;
        this->soSp = soSanPham;
    }
    void tinhLuong()
    {
        luong = luongCB + soSp * 5000;
    }
    void xuat()
    {
        NhanVien::xuat();
         cout << "Loai: San xuat, Luong can ban: " << luongCB
             << ", So san pham: " << soSp << endl;
    }
};
class NhanVienVanPhong: public NhanVien{

    private :
    int soNgay;
    public:
    NhanVienVanPhong():NhanVien()
    {

        soNgay = 0;
    };
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
};
bool cmp(NhanVien* a,NhanVien* b)
{
    return a->getLuong() > b->getLuong();
}
int main()
{
    vector<NhanVien*> ds;
    int  n;
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cout << " Nhan vien thu " << i + 1 <<":\n";
        cout << "Chon loai(1: San xuat, 2: Van phong): ";
        int loai;
        cin >> loai;
        cin.ignore();
        NhanVien* nv;
        if(loai == 1)
            nv = new NhanVienSanXuat();
        else
            nv = new NhanVienVanPhong();
        nv->nhap();
        nv->tinhLuong();
        ds.push_back(nv);
    }
    cout << "\n---- Danh sach nhan vien ---\n";
    for(auto nv : ds)
        nv->xuat();
    double tong = 0;
    for(auto nv : ds)
        tong += nv->getLuong();
    cout << "\n Tong luong cong ty phai tra :" << tong << endl;
    sort(ds.begin(),ds.end(),cmp);
    cout <<"\n Nhan vien luong cao nhat: " << ds[0]->getHoTen() << ":" << ds[0]->getLuong() << endl;
    cout <<"\n Nhan vien luong thap nhat: " << ds[ds.size() - 1]->getHoTen() << ":" << ds[ds.size() - 1]->getLuong() << endl;
    for(auto it : ds)
    {
        it->xuat();
    }

    return 0;
}
