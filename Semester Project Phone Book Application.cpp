#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
void AddContact(); 
void SearchContact(); 
// Function for adding new Contacts
void AddContact()
{
	system("color 0F");
    string name, email, address;
    int phone;
    cout<<"\n";
	cout << " Enter Contact Name : ";
    cin >> name;
    cout <<" Enter Phone Number : ";
    cin >> phone;
    cout <<" Enter Email        : ";
    cin >> email;
    cout <<" Enter Address      : ";
    cin >> address;
    ofstream Addfile("phonebook.txt");
    Addfile<<" Name      :"<<name<<endl;
	Addfile<<" Phone No. :"<<phone<<endl;
	Addfile<<" Email     :"<<email<<endl;
	Addfile<<" Adress    :"<<address<<endl;
    Addfile.close();
    cout <<"  \nContact added successfully."<<endl;
}
// Function for Search Contacts
void SearchContact()
{
	system("color 0D");
    string name;
    cout << "  \nEnter Search Contact Name: ";
    cin >> name;
    ifstream Searchfile("phonebook.txt"); 
    string line;
    while (getline(Searchfile, line))
    {
        if (line.find(name))
        {
       cout<<line<<endl;
        }
        else
        {
        	cout<<"Not found";
		}
    }
    Searchfile.close();
}
int main()
{
    int choice;
    while (true)
    {
    	system("color 0C");
    	cout<<" \n\n"<<endl;
    	cout<<" |=================================================|"<<endl;
    	cout<<" |                     WELCOME                     |"<<endl;
    	cout<<" |                                                 |"<<endl;
    	cout<<" |=================================================|"<<endl;
    	cout<<" |             PHONE BOOK APPLICATION              |"<<endl;
    	cout<<" |=================================================|"<<endl;
    	cout<<" |                                                 |"<<endl;
    	cout<<" |                                                 |"<<endl;
    	cout<<" |                    MAIN MENU                    |"<<endl;
    	cout<<" |              ======================             |"<<endl;
        cout<<" |                [1] Add Contact                  |"<<endl;
        cout<<" |                [2] Search Contact               |"<<endl;
        cout<<" |                [3] Exit                         |"<<endl;
        cout<<" |              ======================             |"<<endl;
        cout<<" |                                                 |"<<endl;
        cout<<" |                                                 |"<<endl;
        cout<<" |                                                 |"<<endl;
        cout<<" |=================================================|"<<endl;
        cout<<" \n\n Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            AddContact();
            break;
        case 2:
            SearchContact();
            break;
        case 3:
            return 0;
        default:
            cout << " Invalid choice. Please try again." << endl;
            break;
        }
    }
    return 0;
}
