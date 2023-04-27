#include <iostream>
using namespace std;

class X {
   public:
   	
    int a, b, c;
};

class Y : public X {
   public:
    void setData(int n1, int n2, int n3) {
        a = n1;
        b = n2;
        c = n3;
    }

    int getData() {
        int sum = (a*a*a) + (b*b*b) + (c*c*c);
        return sum;
    }
};

int main() {
    Y obj;
    obj.setData(2, 3, 4);
    cout <<"cubes of numbers "<<obj.a <<","<< obj.b <<",and "<<obj.c <<" is: "<< obj.getData();
    return 0;
}

