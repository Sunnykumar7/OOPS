#include<iostream>
using namespace std;
class Employee
{

    private:
    int Salary;
    public:
    void setSalary(int s){
        Salary=s;
    }
    int getSalary(){
        return(Salary);
    }
};
int main()
{
    Employee myobj;
    myobj.setSalary(50000);
    cout<<myobj.getSalary()<<endl;
return 0;
}