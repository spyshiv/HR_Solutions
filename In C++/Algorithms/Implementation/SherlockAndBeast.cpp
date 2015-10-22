#include <iostream>
using namespace std;

int main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int n;
  cin >> n;
  int flag1 = -1, flag2;
  for (int i = n / 3; i >= 0;i--)
   if ((n - 3 * i) % 5 == 0)
   {
    flag1 = i;
    flag2 = (n - 3 * i) / 5;
    break;
   }
  if (flag1 == -1)
   cout << -1 << endl;
  else
  {
   for (int i = 0; i < 3 * flag1; i++)
    cout << 5;
   for (int i = 0; i < 5 * flag2; i++)
    cout << 3;
   cout << endl;
  }
 }
 return 0;
}