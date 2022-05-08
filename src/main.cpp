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

    system ("CLS||CLEAR");
    cout<<"\n\nPersegi Panjang 1"<<endl;
    rec1.print();
    cout<<"\n\nPersegi Panjang 2"<<endl;
    rec2.print();

    rectangle rec3;
    rectangle rec4;

    rec3=rec2+rec1;
    rec4=rec1-rec2;

    int inputan;
    while(1){
    if(rec1==rec2){
        cout<<"\nKedua persegi panjang beririsan"<<endl;
        cout<<"Menu:"<<endl;
        cout<<"1.Tambah luasan\n2.Kurangi luasan\n3.Operator ++ rec1\n4.Operator ++ rec2\n5.Operator -- rec1\n6.Operator -- rec2\n7.Operator []\n8.Quit Program\n";
        cout<<"\nPilihan    :";cin>>inputan;
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
            case 7:
            cout<<"nilai xmin dan ymin rec 1    : "<<rec1[3]<<", "<<rec1[1]<<"  "<<"nilai xmin dan ymin rec2    : "<<rec2[3]<<", "<<rec2[1]<<endl;
            cout<<"nilai xmax dan ymax rec 1    : "<<rec1[4]<<", "<<rec1[2]<<"  "<<"nilai xmax dan ymax rec2    : "<<rec2[4]<<", "<<rec2[2]<<endl;
            break;
            case 8:
            cout<<"Program telah berhenti, terima kasih"<<endl;
            return 0;
            default:
            cout<<"Pilihan anda tidak ada dalam menu"<<endl;
            break;
            
        }
    } else{
        cout<<"\nKedua persegi panjang tidak beririsan"<<endl;
        cout<<"Menu:"<<endl;
        cout<<"1.Operator ++ rec1\n2.Operator ++ rec2\n3.Operator -- rec1\n4.Operator -- rec2\n5.Operator[]\n6.Quit Program\n";
        cout<<"\nPilihan  : ";cin>>inputan;
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
            case 5:
            cout<<"nilai xmin dan ymin rec 1    : "<<rec1[3]<<", "<<rec1[1]<<"  "<<"nilai xmin dan ymin rec2    : "<<rec2[3]<<", "<<rec2[1]<<endl;
            cout<<"nilai xmax dan ymax rec 1    : "<<rec1[4]<<", "<<rec1[2]<<"  "<<"nilai xmax dan ymax rec2    : "<<rec2[4]<<", "<<rec2[2]<<endl;
            break;
            case 6:
            cout<<"Program telah berhenti, terima kasih"<<endl;
            return 0;
            default:
            cout<<"Pilihan anda tidak ada dalam menu"<<endl;
            break;
            }
        }
    }
    
}