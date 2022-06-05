#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> p;
  int n, number, soma = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> number;
    if(number != 0) p.push(number);
    else p.pop();
  }

  while ((!p.empty()))
  {
    soma += p.top();
    p.pop();
  }
  
  cout << soma << endl;

}
