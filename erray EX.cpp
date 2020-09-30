#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int  no;
int Quiz[10],Mid[10],Final[10];
int main()
{	
	char Choice;
	bool Flag = true;
	do {
		cout<<"==================================="<<endl;
		cout<<"                 MENU             "<<endl; 
		cout<<"==================================="<<endl;
		cout << " 1. Input student records " << endl;
		cout << " 2. View all student records " << endl;
		cout << " 3. Exit " << endl;
		cout <<"Select menu :";
		cin >>Choice;
		////////////////////////////////////////


		
		if (Choice == '1')	
		{
			cout<<"Input Number of Student: ";
			cin>>no;
			for(int i=0;i<no;i++)
			{   cout<<"Number"<< i+1 <<endl;
				cout<<"Input Quiz  : ";
				cin>>Quiz[i];
				cout<<"Input Midterm  : ";
				cin>>Mid[i];
				cout<<"Input Final  : ";
				cin>>Final[i];
			}
		}
		else if (Choice == '2')
		{   
			cout<<"--------------------------------"<<endl;
			cout<<"StsID	Quiz	Midtrem		Final  "<<endl;
			cout<<"--------------------------------"<<endl;
			for(int x = 0; x<no ; x++)
			{	cout<<x+1<<setw(9)<<Quiz[x]<<setw(9)<<Mid[x]<<setw(9)<<Final[x]<<endl;
			}
		}
		else if (Choice == '3') Flag = false;
		else{
			cout << "not process.\n"<< endl;
		}
	}while (Flag);
	cout << "\n...Exit Program...\n";
	system("pause");
	return 0 ;
}