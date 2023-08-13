#include<bits/stdc++.h>
using namespace std;
int main() {
float num1,num2;
cout<<"Enter num1"<<endl;
cin>>num1;
cout<<"Enter  num2"<<endl;
cin>>num2;
int op;
cout<<" Enter 1 for Addition\n 2 for Substraction\n 3 for Multiplication\n 4 for Division\n"<<endl;
cin>>op;
switch(op){
    case 1: cout<<num1<<"+"<<num2<<"="<<num1+num2;
            break;
    case 2: cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
    case 3: cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
    case 4: cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;
    default:
            cout<<"Error! please input the correct Operator";
            break;
    
}
return 0;
}
