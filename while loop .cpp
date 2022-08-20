#include <iostream>
using namespace std;
int main()
{
   int no = 50, sum = 0;
    while (no <= 100)
    {
        sum += no; // sum = sum of no
        ++no;
    }
    cout << "sum of 50 to 100 = " << sum << endl;
     return 0;
    
}