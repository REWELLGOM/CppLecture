// informationhiding.cpp
#include <iostream>

using namespace std;

class Person
{
private:
    string m_name;

public:
    Person(string name)
    {
        m_name = name;
    }

    void sayHello()
    {
        cout << "Hello I'm " << m_name << endl;
    }
};

int main()
{
    Person p1 = Person("Eric Clapton");
    p1.sayHello();
	//cout << p1.m_name << endl; //private으로 선언되어서 공개가안됌

    return 0;
}