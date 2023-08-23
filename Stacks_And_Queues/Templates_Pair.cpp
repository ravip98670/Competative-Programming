#include <iostream>
using namespace std;

template <typename T, typename V>
class Pair{
    T x;
    V y;
    public:

    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }

    void setY(V y){
        this->y = y;
    }
    V getY(){
        return y;
    }
};

int main(){
    Pair<double,Pair<double,int>> p1;
    p1.setX(10.56);
    Pair<double,int> p2;
    p2.setX(12.56);
    p2.setY(14);
    p1.setY(p2);

    cout<<p1.getX()<<" "<<p1.getY().getX()<<" "<<p1.getY().getY()<<endl;


    return 0;
}
