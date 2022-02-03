#include "Weapon.h"

//Getters and Setters;
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