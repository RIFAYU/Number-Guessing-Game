/*
Platform : Open Source
Founder : Rifayudeen Q
contact : coder0rifa@gmail.com , +91 9894372601
Language : CPP
concept : Number Guessing Game
Catagery : Game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int nn,x,y;
int RNG();
void guess();
void recall();

int main()
{
    cout << "\t\t\t\t\tWelcome To Number Guessing Game !!!\n";
    guess();
    return 0;
}

void guess()
{
        try{
    //Number To Find
    cout << "Enter Number To Find : ";
    cin >> ::nn;

     if(cin.fail())
    {throw ::nn , ::x ,::y;}


    //Number OF TestCase
    cout << "Enter How Many Chance You Want : ";
    cin >> ::x;
    //Input For Number
    for(int i = 1; i <= ::x; ++i){
        cout << "Chance Number " << i << " : ";
        cin >> ::y;

        //Logic For Game
        if (RNG() == ::y){
            cout << "You Won !!!\n";
            recall();
            return;
        }else if (::nn < ::y){
            cout << "Please Enter 0 - " << ::nn << "\n";
        }else if(::y == 00){
            cout << "\t\t\t\t\tThank You For Visiting Our Game\n";
            return;
        }else{
            cout << "The Number Is : " << RNG() << "\n";
        }
    
    }
        }catch(...){
            cout << "Please Enter Digit only !!!\n";
        }
    cout << "Game Over !!!\n";\
    recall();
}

int RNG()
{
    srand(time(0));
    return (rand() % ::nn ) + 1;
}

void recall()
{
    cout << "You Want To Play Agian Enter 1 or 00 To Exit Our Game\n";
    cout << "Enter Option : ";
    int p; cin >> p;
    if (p == 1)
        {guess();}
    else if (p == 00)
        {return;}
}