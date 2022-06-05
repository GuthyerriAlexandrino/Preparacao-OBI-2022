#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int main() {
  string str;

  cin >> str;

  unordered_map<char, set<int>> answer {{'P', {}}, {'U', {}}, {'E', {}}, {'C', {}}};
  unordered_map<char, bool> errors {{'C', false}, {'E', false}, {'U', false}, {'P', false}};

  for (size_t i {}; i  < str.size() / 3; ++i) {
    string sub_str {str.substr(0 + i * 3, 3)};

    auto &&[it, insert] {answer[sub_str.at(2)].insert(stoi(sub_str.substr(0, 2)))};

    if (!insert) {
      errors[sub_str.at(2)] = true;
    }
  }

  for (auto &[key, value] : answer) {
    if (errors[key]) {
      cout << "erro" << endl;
    } else {
      cout << 13 - value.size() << endl;
    }
  }

  return 0;
}