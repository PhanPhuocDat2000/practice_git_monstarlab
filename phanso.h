#ifndef PHANSO
#define PHANSO

#include <iostream>

using namespace std;

class phanso
{
private:
    int tu;
    int mau;
public:
    phanso();
    ~phanso();
    friend istream& operator>>(istream& stream, phanso &ps);
    friend ostream& operator<<(ostream& stream, phanso const& ps);
    friend phanso operator*(phanso n, phanso m);
};

#endif