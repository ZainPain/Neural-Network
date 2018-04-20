#include<iostream>
#include<string>

using namespace std;

class Enemy{
	protected:
		int attackPower;
	public:
		void setAttackPower(int attack){
			attackPower = attack;
		}

};

class Ninja: public Enemy {
	public:
		void attack(){
		
			cout << "I am a ninja I will chop you! -" << attackPower << endl;;
		}


};

class Monster: public Enemy{
	public:
		void attack(){
		
		cout << "monster will eat you! -" << attackPower << endl;
		}
};

int main(){
	Ninja n;
	Monster m;
	Enemy * enemy1 = &n;
	Enemy * enemy2 = &m;
	enemy1->setAttackPower(20);
	enemy2->setAttackPower(25);
	n.attack();
	m.attack();

}
