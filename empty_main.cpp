#include <iostream>

//an empty still prints 'hello world'

using namespace std;

int b() 
{
  cout << "Hello World...before main \n ";
  return 0;
}

static int a = b();

int main()
{
	return 0; 
}
