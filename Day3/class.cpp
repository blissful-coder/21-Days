#include <iostream>

using namespace std;

class demoClass{
    int i;

    public:
    void setI(int i){
        this->i = i;
    }
    int getI(){
        return this->i;
    }
};

int main(){
    demoClass obj;
    cout<<"\nValue of i: "<< obj.getI();
    obj.setI(4);
    cout<<"\nValue of i: "<< obj.getI();
    return 0;
}