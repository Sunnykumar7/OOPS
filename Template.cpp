#include<iostream>
using namespace std;
template< class T>
class Test{
    private:
    T ans;
    public:
    Test(T n):ans(n){
        cout<<"inside constructor"<<endl;
    }
    T getNumber(){
        return ans;
    }
    };
    int main()
    {
        Test<int> numInt(50);
        Test<double>numDouble(125);
        cout<<"Integer number is:"<<numInt.getNumber()<<endl;
        cout<<"double number is:"<<numDouble.getNumber()<<endl;
        return 0;
    }