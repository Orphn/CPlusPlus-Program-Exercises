#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual void display() {
        cout << "Forma genérica." << endl;
    }
};

class Circle : public Shape {
private:
    double raio;
public:
    Circle(double r) : raio(r) {}
    double calculateArea() override {
        return M_PI * raio * raio;
    }
    void display() override {
        cout << "Círculo com raio " << raio << " e área " << calculateArea() << endl;
    }
};

class Rectangle : public Shape {
private:
    double largura;
    double altura;
public:
    Rectangle(double l, double a) : largura(l), altura(a) {}
    double calculateArea() override {
        return largura * altura;
    }
    void display() override {
        cout << "Retângulo com largura " << largura << ", altura " << altura
             << " e área " << calculateArea() << endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double altura;
public:
    Triangle(double b, double h) : base(b), altura(h) {}
    double calculateArea() override {
        return (base * altura) / 2;
    }
    void display() override {
        cout << "Triângulo com base " << base << " e altura " << altura
             << " e área " << calculateArea() << endl;
    }
};

void displayArea(Shape* shape) {
    shape->display();
}

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);

    displayArea(&c);
    displayArea(&r);
    displayArea(&t);

    return 0;
}