#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void print(const vector<int>& v) {
   for (auto i : v) {
      cout << i << " ";
   }
   cout << endl;
}

void func(int cnt) {

   if (vec.size() == M) {
      print(vec);
      return;
   }

   for (int i = cnt+1; i <= N; i++) {
      vec.push_back(i);
      func(i);
      vec.pop_back();
   }
}

int main() {
   cin >> N >> M;
   func(0);
}