/*
NULL pointer
A Pointer NULL to a pointer variable in case you do not have exact address to be assigned. This is done at the time of variable declaration. 
A pointer that is assigned NULL is called a null pointer.
Implementation 
Code: 
*/
#include <iostream>

using namespace std;
int main () {
   int  *ptr = NULL;
   cout << "The value of ptr is " << ptr ;
 
   return 0;
}
/*
Output
The value of ptr is 0
null pointers can be used in the following cases:
  - Initialize pointers.
  - Represent conditions such as the end of a list of unknown length.
  - Indicate errors in returning a pointer from a function.
  - To reduce the garbage value.
  
most common use cases for NULL are
a) To initialize a pointer variable when that pointer variable isn’t assigned any valid memory address yet.
b) To check for a null pointer before accessing any pointer variable. By doing so, we can perform error handling in pointer related code.
c) To pass a null pointer to a function argument when we don’t want to pass any valid memory address.
*/
