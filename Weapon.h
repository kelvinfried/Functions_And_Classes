#include <iostream>

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
		Weapon();	
	
		//Getter and Setter block
		//Name:
		std::string get_name();
		void set_name(std::string new_name );
		
		//Material:
		std::string get_material();
		void set_material(std::string new_materials );
		
		//Minimum Damage
		int get_minimum_damage();
		void set_minimum_damage(int new_minimum_damage );
		
		//Maximum Damage
		int get_maximum_damage();
		void set_maximum_damage(int new_maximum_damage );
		
		//range
		float get_range();
		void set_range(float new_range );
		
		//accuracy
		void set_accuracy(float new_accuracy );
		float get_accuracy();
		
		//Condition
		bool get_condition();
		void set_condition(bool new_condition );
};