#include<bits/stdc++.h>
using namespace std;
class HinhTamGiac
{
    private:
        int canh1;
        int canh2;
        int canh3;
    public:
        HinhTamGiac(){
        canh1 = canh2 = canh3 = 0;
        }
        HinhTamGiac(int canh1,int canh2,int canh3)
        {
            this->canh1 = canh1;
            this->canh2 = canh2;
            this->canh3 = canh3;
        }
        void Nhap()
        {
            cin >> canh1 >> canh2 >> canh3;
        }
        int perimeter()
        {
            return canh1 + canh2 + canh3;
        }
        bool checkHopLe()
        {
            return ((canh1 < canh2 + canh3) && (canh2 < canh1 + canh3) && (canh3 < canh1 + canh2));
        }
        double area()
        {
            double p = perimeter() / 2;
            return sqrt(p * (p - canh1) * (p - canh2) * (p - canh3));
        }
};
int main()
{
    HinhTamGiac Triangle1;
    Triangle1.Nhap();
    if(Triangle1.checkHopLe() == true)
        cout << "La tam giac " << endl;
    else
        cout << "Khong phai la tam giac " <<endl;
    cout << "Dien tich tam giac la " << Triangle1.area()  << endl;
    cout << "Chu vi tam giac la " <<Triangle1.perimeter() <<endl;
    return 0;
}
