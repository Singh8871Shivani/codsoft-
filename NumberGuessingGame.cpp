#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
   
    cout<<endl;
    cout<<endl;

    string name;
    char input;
    int inputuser;
    int score=0;

   
    cout<<"\t\t\t\tNUMBER  GUESSING  GAME "<<endl;
     cout<<endl<<endl;
    cout<<" Enter  your  name :            ";
    getline(cin,name);
    cout<<endl;
    cout<<"--------START--------"<<endl;

    do
    {
        srand(time(0));
        int secret_number = rand()%5 + 1;
        
         do
         {
        
        cout<<endl; 
        cout<<" Enter any number in between range 1 to 5  :         ";
        cin>>inputuser;
        cout<<endl;

        
         cout<<endl;
        if(inputuser == secret_number)
        {
            cout<<" Congratulations ! "<<name<< " You guessed the correct number. "<<endl;
            score++;
            cout<<"---------------------------------------------------------------"; cout<<endl;
            break;

        }
        else if(inputuser > secret_number)
        {
            cout<<" Your Guess was too high"<<endl;
        }
        else if(inputuser < secret_number)
        {
            cout<<" Your Guess was too low"<<endl;
        }

        cout<<" Would You to like to Try Again (y/n)  :   ";
        cin>>input;

        if( (input!='y' ) && (input!='n' ) )
       {
            cout<<" Enter valid character !"<<endl;
            continue;

       } 

       }while(inputuser!=secret_number);

           cout<<" Would You to like to Try Again (y/n)  :   ";
        cin>>input;

        if( (input!='y' ) && (input!='n' ) )
       {
            cout<<" Enter valid character !"<<endl;
            continue;

       } 
    }while(input!='n');

    cout<<endl<<endl;
    cout<<" Your  score  :    "<<score<<endl;
    cout<<" Thankyou "<<name<< "!"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"-------------------------------------------  Game  End  -----------------------------------------------"<<endl;

    return 0;
    

}