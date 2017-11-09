Enemy* Enemy::createEnemy(int type)
{
	if(type == 1)
		return new Guard(50,20,30,"","");
	else if(type == 2)
		return new Skeleton(1,1,1,"","");
	else if(type == 3)
		return new Slime(5,30,10,"","");
	else if(type == 4)
		return new Slaver(30,10,40,"","");
	else if(type == 5)
		return new Zombie(100,0,25,"","");
	else if(type == 6)
		return new Wolf(40,15,40,"","");
	else if(type == 7)
		return new Byrd(10,100,50,"","");
	else if(type == 8)
		return new Slave(10,5,10,"","");
	else if(type == 9)
		return new Rat(2,0,6,"","");
	else if(type == 10)
		return new Homer(60,20,70,"","");
	else if(type == 11)
		return new Pettit(100,40,40,"","");
	else if(type == 12)
		return new Reeves(40,60,60,"","");
	else if(type == 13)
		return new StJohn(50,50,40,"","");
}	
