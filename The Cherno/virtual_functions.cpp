// allow us to override methods in subclasses
// this file also contains interfaces

// interfaces (pure virtual functions) -> allows us to define a funtion
// in a base class that does not have an implementation and then forces
// subclasses to implement that function

#include <iostream>
#include <string>

class Printable
{
public:
    virtual std::string GetClassName() = 0;

};

class FirstClass : public Printable// the baseclass
{
public:
    virtual std::string GetName() {return "FirstClass"; }
    std::string GetClassName() override {return "FirstClass"; }


};

class SecondClass : public FirstClass
{
private:
    std::string m_Name;

public:
    SecondClass(const std::string& name)
    : m_Name(name){}

    std::string GetName() override {return m_Name; } // overridden
    std::string GetClassName() override {return "SecondClass"; }
};

void Print(Printable* obj)
{
    std::cout << obj -> GetClassName() << std::endl;
}

int main()
{
    FirstClass* f = new FirstClass();


    SecondClass* s = new SecondClass("2nd Class");
     Print(s);
    Print(f);
}
