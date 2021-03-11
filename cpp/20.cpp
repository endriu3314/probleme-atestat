#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ofstream fout("litere.txt");

int main()
{
  int n, lungimeCuvant, ok = 0;
  char s[50][31], litera;

  cout << "n="; cin >> n;

  for (int i=0; i<n; i++) {
    gets(s[i]);
  }

  cout << "litera de inceput sau sfarsit="; cin >> litera;

  for (int i=0; i<n; i++) {
    lungimeCuvant = strlen(s[i]);

      if (s[i][0] == litera && s[i][lungimeCuvant - 1] == litera) {
      ok = 1;
      fout << s[i];
    }
  }

  if (ok == 0) {
    cout << "Nu exista siruri de caracter care sa inceapa sau sa se termine cu " << litera;
  }

  fout.close();

  return 0;
}
