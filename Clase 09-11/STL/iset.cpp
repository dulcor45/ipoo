#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void printArray(const int arr[], const int len) 
{
	for(int i=0; i < len; i++)
		cout << " " << arr[i];
	cout << endl;
}

int main() {

	set<int> iset;
	iset.insert(5);
	iset.insert(9);
	iset.insert(1);
	iset.insert(8);
	iset.insert(3);

	cout << "iset contains:";
	set<int>::iterator it;
	
	for(it=iset.begin(); it != iset.end(); it++)
		cout << " " << *it;
	cout << endl;
	
	int searchFor;
	cout << "Search: ";
	cin >> searchFor;
	if(binary_search(iset.begin(), iset.end(), searchFor))
		cout << "Found " << searchFor << endl;
	else
		cout << "Did not find " << searchFor << endl;



	int a[] = {5, 7, 2, 1, 4, 3, 6};

	sort(a, a+7);
	printArray(a, 7);

	rotate(a,a+6,a+7);
	printArray(a, 7);
	
	reverse(a, a+7);
	printArray(a, 7);

	cout << "El max es: " << *max_element(a, a+7) << endl;
	cout << "El min es: " << *min_element(a, a+7) << endl;

  int myints[] = {10,20,30,30,20,10,10,20};      // 10 20 30 30 20 10 10 20

  // bounds of range:
  int* pbegin = myints;                          // ^
  int* pend = myints+sizeof(myints)/sizeof(int); // ^                       ^

  pend = remove (pbegin, pend, 20);
 cout << "range contains:";
  for (int* p=pbegin; p!=pend; ++p)
    cout << ' ' << *p;
  cout << '\n';



	return 0;
}