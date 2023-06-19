// Program to change values of variables using 3 variables

#include <iostream>
#include <string>
using namespace std;

int main() {

   int a, b, temp;
   a = 2;
   b = 3;

   temp = a;
   a = b;
   b = temp;
   cout << "new a = " << a << "; " << "new b = " << b << endl;
   
   return 0;
}