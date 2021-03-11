#include <iostream>

using namespace std;

void cifre(int x)
{
  if (x > 0) {
    cifre(x/10);
    cout << x%10 << endl;
  }
}

int main()
{
  int x;

  cout << "x="; cin > x;
  cifre(x);

  return 0;
}
