#include <iosteam>
#include <fstream>

using namespace std;

int sc(int x)
{
  int sum = 0;

  while (x) {
    sum = x%10 + sum;
    x = x/10;
  }

  return sum;
}

int main()
{
  int x;

  for (x=100; x<= 999; x++) {
    if (x % sc(x) == 0)
      fout << x << ' ';
  }

  fout.close();

  return 0;
}
