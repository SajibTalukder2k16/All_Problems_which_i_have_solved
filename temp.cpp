#include <bits/stdc++.h>
using namespace std;
int product(int x)
{
	int prod = 1;
	while (x) {
		prod *= (x % 10);
		x /= 10;
	}
	return prod;
}

int findNumber(int l, int r)
{

	string a = to_string(l);
	string b = to_string(r);
	int ans = r;
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '0')
			continue;
		string curr = b;
		curr[i] = ((curr[i] - '0') - 1) + '0';
		for (int j = i + 1; j < curr.size(); j++)
			curr[j] = '9';

		int num = 0;
		for (auto c : curr)
			num = num * 10 + (c - '0');
		if (num >= l && product(ans) < product(num))
			ans = num;
	}
	return ans;
}

int main()
{
	long long int number,big_product_number,sum=1;
	cin>>number;
	big_product_number=findNumber(1, number);
	//cout<<big_product_number<<endl;
	while(big_product_number>0)
	{
	    sum*=(big_product_number%10);
	    big_product_number/=10;
	}
	std::cout <<sum << std::endl;

	return 0;
}
