#include <iostream>
#include <string>
using namespace std;
int main()
{
   int my_nums[]={2,3,4,5,6};
   for (int i = 0; i < 5; i++)
   {
      cout << my_nums[i] << endl;
   }
   cout<<"get break"<<endl;

   for (int i : my_nums)
   {
      cout << i << endl;
   }

   
   return 0;  
}