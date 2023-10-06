#include<iostream>
using namespace std;

int main()
{
    cout<<endl<<endl;
    cout<<" ---------------------Simple Calculator----------------------------"<<endl<<endl;
    double a,b;
    int op;
    char input;

    do
    {

    cout<<"Enter two number:     ";
    cin>>a>>b;
    cout<<endl;

    cout<<"1. Addition"<<endl<<"2.Subtraction"<<endl<< "3.Multiplication"<<endl<<"4.Division\n"<<endl;
    cout<<"Enter operation: ";
    cin>>op;
    cout<<endl;

    switch(op)
    {
        case 1:
        cout<<"Addition = "<<a+b<<endl;
        break;

        case 2:
        cout<<"Subtraction = "<<a-b<<endl;
        break;

        case 3:
        cout<<"Multiplication = "<<a*b<<endl;
        break;

        case 4:
        cout<<"Division = "<<a/b<<endl;
        break;

        default:
        cout<<"Enter valid operation!"<<endl;

    }
   
    cout<<"------------------------------"<<endl;

    cout<<"Do you want to Continue (y/n) :  ";
    cin>>input;
    cout<<endl;
    if(input!='y' && input!='n')
    {
        cout<<"Enter valid character!"<<endl;
        break;
    }
    }while(input!='n');

    cout<<endl<<endl<<"--------------------------------Exit------------------------------------------";
    return 0;
}