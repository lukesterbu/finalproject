/**********************************************************************
** Author:	Luke Burris
** Date:	8/13/2018
** Description:	Character class declaration
**********************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character
{
	protected:
		int atkDie; // how many attack dies
		int defDie; // how many defense dies
		int atkNum; // how many attack die faces
		int defNum; // how many defense die faces
		int shield; 
		int hp; // hit points
		std::string type; // used for character name
	public:
		Character();
		~Character();
		virtual int attack();
		virtual int defense(int);
		int getShield();
		void setHp(int);
		int getHp();
		std::string getType(); // returns type
};

#endif
