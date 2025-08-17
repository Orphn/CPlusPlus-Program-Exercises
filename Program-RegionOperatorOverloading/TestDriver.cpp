#include "TestDriver.hpp"
#include <iostream>
using namespace std;

TestDriver::TestDriver() {
    sPointerRegion1.reset(new Region(200));
    sPointerRegion2.reset(new Region(100));
}

string TestDriver::boolToString(bool expr) const {
    return (expr ? "true" : "false");
}

void TestDriver::showCurrentStatus(void) const {
    cout << "Current Status" << endl;
    cout << "Region 1: " << *sPointerRegion1 << endl;
    cout << "Region 2: " << *sPointerRegion2 << endl;
    cout << endl;
}

void TestDriver::equalityTest(void) const {
    cout << "Testando igualdade (==): "
         << boolToString(*sPointerRegion1 == *sPointerRegion2) << endl;
}

void TestDriver::inequalityTest(void) const {
    cout << "Testando desigualdade (!=): "
         << boolToString(*sPointerRegion1 != *sPointerRegion2) << endl;
}

void TestDriver::relationsTest(void) const {
    cout << "Testando maior que (>): "
         << boolToString(*sPointerRegion1 > *sPointerRegion2) << endl;
    cout << "Testando maior ou igual (>=): "
         << boolToString(*sPointerRegion1 >= *sPointerRegion2) << endl;
    cout << "Testando menor que (<): "
         << boolToString(*sPointerRegion1 < *sPointerRegion2) << endl;
    cout << "Testando menor ou igual (<=): "
         << boolToString(*sPointerRegion1 <= *sPointerRegion2) << endl;
}

void TestDriver::additionTest(void) const {
    unique_ptr<Region> result = make_unique<Region>(*sPointerRegion1 + *sPointerRegion2);
    cout << "Resultado da soma: " << *result << endl;
}

void TestDriver::subtractionTest(void) const {
    try {
        unique_ptr<Region> result = make_unique<Region>(*sPointerRegion1 - *sPointerRegion2);
        cout << "Resultado da subtração: " << *result << endl;
    } catch (const out_of_range& e) {
        cout << "Exceção capturada durante a subtração: " << e.what() << endl;
    }
}

void TestDriver::exceptionTest(void) const {
    try {
        unique_ptr<Region> result = make_unique<Region>(*sPointerRegion2 - *sPointerRegion1);
        cout << "Resultado da subtração: " << *result << endl;
    } catch (const out_of_range& e) {
        cout << "Exceção capturada durante a subtração: " << e.what() << endl;
    }
}

void TestDriver::runAllTests() {
    showCurrentStatus();
    equalityTest();
    inequalityTest();
    relationsTest();
    additionTest();
    showCurrentStatus();
    subtractionTest();
    showCurrentStatus();
    exceptionTest();
    showCurrentStatus();
}