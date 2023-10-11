#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int num,tries=0,guess;
    srand(time(0));
    num=rand() % 100 + 1;
    cout<<"Number Guess Game"<<endl;
    do{
        cout<<"guess a number between 1 and 100 : ";
        cin>>guess;
        tries+=1;
        if(guess>num){
            cout<<"Too high"<<endl;
        }
        else if(guess<num){
            cout<<"Too low"<<endl;
        }
        else{
            cout<<"You guessesd correct in "<<tries<<" tries"<<endl;
        }
    }while(guess !=num);
    return 0;
}