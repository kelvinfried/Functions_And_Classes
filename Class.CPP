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
	Weapon sword;
	
	//Output section
	std::cout<<"Welcom to the program, sword values are as listed:" <<std::endl;
	std::cout<<"Name is: " <<sword.name <<std::endl;
	std::cout<<"Material is: " <<sword.material <<std::endl;
	std::cout<<"Damage ranges from: " <<sword.minimum_damage <<" to " <<sword.maximum_damage <<std::endl;
	std::cout<<"Range is: " <<sword.range <<std::endl;
	std::cout<<"Accuracy is: " <<sword.accuracy <<std::endl;
	std::cout<<"With it's condition being " <<sword.condition <<std::endl;
	
	return 0;
}