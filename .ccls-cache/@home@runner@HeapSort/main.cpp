#include <algorithm>
#include <iostream>
#include <vector>

void heapsort(std::vector<int>& vec) {
  // TODO: implement!
}

int main() {
  int n;
  std::cin >> n;

  std::vector<int> vec;
  for (int i = 0; i < n; i++) {
    int j;
    std::cin >> j;
    vec.push_back(j);
  }

  heapsort(vec);

  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i];
    if (i == vec.size() - 1) {
      std::cout << std::endl;
    } else {
      std::cout << " ";
    }
  }
}