#include <iostream>
using namespace std;

int main ()
{
   int i = 10;

   do
   {
       int j = 10;
       do
       {
           cout << "i = " << i << " and j = " << j << endl;
           j--;
       }while(j > 5);

       i--;

   }while(i > 4);

   return 0;
}
