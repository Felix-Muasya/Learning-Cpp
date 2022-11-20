// simple switch case
 #include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a Number between 1 and 8:";
	cin>>num;

	switch(num)
	{
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
            break;
        case 8:
            cout <<"Try numbers 1 - 7";
            break;

			// optional
		default:
			cout<<"Invalid Input";
	}
	// end of switch case

	return 0;
}
