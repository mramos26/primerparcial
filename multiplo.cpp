/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
  
int num1, num2;
  
	cout<<"dame primer numero";
cin>> num1;
cout<< "dame segundo numero"; 
cin>> num2;
if(num2 % num1 == 0)  {
        
cout<< "el numero "<< num2 << "es multiplo de " << num1 ;
    
} else {
        
cout<< "el numero "<< num2 << "no es multiplo de " << num1 ;
   
 } 
       

return 0;

}
