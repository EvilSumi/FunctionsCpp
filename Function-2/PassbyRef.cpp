#include <iostream>
#include <string>

using namespace std;



void changevalue(int &z, int &y){ //formal Parameter

    z=100;
    y=99;
    cout<<&z<<" "<<&y<<endl;
    }
 
 int main(){
 
  int a=5;
  int b=7; 
  
  changevalue(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<&a<<" "<<&b<<endl;

  
 }