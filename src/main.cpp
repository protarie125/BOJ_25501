#include <iostream>
#include <string>

using namespace std;

auto ct = int{};

int recursion(const string& s, const string::size_type& l, const string::size_type& r) {
	++ct;

	if (r <= l) {
		return 1;
	}
	else if (s[l] != s[r]) {
		return 0;
	}

	return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string& s) {
	return recursion(s, 0, s.length() - 1);
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		string s;
		cin >> s;

		ct = 0;
		cout << isPalindrome(s) << ' ' << ct << '\n';
	}

	return 0;
}