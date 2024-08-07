#include "phanso.h"

phanso::phanso()
{
    tu = 0;
    mau = 1;
}

phanso::~phanso(){}

int phanso::get_tu()
{
    return tu;
}

int phanso::get_mau()
{
    return mau;
}

void phanso::quydong(phanso &b)
{
    if(this->mau != b.mau)
    {
        phanso temp = *this;
        this->tu *= b.mau;
        this->mau *= b.mau;

        b.tu *= temp.mau;
        b.mau *= temp.mau;
    }
    cout << this->tu << "\n-\n" << this->mau << "\n";
    cout << b.tu << "\n-\n" << b.mau << "\n";
}

istream& operator>>(istream& stream, phanso &ps)
{
    stream >> ps.tu;
    stream >> ps.mau;
    return stream;
}

ostream& operator<<(ostream& stream, phanso const& ps)
{
    stream << ps.tu << "\n-\n" << ps.mau << "\n";
    return stream;
}

phanso operator*(phanso n, phanso m)
{
    phanso sum;
    sum.tu = n.tu * m.tu;
    sum.mau = n.mau * m.mau;
    return sum;
}