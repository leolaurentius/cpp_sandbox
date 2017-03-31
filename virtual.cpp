// ERROR:
#include <iostream>

using namespace std;

class D {
public:
	void foo() {
		cout << "Foooooo" << endl;
	}
};

class C :  virtual public D {
};

class B :  virtual public D {
};

class A : public B, public C {
};

class Base {
	virtual void method() {
		cout << "from Base" << endl;
	}
public:
	Base() {
		cout << "Base constructor" << endl;
	}
	virtual ~Base() {
		method();
	}
	void baseMethod() {
		method();
	}
};

class AB : public Base {
	void method() {
		cout << "from AB" << endl;
	}
public:
	~AB() {
		method();
	}
};

int main(int argc, const char * argv[]) {
	A a;
	a.foo();
	cout << endl;
	//
	int n[] = {1, 2, 3, 4, 5, 6};
	cout << (1 + 3)[n] - n[0] + (n + 1)[2] << endl;
	cout << endl;
	//
	cout << "create" << endl;
	Base* base = new AB;
	cout << "call Method" << endl;
	base->baseMethod();
	cout << "Destroy" << endl;
	delete base;
	return 0;
}
