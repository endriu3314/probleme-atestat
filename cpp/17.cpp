#include <fstream>

using namespace std;

ifstream fin("matrice.in");

int main()
{
  int a[50][50], i, j, n, ok;

  fin >> n;

  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      fin >> a[i][j];
    }
  }

  ok = 1;

  for (i=0; i<n; i++) {
    for (j=i+1; j<n; j++) {
      if (a[i][j] != a[j][i]) {
        ok = 0;
      }
   }
  }

  if (ok) cout << "matricea este simetrica";
  esle cout << "matricea nu este simetrica";
}
