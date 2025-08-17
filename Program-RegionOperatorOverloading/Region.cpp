#include "Region.hpp"
#include <stdexcept>

Region::Region(void) : area(0) {}

Region::Region(double area) : area(area) {}

Region::~Region() {}

double Region::getArea() const {
    return area;
}

void Region::setArea(double area) {
    this->area = area;
}

bool Region::operator==(const Region& region) const {
    return this->area == region.area;
}

bool Region::operator!=(const Region& region) const {
    return this->area != region.area;
}

bool Region::operator>(const Region& region) const {
    return this->area > region.area;
}

bool Region::operator>=(const Region& region) const {
    return this->area >= region.area;
}

bool Region::operator<(const Region& region) const {
    return this->area < region.area;
}

bool Region::operator<=(const Region& region) const {
    return this->area <= region.area;
}

ostream& operator<<(ostream& os, const Region& region) {
    os << "Area: " << region.area << " m²";
    return os;
}

istream& operator>>(istream& is, Region& region) {
    cout << "Informe a área da região: ";
    is >> region.area;
    return is;
}

Region operator+(const Region& r1, const Region& r2) {
    return Region(r1.area + r2.area);
}

Region operator-(const Region& r1, const Region& r2) {
    if (r1.area - r2.area < 0) {
        throw out_of_range("A área resultante não pode ser negativa.");
    }
    return Region(r1.area - r2.area);
}