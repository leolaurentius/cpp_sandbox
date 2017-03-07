#include<iostream>

using namespace std;
void f() {
	const int i = 3;

	cout<<i;
	if(--i) f();
}
main() {
	f();
}
