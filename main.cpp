#include <iostream>
#include <vector>
using namespace std;
static const int N = 1000;
int main(){
	int i;
	vector <int> a(N);
	cout << "masyvo dydis: " << a.size() << "\n";
	cout << "masyvo talpa: " << a.capacity() << "\n";
	cout << "maksimali talpa: " << a.max_size() << "\n";
    for (i = 2; i < N; i++) a[i] = 1;
    for (i = 2; i < N; i++)
      if (a[i])
        for (int j = i; j*i < N; j++) a[i*j] = 0;
    for (i = 2; i < N; i++)
      if (a[i]) cout << " " << i;
    cout << endl;
	for (int i=1; i<10; i++)
		a.push_back(i);
	cout << "masyvo dydis: " << a.size() << "\n";
	cout << "masyvo talpa: " << a.capacity() << "\n";
	cout << "maksimali talpa: " << a.max_size() << "\n";
}