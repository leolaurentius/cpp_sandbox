#include <iostream>

using namespace std;
class abc {

public:
	int i;

	abc(int i) {
		i = i;
	}
};

main() {
	abc m(5);

	cout<<m.i << endl;
}
