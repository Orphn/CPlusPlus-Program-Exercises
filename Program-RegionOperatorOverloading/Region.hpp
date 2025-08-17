#ifndef REGION_HPP_
#define REGION_HPP_

#include <iostream>
#include <stdexcept>
using namespace std;

class Region {
private:
    double area;

public:
    Region(void);
    Region(double area);
    virtual ~Region();

    double getArea() const;
    void setArea(double area);

    bool operator==(const Region& region) const;
    bool operator!=(const Region& region) const;
    bool operator>(const Region& region) const;
    bool operator>=(const Region& region) const;
    bool operator<(const Region& region) const;
    bool operator<=(const Region& region) const;

    friend ostream& operator<<(ostream& os, const Region& region);
    friend istream& operator>>(istream& is, Region& region);
    friend Region operator+(const Region& r1, const Region& r2);
    friend Region operator-(const Region& r1, const Region& r2);
};

#endif