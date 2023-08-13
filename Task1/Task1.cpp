#include<bits/stdc++.h>
using namespace std;
int main() {
srand(time(0));
int random_num=rand()%100+1;
int user_guess;
do{
    cout<<"Guess the numbre: ";
    cin>>user_guess;
    if(random_num>user_guess){
        cout<<"Too low! Try again."<<endl;
    }
    else if(random_num<user_guess){
        cout<<"Too high! Try again."<<endl;
    }
    else{
        cout<<"Congratulations! You guessed the correct number: "<<random_num<<endl;
    }
}
while(random_num!=user_guess);
return 0;
}
