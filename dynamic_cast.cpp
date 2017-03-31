// dynamic_cast
#include <iostream>
#include <exception>
using namespace std;

// dynamic_cast works only withh polymorph class and a class is poliymorph if
// at least one function is virtual
class Base { public:     void dummy() {
		     cout << "pippo\n";
	     }
             virtual void pippo() {
	     }
};
class Derived : public Base { int a; public: void dummy() {
				      cout << "paperino" << endl;
			      }
};

int main() {
	try {
		Base *   pba = new Derived;
		Base *   pbb = new Base;
		Derived *pbc = new Derived;

		Derived *pd;
		pba->dummy();
		pd = dynamic_cast <Derived *>(pba);
		if (pd == 0) {
			cout << "Null pointer on first type-cast.\n";
		}
		pd->dummy();

		pd = dynamic_cast <Derived *>(pbb);
		if (pd == 0) {
			cout << "Null pointer on second type-cast.\n";
		}

		Base *pb;
		pb = dynamic_cast <Base *>(pbc);
		if (pb == 0) {
			cout << "Null pointer on 3rds type-cast.\n";
		}
		pb->dummy();
	} catch (exception& e) { cout << "Exception: " << e.what(); }
	return(0);
}
