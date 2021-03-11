#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char s[31];
  int n;

  gets(s);
  n = strlen(s);

  for (int i=1; i<=n; i++) {
    for (int j=n-i; j>0; j--) {
      cout << s[j];
    }
    cout << ' ';
  }

  return 0;
}
