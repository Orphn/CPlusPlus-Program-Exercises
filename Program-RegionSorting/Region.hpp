#ifndef REGION_HPP
#define REGION_HPP

#include <iostream>
using namespace std;

class Region {
private:
    double area;

public:
    Region();
    Region(double area);
    virtual ~Region();

    double getArea() const;
    void setArea(double area);

    bool operator<(const Region& other) const;

    friend ostream& operator<<(ostream& os, const Region& r);
};

#endif