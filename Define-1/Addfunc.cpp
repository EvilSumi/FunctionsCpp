#include <iostream>
#include <string>

using namespace std;
  

  //case 1
    int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
  }



  // case 2
    int add(int num1,int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
  }
  

  //case 3
   float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
  }
  
  
  int main(){
    
    int a=4;
    int b=6;

    float c=3.4;
    float d=4.3;

    cout<<add(c,d)<<endl;
 

 
 
 
 
 
 
 
 return 0;
}




 

 
 
 
 
 
