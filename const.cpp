
# include <iostream>

int main(){
    // a const is a keyword that will modify a variable or some value so that it is read only
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout <<circumference << " cm";
    return 0;
}
