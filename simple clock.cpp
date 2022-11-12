/*
This is simple C++ program that shows the time based on the user's
input, There is an increment function that allows for time time to change
( when 60 seconds/minutes pass 1 Minute is added to the time.
 */
# include <iostream>
# include <windows.h>

using namespace std;
int main ()
{
    int h, m, s, a, err;
    err=a=0;
    while (err==0){
        cout << "Enter Hour: "<< '\n';
        cin >> h;
        cout << "Enter Minutes: " << '\n';
        cin >> m;
        cout << "Enter Seconds: " << '\n';
        cin >> s;
        if (h <24&&m < 60&&s <60)
        err++;
        else
        system("cls");}
    while (a==0)
    {
        system("cls");
        cout << h<< ":"<< m<< ":"<<s<<endl;
        Sleep(1000); //1 second of processing time
        s++;
        if (s>59) // checking whether the seconds being input are greater than 59
            {
            s=0;
            m++; // simple increment, adding 1 minute to our time
            }
        if (m>59) // checking whether the minutes being input are greater than 59
            {
            m = 0;
            h++; // simple increment, adding 1 hour to the time
            }
        if (h>24) // checking whether the hours being input are greater than 24
            {
            h=0; // simple increment, starting a new day
            }
    }
    return 0;
}
