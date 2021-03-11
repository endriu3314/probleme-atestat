#include <fstream>
#include <iostream>

using namespace std;

ofstream fout("combin.out");

int n, p, k, st[11];

int valid(int k)
{
  return 1;
}

int solutie(int k)
{
  return (k == p);
}

void tipar(int k)
{
  for (int i=0; i<=k; i++) {
    fout << st[i] << ' ';
  }

  fout << endl;
}

void backtracking()
{
  k=1;

  while (k > 0) {
    st[k] = 0;

    if (st[k] < p) {
      st[k]++;

      if (valid(k)) {
        if (solutie(k)) {
          tipar(k);
        } else {
          k++;
          st[k] = st[k-1];
        }
      }
    } else {
      k--;
    }
  }
}

int main()
{
  cout << "n="; cin >> n;
  cout << "p="; cin >> p;

  backtracking();

  fout.close();

  return 0;
}
