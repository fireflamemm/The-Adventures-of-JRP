//test.cpp
#include <iostream>
#include <list>
#include "Item.h"
#include "Item.cpp"
#include "character.h"
#include "character.cpp"
#include "enemy.h"
#include "enemy.cpp"
<<<<<<< HEAD
#include "room.h"
#include "room.cpp"
#include "dungeon.h"
#include "dungeon.cpp"
#include "game.h"
#include "game.cpp"
=======
#include "game.h"
#include "game.cpp"

//this will be a factory

>>>>>>> 9e60df95fb3c2dbac6548d9ab23a2e8a823cd308

int main()
{
	Game JPR();
<<<<<<< HEAD
	Dungeon YourMap();
	Room Base(2,"Testing Room", "This rooms only purpose is to have no purpose", 4);
	Enemy* Villains[10];
	Villains[0] = Enemy::createEnemy(1);
	Villains[1] = Enemy::createEnemy(2);
	Villains[2] = Enemy::createEnemy(3);
	Villains[3] = Enemy::createEnemy(4);
	Villains[4] = Enemy::createEnemy(5);
	Villains[5] = Enemy::createEnemy(6);
	Villains[6] = Enemy::createEnemy(7);
	Villains[7] = Enemy::createEnemy(8);
	Villains[8] = Enemy::createEnemy(9);
	Villains[9] = Enemy::createEnemy(10);
	cout << Villains[0]->EnemyName() << endl;
	cout << Villains[1]->EnemyName() << endl;
	cout << Villains[2]->EnemyName() << endl;
	cout << Villains[3]->EnemyName() << endl;
	cout << Villains[4]->EnemyName() << endl;
	cout << Villains[5]->EnemyName() << endl;
	cout << Villains[6]->EnemyName() << endl;
	cout << Villains[7]->EnemyName() << endl;
	cout << Villains[8]->EnemyName() << endl;
	cout << Villains[9]->EnemyName() << endl;
	cout << (Base.CurrentEnemy())->EnemyName() << endl;
	cout << Base.roomname() << endl;
	cout << Base.description() << endl;
	cout << Base.visit() << endl;
	cout << Base.Trap() << endl;
	Character Adventurer(10,10,10);
	Item AKnife("Knife","Can be used for cutting vegetables or can deal 4 damage",4,0);
	cout << AKnife.Name() << endl;
	cout << AKnife.Description() << endl;
	cout << AKnife.Damage() << endl;
	cout << AKnife.Healing() << endl;
=======
	Item knife("Knife", "Deals 4 damage to enemies", 4, 0);
	cout << knife.Damage() << endl;
	cout << knife.Name() << endl;
	cout << knife.Description() << endl;
	cout << knife.Healing() << endl;
	Character person(100, 100, 100);
	Character food(10,10,10);
	Character* test;
	test = Enemy::createEnemy(1);
	cout << test->ATK() << endl;
	cout << test->DEF() << endl;
	cout << test->HP() << endl;
	cout << food.ATK() << endl;
	cout << food.DEF() << endl;
	cout << food.HP() << endl;
>>>>>>> 9e60df95fb3c2dbac6548d9ab23a2e8a823cd308
	return 0;
}