//lab1 creating arithmatic equations with two dif values

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   //intiitalizing variables
   
   int firstvar;
   int secondvar;
   double othervar;
    
   //ending initializing variables
    
   //getting values
   
   firstvar = 8;
   cout << "Enter a whole number: ";
   cin >> secondvar;
    
   //ending getting values for variables (othervar is not stable var)
    
   othervar = firstvar + secondvar;
   cout << "sum = " << othervar << endl;
    
   othervar = firstvar * secondvar;
   cout << "product = " << othervar << endl;
    
   //switch divisor and dividend
    
   othervar = secondvar / firstvar;
   cout << "quotient = " << othervar << endl;
    
   othervar = secondvar % firstvar;
   cout << "remainder = " << othervar << endl;
    
   return 0;
}
