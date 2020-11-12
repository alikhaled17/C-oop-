#include <iostream>
#include "shapes.h"

using namespace std;


int main()
{
    Rect  r(2, 5);
    Squr  s(5, 5);
    Trgl  t(2, 5);
    cirql c(2, 5);

    Geoshap *p[4] = {&r, &s, &t, &c};

    for(int i = 0; i < 4; i++)
    {
        p[i]->cout_area();
        cout << endl;
    }

    return 0;
}
