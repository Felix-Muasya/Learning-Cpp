// usually pointers in disguise
// reference an existing variable
// once declared references cannot be changed
// once declared you have to assign it to something

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void Increment(int& value) // modify variable by passing it into a function
{
    value++; // increment value
}

int main()
{
    int a = 5;
    int& ref = a; // created an alias

    ref = 2;
    LOG(a);
    Increment(a); // passing memory address
    LOG(a);

    // you can reference a dereference a pointer

    std::cin.get();

}
