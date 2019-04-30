#include <iostream>
#include <fstream>
#include "LinkedStack.h"

using namespace std;

int main()
{
  char data;
  LinkedStack<char> myStack;
  ifstream readFile;
  readFile.open("input.txt");

  /*while(!readFile.eof())
  {
    readFile.get(data);
  }*/
    /*// Demo code
    LinkedStack<int> myStack;
    cout << myStack.isEmpty() << endl;
    // end of demo code*/

    // For each expression in "input.txt":
        // 1. Read expression into string variable
        // 2. Validate expression
        // 3. cout 'valid' or 'invalid' to the console
    return 0;
}
