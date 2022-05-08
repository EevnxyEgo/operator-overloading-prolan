#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

#include <iostream>

using namespace std;

class rectangle{

    public:
        rectangle();
        rectangle(float MidpointY, float MidpointX, float lengthrec, float widthrec);
        bool operator== (rectangle const &) const;
        rectangle operator+ (rectangle const &);
        rectangle operator- (rectangle const &);
        void operator ++ ();
        void operator -- ();
        void operator ++ (int);
        void operator -- (int);
        float operator[] (int i);

        void print();
    
    private:
        float ymin, ymax, xmin, xmax;

};

#endif