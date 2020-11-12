#include <iostream>

using namespace std;

struct Complex
{
    private:
        int real;
        int img;
    public:
        Complex(int r=0,int i=0)
        {
            real = r;
            img = i;
        }
        void show() {cout << real << "\t" << img << endl;}

        void sum(Complex c1, Complex c2)
        {

            img = c1.img + c2.img;
            real = c1.real + c2.real;
        }
};
int main()
{
    int x = 1, y = 2;
    int z = x + y;

    cout << z;

    return 0;
}

// ##############################################################################################
// ##############################################################################################
// ##############################################################################################
// ##############################################################################################

//#include <iostream>
//
//using namespace std;
//
//struct Complex
//{
//    public:
//        Complex()
//        {
//            cout << this;
//        }
//
//};
//int main()
//{
//    Complex c1;
//    cout << endl;
//    Complex c2;
//
//    return 0;
//}

// ##############################################################################################
// ##############################################################################################
// ##############################################################################################
// ##############################################################################################

//#include <iostream>
//
//using namespace std;
//
//struct Complex
//{
//    private:
//        int real;
//        int img;
//    public:
//        Complex(int r=0,int i=0)
//        {
//            real = r;
//            img = i;
//        }
//        void show() {cout << real << "\t" << img << endl;}
//
//        void sum(Complex c1, Complex c2)
//        {
//
//            img = c1.img + c2.img;
//            real = c1.real + c2.real;
//
//        }
//
//        Complex sum(Complex c)
//        {
//            Complex x;
//            x.img  = img + c.img;
//            x.real = real + c.real;
//
//            return x;
//        }
//
//        Complex operator+(Complex c)
//        {
//
//            Complex x;
//            x.img  = img + c.img;
//            x.real = real + c.real;
//
//            return x;
//        }
//
//
//};
//
//int main()
//{
//
//
//    Complex c1(2, 2), c2(5, 5), c3;
//
//    c3.sum(c1, c2);
//    c3.show();
//
//    c3 = c1.sum(c2);
//    c3.show();
//
//    c3 = c1 + c2;
//    c3.show();
//
//
//    return 0;
//}
//

// ##############################################################################################
// ##############################################################################################
// ##############################################################################################
// ##############################################################################################


//#include <iostream>
//
//using namespace std;
//
//struct Complex
//{
//    private:
//        int real;
//        int img;
//    public:
//        Complex(int r=0,int i=0)
//        {
//            real = r;
//            img = i;
//        }
//        void show() {cout << real << "\t" << img << endl;}
//
//
//
//        Complex operator -(Complex c)
//        {
//            Complex x;
//            x.img  = img - c.img;
//            x.real = real - c.real;
//
//            return x;
//        }
//
//        Complex operator++() // ++Complex
//        {
//            img++;
//            real++;
//            return *this;
//        }
//
//        Complex operator++(int) // Complex++
//        {
//            Complex t;
//            t = *this;
//            img++;
//            real++;
//            return t;
//        }
//
//        Complex operator+(int c) // Complex + 7
//        {
//            img = img + c ;
//            real = real + c;
//            return *this;
//        }
//
//        Complex operator+=(Complex) // += Complex
//        {
//
//            img += img;
//            real += real;
//            return *this;
//        }
//
//        Complex operator-=(Complex) // -= Complex
//        {
//
//            img -= img;
//            real -= real;
//            return *this;
//        }
//
//        int operator > (Complex c) // Complex > Complex
//            {return (real > c.real && img > c.img) ? 1 : 0;}
//
//        int operator < (Complex c) // Complex < Complex
//            {return (real < c.real && img > c.img) ? 1 : 0;}
//
//        int operator <= (Complex c) // Complex < Complex
//            {return (real <= c.real && img <= c.img) ? 1 : 0;}
//
//        int operator == (Complex c) // Complex < Complex
//            {return (real == c.real && img == c.img) ? 1 : 0;}
//};
//
//int main()
//{

//    c3.sum(c1, c2);
//    c3 = c1.sum(c2);
//
//    Complex c1(2, 2), c2(5, 5), c3;

//
//    c2 = c1++;
//    c2.show(); // c2 = 2  2

//    c2 = ++c1;
//    c2.show(); // c2 = 4  4
//
//    c2 = c2 + 7;
//    c2.show(); // c2 = 11  11
//
//    c2 += c2;
//    c2.show(); // c2 = 22  22
//
//    c2 -= c2;
//    c2.show(); // c2 = 0  0
//
//    (c1 > c2)? cout << "True" :cout << "False" ; // True
//    cout << endl;
//
//    (c1 < c2)? cout << "True" :cout << "False" ; // False
//    cout << endl;
//
//    Complex c3(0, 0);
//    (c2 <= c3)? cout << "True" :cout << "False" ; // True
//    cout << endl;
//
//    (c2 == c3)? cout << "True" :cout << "False" ; // True
//    cout << endl;

//    return 0;
//}
