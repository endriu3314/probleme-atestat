#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("graf.in");
ofstream fout("muchii.txt");

int main()
{
  int a[50][50], n, i, j, gr[50];

  fin >> n;

  for (i=1; i<=n ; i++) {
    for (j=1; j<=n; j++) {
      fin >> a[i][j];
    }
  }

  for (i=1; i<n; i++) {
    for (j=i+1; j<=n; j++) {
      fout << a[i][j] << ' ';
    }

    fout << endl;
  }

  return 0;
}
