#include <iostream>
#include "Pilha.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include "Triangle.hpp"

using namespace std;

int main() {
    Pilha<Shape> pilha;

    Circle* circle = new Circle(5.0);
    Square* square = new Square(4.0);
    Triangle* triangle = new Triangle(6.0, 3.0);

    pilha.push(circle);
    pilha.push(square);
    pilha.push(triangle);

    while (!pilha.isEmpty()) {
        Shape* shape = pilha.pop();
        cout << "Shape area: " << shape->area() << endl;
        delete shape;
    }

    return 0;
}