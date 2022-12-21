#include <iostream>

using namespace std;

void Log(const char* message)
{
    cout << message<< endl;
}
int main()
{
    cout<<" Code Runs"<< endl;
    Log("Log works");

    return 0;
}
