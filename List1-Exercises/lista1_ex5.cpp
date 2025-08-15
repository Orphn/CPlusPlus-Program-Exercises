#include <iostream>
using namespace std;

class Test{
private:
    string a;
public:
    Test() : a("Unicamp"){};
    void setA(string a = "Unicamp"){
        this->a = a;
    }
    string getA(){
        return a;
    }
};

int main(){
    Test *obj1 = new Test();
    cout << obj1->getA() << endl;
    obj1->setA("Universidade Estadual de Campinas");
    cout << obj1->getA() << endl;
    delete obj1;
    return 0;
}