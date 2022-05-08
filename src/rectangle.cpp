#include <iostream>
#include <cmath>
#include "include/rectangle.hpp"

rectangle::rectangle(){}

void rectangle::print(){
    float widthrec=(this->ymax)-(this->ymin);
    float lengthrec=(this->xmax)-(this->xmin);
    widthrec=abs (widthrec);
    lengthrec=abs (lengthrec);
    cout<< "\ntitik tengah X    : "<<((this->xmax)+(this->xmin))/2;
    cout<< "\ntitik tengah Y    : "<<((this->ymax)+this->ymin)/2;
    cout<< "\nlebar             : "<<widthrec;
    cout<< "\npanjang           : "<<lengthrec;
    cout<< "\nymax              : "<<this->ymax;
    cout<< "\nymin              : "<<this->ymin;
    cout<< "\nxmax              : "<<this->xmax;
    cout<< "\nxmin              : "<<this->xmin << endl;
}

rectangle::rectangle(float MidPointY, float MidPointX, float lengthrec, float widthrec)
{
    this->ymin=MidPointY-(0.5*widthrec);
    this->ymax=MidPointY+(0.5*widthrec);
    this->xmin=MidPointX-(0.5*lengthrec);
    this->xmax=MidPointX+(0.5*lengthrec);
}
bool rectangle::operator==(rectangle const &check)const
{
    if ((this->ymin<check.ymax) && (this->ymax>check.ymin) && (this->xmin<check.xmax) && (this->xmax>check.xmin))
    {
        return true;
    }else if((this->ymin!=this->ymax) || (this->xmax!=this->xmin) || (check.xmin!=check.xmax) || (check.ymax!=check.ymin))
    {
        return true;
    }else{
        return false;
    }
}

rectangle rectangle::operator+(rectangle const &check)
{
    rectangle temp(0,0,0,0);

    if (*this == check){
        temp.ymin=min(this->ymin,check.ymin);
        temp.ymax=max(this->ymax,check.ymax);
        temp.xmin=min(this->xmin,check.xmin);
        temp.xmax=max(this->xmax,check.xmax);
        return temp;
    }else{
        cout<<"\nkedua persegi panjang tidak beririsan"<<endl;
    }
}

rectangle rectangle::operator-(rectangle const &check)
{
    rectangle temp(0,0,0,0);

    if (*this == check){
        temp.ymin=max(this->ymin,check.ymin);
        temp.ymax=min(this->ymax,check.ymax);
        temp.xmin=max(this->xmin,check.xmin);
        temp.xmax=min(this->xmax,check.xmax);
        return temp;
    }else{
        cout<<"\nkedua persegi panjang tidak beririsan"<<endl;
    }
}

void rectangle::operator++(){
    float MidPointX=0, MidPointY=0, lengthrec=0, widthrec=0;

    widthrec= this->ymax-this->ymin;
    lengthrec= this->xmax-this->xmin;
    
    MidPointY= (widthrec*0.5)+this->ymin;
    MidPointX= (lengthrec*0.5)+this->xmin;

    widthrec=widthrec*2;
    lengthrec=lengthrec*2;

    this->ymin=MidPointY-(widthrec*0.5);
    this->ymax=MidPointY+(widthrec*0.5);
    this->xmin=MidPointX-(lengthrec*0.5);
    this->xmax=MidPointX+(lengthrec*0.5);
}

void rectangle::operator--(){
    float MidPointX=0, MidPointY=0, lengthrec=0, widthrec=0;

    widthrec= this->ymax-this->ymin;
    lengthrec= this->xmax-this->xmin;
    
    MidPointY= (widthrec*0.5)+this->ymin;
    MidPointX= (lengthrec*0.5)+this->xmin;

    widthrec=widthrec*0.5;
    lengthrec=lengthrec*0.5;

    this->ymin=MidPointY-(widthrec*0.5);
    this->ymax=MidPointY+(widthrec*0.5);
    this->xmin=MidPointX-(lengthrec*0.5);
    this->xmax=MidPointX+(lengthrec*0.5);
}

void rectangle::operator++(int){
    float MidPointX=0, MidPointY=0, lengthrec=0, widthrec=0;

    widthrec= this->ymax-this->ymin;
    lengthrec= this->xmax-this->xmin;
    
    MidPointY= (widthrec*0.5)+this->ymin;
    MidPointX= (lengthrec*0.5)+this->xmin;

    widthrec=widthrec*2;
    lengthrec=lengthrec*2;

    this->ymin=MidPointY-(widthrec*0.5);
    this->ymax=MidPointY+(widthrec*0.5);
    this->xmin=MidPointX-(lengthrec*0.5);
    this->xmax=MidPointX+(lengthrec*0.5);
}

void rectangle::operator--(int){
    float MidPointX=0, MidPointY=0, lengthrec=0, widthrec=0;

    widthrec= this->ymax-this->ymin;
    lengthrec= this->xmax-this->xmin;
    
    MidPointY= (widthrec*0.5)+this->ymin;
    MidPointX= (lengthrec*0.5)+this->xmin;

    widthrec=widthrec*0.5;
    lengthrec=lengthrec*0.5;

    this->ymin=MidPointY-(widthrec*0.5);
    this->ymax=MidPointY+(widthrec*0.5);
    this->xmin=MidPointX-(lengthrec*0.5);
    this->xmax=MidPointX+(lengthrec*0.5);
}

float rectangle::operator[](int i)
{
    if(i==1){
        return this->ymin;
    }else  if(i==2){
        return this->ymax;
    }else  if(i==3){
        return this->xmin;
    }else  if(i==4){
        return this->xmax;
    }
    return 0;
}





