#include <iostream>

#include "vector.h" 

using namespace std;

int main() {
    Vector a;

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    a[0];
    a[1];
    a[2];

    a.size();

    Vector b(a);

    Vector c;
    c = a;

    a.empty();

    c[1];

    return 0;
}
