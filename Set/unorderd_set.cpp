
#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	unordered_set<int> s;


	s.insert(12);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(90);
	s.insert(85);
	s.insert(45);
	s.insert(12);
	s.insert(70);

	// Iterator declared to traverse
	// set elements
    
	unordered_set<int>::iterator it, it1;

	cout << "Unordered_set elements after sort:\n";
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << ' ';
	cout << '\n';

	it1 = s.find(10);

	// only erase one element at the iterator

	s.erase(it1);
	cout << "Unordered_set Elements after erase:\n";
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << ' ';

	return 0;
}

