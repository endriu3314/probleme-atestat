#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("litere.txt");

int main()
{
  int n;
  char persoane[50][31], litera;

  cout << "n="; cin >> n;

  for (int i=0; i<n; i++) {
    gets(persoane[i]);
  }

  cout << "litera de inceput="; cin >> litera;

  for (int i=0; i<n; i++) {
      if (persoane[i][0] == litera)
      fout << persoane[i];
  }

  fout.close();

  return 0;
}
