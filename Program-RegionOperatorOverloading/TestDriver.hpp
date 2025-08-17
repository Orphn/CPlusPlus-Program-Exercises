#ifndef TESTDRIVER_HPP_
#define TESTDRIVER_HPP_

#include <memory>
#include "Region.hpp"
using namespace std;

class TestDriver {
private:
    unique_ptr<Region> sPointerRegion1;
    unique_ptr<Region> sPointerRegion2;

    string boolToString(bool expr) const;
    void showCurrentStatus(void) const;
    void equalityTest(void) const;
    void inequalityTest(void) const;
    void relationsTest(void) const;
    void additionTest(void) const;
    void subtractionTest(void) const;
    void exceptionTest(void) const;

public:
    TestDriver();
    void runAllTests();
};

#endif