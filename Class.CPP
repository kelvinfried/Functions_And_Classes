#include <iostream>

class Weapon:
{
	public:
		std::string name;	//Name of the weapon
		std::string material;	//What the weapon is made of 
		
		int damage[2 ];	//Min and Max Damage values
		float range;	//Range of the weapon
		float accuracy;	//How well it can hit
		bool condition;	//If it is in good or bad condition
		
		//Constructor set to have default values for the weapon, unusable as it is, needs to be set on startup.
		Weapon()
		{
			name= "Default Name";
			material= "Deafult Material":
			
			damage= {0, 999};
			range= 0.0f;
			accuracy= 0.0f;
			condition= false;
		}
};

int main()
{
}