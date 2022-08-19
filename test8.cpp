#include <iostream>
using namespace std;
int main()
{
   int low, high;
   cout << "Enter two integers:" << endl;
   cin >> low >> high;
   while (low >= high)
   {
    cout << low << endl;
   }
   return 0;
}