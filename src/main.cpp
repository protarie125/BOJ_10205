#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k;
	cin >> k;
	for (auto i = 1; i <= k; ++i) {
		cout << "Data Set " << i << ":\n";

		int h;
		cin >> h;

		string l;
		cin >> l;

		for (const auto& c : l) {
			if ('c' == c) {
				++h;
			}
			else if ('b' == c) {
				--h;
			}
		}

		cout << h << "\n\n";
	}

	return 0;
}