#include <iostream>
#include <vector>

#include "include/rectangle.hpp"

using namespace std;

int main(){
    system("CLS||CLEAR");
    cout<<"Operator Overloading Rectangle"<<endl;
    cout<<"RECTANGLE 1"<<endl;
    float MidPointY, MidPointX, lengthrec, widthrec;
    cout<<"panjang          :";
    cin>>lengthrec;
    cout<<"lebar            :";
    cin>>widthrec;
    cout<<"Titik tengah Y   :";
    cin>>MidPointY;
    cout<<"Titik tengah X   :";
    cin>>MidPointX;
    rectangle rec1(MidPointY,MidPointX,lengthrec,widthrec);
    

    system("CLS||CLEAR");
    cout<<"RECTANGLE 2"<<endl;
    cout<<"panjang          :";
    cin>>lengthrec;
    cout<<"lebar            :";
    cin>>widthrec;
    cout<<"Titik tengah Y   :";
    cin>>MidPointY;
    cout<<"Titik tengah X   :";
    cin>>MidPointX;
    rectangle rec2(MidPointY,MidPointX,lengthrec,widthrec);
    rec1.print();
    rec2.print();


    

    rectangle rec3;
    rectangle rec4;

    rec3=rec2+rec1;
    rec4=rec1-rec2;
    int inputan;
    if(rec1==rec2){
        cout<<"Kedua persegi panjang beririsan"<<endl;
        cout<<"Menu:"<<endl;
        cout<<"1.Tambah luasan\n2.Kurangi luasan\n3.Operator ++ rec1\n4.Operator ++ rec2\n5.Operator -- rec1\n6.Operator -- rec2\n7.Operator []";cin>>inputan;
        switch (inputan){
            case 1:
            rec3.print();
            break;
            case 2:
            rec4.print();
            break;
            case 3:
            ++rec1;
            rec1.print();
            --rec1;
            break;
            case 4:
            ++rec2;
            rec2.print();
            --rec2;
            break;
            case 5:
            --rec1;
            ++rec1;
            rec1.print();
            break;
            case 6:
            --rec2;
            rec2.print();
            ++rec2;
            break;
        }
    }else {
        cout<<"Kedua persegi panjang tidak beririsan"<<endl;
        cout<<"Menu:"<<endl;
        cout<<"1.Operator ++ rec1\n2.Operator ++ rec2\n3.Operator -- rec1\n4.Operator -- rec2\n5.Operator[]";cin>>inputan;
        switch (inputan){
            case 1:
            ++rec1;
            rec1.print();
            --rec1;
            break;
            case 2:
            ++rec2;
            rec2.print();
            --rec2;
            break;
            case 3:
            --rec1;
            ++rec1;
            rec1.print();
            break;
            case 4:
            --rec2;
            rec2.print();
            ++rec2;
            break;
        }
    }
    
}