#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if(cnt == M) {
	for(auto elem : vec) cout << elem << ' ';
	return;
   }
   int b = vec.back();
   if(b == N) return;
   for(int i=b+1; i<=N; i++) {
	vec.push_back(i);
	func(cnt+1);
	vec.pop_back();
   }
}

int main() {
   cin >> N >> M;
   func(0);
}
