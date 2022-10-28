#include <iostream>  
using namespace std;  
class A  
{  
public:   
    A(const char* str = "\0") //default constructor  
    {  
        cout << " Default Constructor called" << endl;  
    }     
      
    A(const A &a) //copy constructor  
    {  
        cout << "Copy constructor called" << endl;  
    }  
};  
  
int main()  
{  
    A a1 = "copy me"; // Create object of class A  
    return 0;  
}  

Output

Default Constructor called
