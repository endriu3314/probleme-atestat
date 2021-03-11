#include <stdio>
#include <cstring>

using namespace std;

int main()
{
  char s[31];
  int n, i;

  gets(s);
  n = strlen(s);

  for (i=0; i<n; i++) {
    if (strchr("aeiou", s[i])) {
      strcpy(s+i, s+i+1);
      n--;
    }
  }

  puts(s);

  return 0;
}
