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
    int get_tu();
    int get_mau();
    void quydong(phanso &b);
    friend istream& operator>>(istream& stream, phanso &ps);
    friend ostream& operator<<(ostream& stream, phanso const& ps);
    friend phanso operator*(phanso n, phanso m);
};

#endif