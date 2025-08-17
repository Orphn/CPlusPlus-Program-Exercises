#include "Region.hpp"
#include <stdexcept>

Region::Region() : area(0) {}

Region::Region(double area) : area(area) {}

Region::~Region() {}

double Region::getArea() const {
    return area;
}

void Region::setArea(double area) {
    if (area < 0) throw out_of_range("Área negativa");
    this->area = area;
}

bool Region::operator<(const Region& other) const {
    return this->area < other.area;
}

ostream& operator<<(ostream& os, const Region& r) {
    os << "Região com área: " << r.area << " m²";
    return os;
}