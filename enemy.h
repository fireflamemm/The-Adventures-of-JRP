#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include "character.h"

class Enemy: public Character {
	private:
		//private constructor in the base and derived classes
        std::string encount;
        std::string defeat;
        std::string name;
	protected:
		Enemy(int hp, int de, int at, string e, string d, string na) : 
		    Character(hp, de, at), encount(e), defeat(d), name(na) {}
	public:
		//a static method of a class that returns an object of that class type.
		static Enemy* createEnemy(int type);

		//Setters and getters
		void EnemyName(string input);
		string EnemyName() const;

		void EncounterLine(string input);
		string EncounterLine() const;

		void DefeatLine(string input);
		string DefeatLine() const;
};

class Guard: public Enemy {
	friend class Enemy;
	Guard(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Skeleton: public Enemy {
	friend class Enemy;
	Skeleton(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Slime: public Enemy {
	friend class Enemy;
	Slime(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Slaver: public Enemy {
	friend class Enemy;
	Slaver(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Zombie: public Enemy {
	friend class Enemy;
	Zombie(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Wolf: public Enemy {
	friend class Enemy;
	Wolf(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Byrd: public Enemy {
	friend class Enemy;
	Byrd(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Slave: public Enemy {
	friend class Enemy;
	Slave(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Rat: public Enemy {
	friend class Enemy;
	Rat(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Pettit: public Enemy {
	friend class Enemy;
	Pettit(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Reeves: public Enemy {
	friend class Enemy;
	Reeves(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class StJohn: public Enemy {
	friend class Enemy;
	StJohn(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Homer: public Enemy {
	friend class Enemy;
	Homer(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Tanner: public Enemy {
	friend class Enemy;
	Tanner(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};

class Burton: public Enemy {
	friend class Enemy;
	Burton(int hp, int de, int at, string e, string d, string na) : Enemy(hp,de,at,e,d,na) {}
};
#endif
