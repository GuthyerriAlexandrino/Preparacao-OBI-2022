#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> l;
  int n;

  cin >> n;

  for (int i {}; i < n; ++i) {
    int num;

    cin >> num;

    if (num == 0) {
      l.pop_back();
    } else {
      l.push_back(num);
    }
  }

  int count {};

  /*
  
  */

  for (int n : l) {
    if (count++ > 0) {
      cout << " ";
    }

    cout << n;
  }

  cout << '\n';

  return 0;
}