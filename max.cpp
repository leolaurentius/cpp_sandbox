#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T & Max (T & a, T & b)  {
	return a < b ? b : a;
}


class Person {
	int eta;
	string name;
public:
	Person(string name,int eta) {
		this->eta = eta;
		this->name = name;
	}
	void get_name(){
		cout << this->name << endl;
		return;
	}
	inline bool operator< ( Person& p1){
		if (this->eta < p1.eta)
			return true;
		return false;

	}

	inline bool operator> (Person& p1){
		if (this->eta > p1.eta)
			return true;
		return false;
	}
	inline bool operator== (Person& p1){
		if (this->eta == p1.eta)
			return true;
		return false;
	}
	inline Person& operator& () {
		return *this;
	}

};

int main () {

	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl;

	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(f1, f2): " << Max(f1, f2) << endl;

	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;

	Person p1("Lorenzo",42);
	Person p2("Camilla",1);
	Max(p1,p2).get_name();

	return 0;
}
