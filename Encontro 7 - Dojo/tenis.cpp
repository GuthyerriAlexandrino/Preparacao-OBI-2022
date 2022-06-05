#include <iostream>

using namespace std;

int main() {
  int vitorias = 0;
  char c;

  for(int i = 0; i < 6; i++) {
    cin >> c;
    if(c == 'V') vitorias++;
  }

  if(vitorias == 0) cout << -1 << endl;
  else if(vitorias < 3) cout << 3 << endl;
  else if(vitorias < 5) cout << 2 << endl;
  else cout << 1 << endl;
}
