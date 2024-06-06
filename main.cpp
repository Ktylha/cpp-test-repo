#include <iostream>
#include <vector>
#include <algorithm>

void print_vec(const std::vector <int>& vec){
    for (auto& v : vec){
        std::cout << v << " ";
    }
    std::cout << std::endl;
}

int main() {
    int N, l; 
    std::cin >> N;
    std::vector<int> vec;
    while (N--){
        std::cin >> l;
        vec.push_back(l);
    }
    std::sort(vec.begin(),vec.end());
    print_vec(vec);
    std::cout<< "БИНГО" << std::endl;
  // put your code here
  return 0;
}