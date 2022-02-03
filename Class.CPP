#include "Weapon.h"
#include <iostream>

const int DAMAGE_RANGE= 2;

class Weapon
{
	private:
		std::string name;
		std::string material;
		
		int minimum_damage;
		int maximum_damage;
		float range;
		float accuracy;
		bool condition;	//If it is in good or bad condition	

	public:
		//Constructor set to have default values for the weapon, unusable as it is, needs to be set on startup.
			//Constructor Prototype Meth
		Weapon();	
		{
			name= "Default Name";
			material= "Default Material";
			
			minimum_damage= 0;
			maximum_damage= 999;
			range= 0.0f;
			accuracy= 0.0f;
			condition= false;
		}
		
		//Getters and Setters;
			//Adding in "function prototypes"
		//Name

		//Material

		//Minimum Damage

		//Maximum Damage

		//Range

		//Accuracy

		//Condition
		

		//Name:
		std::string get_name()
		{
			return name;
		}
		
		void set_name(std::string new_name )
		{
			name= new_name;
		}
		//Material:
		std::string get_material()
		{
			return material;
		}

		void set_material(std::string new_materials )
		{
			material= new_materials;
		}
		//Minimum Damage
		int get_minimum_damage()
		{
			return minimum_damage;
		}
		
		void set_minimum_damage(int new_minimum_damage )
		{
			minimum_damage= new_minimum_damage;
		}
		//Maximum Damage
		int get_maximum_damage()
		{
			return maximum_damage;
		}
		
		void set_maximum_damage(int new_maximum_damage )
		{
			maximum_damage= new_maximum_damage;
		}
		//range
		float get_range()
		{
			return range;
		}
		
		void set_range(float new_range )
		{
			range= new_range;
		}
		//accuracy
		void set_accuracy(float new_accuracy )
		{
			accuracy= new_accuracy;
		}
		
		float get_accuracy()
		{
			return accuracy;
		}
		//Condition
		bool get_condition()
		{
			return condition;
		}
		
		void set_condition(bool new_condition )
		{
			condition= new_condition;
		}
};

int main()
{
	//Created a sword object from the weapon class; Defined with default values.
	Weapon sword;	
	
	//Output section	- Task 2
		//Task 4: Over Write the values using the setters	-Placing valid sword attributes for the object
	std::cout<<"Welcom to the program, sword values are as listed:" <<std::endl;
	
		//std::cout<<"Name is: " <<sword.name <<std::endl;
	std::cout<<"Name is: " <<sword.get_name() <<std::endl;
	sword.set_name("GreatSword" );
	std::cout<<"Name is: " <<sword.get_name() <<std::endl;
	
		//std::cout<<"Material is: " <<sword.material <<std::endl;
	std::cout<<"Material is: " <<sword.get_material() <<std::endl;
	sword.set_material("Steel" );
	std::cout<<"Material is: " <<sword.get_material() <<std::endl;
	
		//std::cout<<"Damage ranges from: " <<sword.minimum_damage <<" to " <<sword.maximum_damage <<std::endl;
	std::cout<<"Damage ranges from: " <<sword.get_minimum_damage() <<" to " <<sword.get_maximum_damage() <<std::endl;
	sword.set_minimum_damage(54 );
	sword.set_maximum_damage(154 );
	std::cout<<"Damage ranges from: " <<sword.get_minimum_damage() <<" to " <<sword.get_maximum_damage() <<std::endl;
	
		//std::cout<<"Range is: " <<sword.range <<std::endl;
	std::cout<<"Range is: " <<sword.get_range() <<std::endl;
	sword.set_range(5.0f );
	std::cout<<"Range is: " <<sword.get_range() <<std::endl;
	
		//std::cout<<"Accuracy is: " <<sword.accuracy <<std::endl;
	std::cout<<"Accuracy is: " <<sword.get_accuracy() <<std::endl;
	sword.set_accuracy(95.0f );
	std::cout<<"Accuracy is: " <<sword.get_accuracy() <<std::endl;
	
		//std::cout<<"With it's condition being " <<sword.condition <<std::endl;	//As expected raises issues.
	std::cout<<"With it's condition being " <<sword.get_condition() <<std::endl;	//As expected raises issues.
	sword.set_condition(true );
	std::cout<<"With it's condition being " <<sword.get_condition() <<std::endl;	//As expected raises issues.
	
	//Task 5 working with external files;
	return 0;
}