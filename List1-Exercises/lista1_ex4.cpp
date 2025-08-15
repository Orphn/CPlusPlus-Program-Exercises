#include <iostream>
using namespace std;

class Test{
private:
    int a;
public:
    Test(){
        cout << "Classe instanciada!" << endl;
    }
    void setA(int a){
        this->a = a;
    }
    int getA(){
        return a;
    }
};

int main(){
    Test obj1;
    obj1.setA(22);
    cout << obj1.getA() << endl;
    return 0;
}