#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");
ofstream fout("cmddc.out");

int cmmdc(int a, int b)
{
  if (a < b) {
    return cmmdc(a-b, b);
  }

  if (b < a) {
    return cmmdc(a, b-a);
  }

  return a;
}

int main()
{
  int v[50], s, i;

  fin >> n;

  for (i=0; i<n; i++) {
    fin >> v[i];
    x = cmmdc(v[0], v[i]);
  }

  for (i=2; i<n; i++) {
    x = cmmdc(x, v[i]);
    fout << x;
  }

  fout.close();

  return 0;
}
