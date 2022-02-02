#include <iostream>

const int DAMAGE_RANGE= 2;

class Weapon
{
	public:
		std::string name;	//Name of the weapon
		std::string material;	//What the weapon is made of 
		
		/*int damage[DAMAGE_RANGE ];
			damage[0 ]= 0;	//Min Damage value
			damage[1 ]= 999;	//Max Damage value*/	//Causes issues has to be defined else where.
		int minimum_damage;
		int maximum_damage;
		float range;	//Range of the weapon
		float accuracy;	//How well it can hit
		bool condition;	//If it is in good or bad condition
		
		//Constructor set to have default values for the weapon, unusable as it is, needs to be set on startup.
		Weapon()
		{
			name= "Default Name";
			material= "Deafult Material";
			
			int minimum_damage= 0;
			int maximum_damage= 999;
			range= 0.0f;
			accuracy= 0.0f;
			condition= false;
		}
};

int main()
{
}