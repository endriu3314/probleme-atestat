#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("adiacent.txt");
ofstream fout("complet.txt");

int main()
{
  int a[50][50], i, j, n, ok;

  fin >> n;

  for (i=1; i<n; i++) {
    for (j=1; j<n; j++) {
      fin >> a[i][j];
    }
  }

  ok = 1;

  for (i=1; i<n; i++) {
    for (j=i+1; j<=n; j++) {
      if (a[i][j] == 0)
        ok = 0;
    }
  }

  if (ok)
    fout << "Graf complet";
  else
    fout << "Graful nu este complet";

  fout.close();

  return 0;
}
