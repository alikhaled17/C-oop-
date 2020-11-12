#pragma once
#include <iostream>

using namespace std;

// Apstract parent

class Geoshap
{
    protected:
        int dim1, dim2;
    public:
        Geoshap(int d1 = 0, int d2 = 0) {
            dim1 = d1;
            dim2 = d2;
        }
        virtual void area() = 0;
        void cout_area() {this->area();}
};



// Childrens

class Rect : public Geoshap
{
    public:
        Rect(int a, int b) : Geoshap(a, b){}
        void area(){ cout << "area of rectangle is: \t" << ( (dim1+ dim2) *2 ) ; }
};

class Squr : public Geoshap
{
    public:
        Squr(int a, int b) : Geoshap(a, b){}
        void area() {
            if (dim1 == dim2) cout << "area of square is: \t" << (dim1 * 4);
            else cout << endl << "This is Not Square, Not Equal Dimantions" << endl;
        }
};

class Trgl : public Geoshap
{
    public:
        Trgl(int a, int b) : Geoshap(a, b){}
        void area() {cout << "area of triangle is: \t" << ( (dim1 * dim2) / 2 );}
};

class cirql : public Geoshap
{
    private:
        float Pay = 3.14;
    public:
        cirql(int a, int b) : Geoshap(a, b){}
        void area() { cout << "area of cirqle is: \t" << ((dim1 * dim2) * Pay );}
};


