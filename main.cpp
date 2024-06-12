#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt, int n) {
	if (vec.size() == cnt) {
		for (int i = 0; i < cnt; i++) {
			printf("%d ", vec[i] + 1);
			// cout << vec[i]+1 << ' ';
		}
		printf("\n");
		// cout << time(NULL) << endl;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (find(vec.begin(), vec.end(), i) == vec.end()) {
				vec.push_back(i);
				func(cnt, n);
				vec.pop_back();
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;
	func(M, N);
}
