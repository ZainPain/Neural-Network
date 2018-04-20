#include <iostream>
#include <string>

using namespace std;

// virtual functions = template functions
// pure virtual functions do NOT have a body of code at all!!
//	aka pure virtual functions do NOT have an implementation!
class Enemy {
	public:
		virtual void attack(){
		
			cout << "Enemy class attack!" << endl;	
		}
		// this is a PURE virtual function
		virtual void defend() = 0;
		// every derived class has to overwrite this class!!
};

class Ninja: public Enemy {
	public:
		void attack(){
			cout << "Ninja Attack!" << endl;
		}
		void defend(){
			cout << "Ninja Defends!" << endl;
		}
};

class Monster: public Enemy {
	public:
		void attack(){
			cout << "Monster Attack!" << endl;
		}
		void defend(){
			cout << "Monster Defends!" << endl;

		}
};

int main(){
	Ninja n;
	Monster m;
	Enemy * enemy1 = &n;
	Enemy * enemy2 = &m;
	
	enemy1->attack();
	enemy2->attack();	

// once we make Enemy an abstract base class, we can no longer instantiate it as an object
/*
	Enemy e;
	e.attack();

*/
}







