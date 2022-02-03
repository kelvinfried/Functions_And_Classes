#include "Weapon.h"
#include <iostream>

//Constructor set to have default values for the weapon, unusable as it is, needs to be set on startup.
Weapon::Weapon()
{
	name= "Default Name";
	material= "Default Material";
	
	minimum_damage= 0;
	maximum_damage= 999;
	range= 0.0f;
	accuracy= 0.0f;
	condition= false;
};

//Name:
std::string Weapon::get_name()
{
		return name;
}

void Weapon::set_name(std::string new_name )
{
	if(((range> 0.0f)&& (range=< 2.0f ) )&& (new_name= "short sword" ) )
	{
		name= new_name;
	}
	
	else if(((range> 2.0f)&& (range=< 5.0f ) )&& (new_name= "sword") )
	{
		name= new_name;
	}
	
	else
	{
		;
	}
}
//Material:
std::string Weapon::get_material()
{
	return material;
}

void Weapon::set_material(std::string new_materials )
{
	material= new_materials;
}
//Minimum Damage
int Weapon::get_minimum_damage()
{
	return minimum_damage;
}

void Weapon::set_minimum_damage(int new_minimum_damage )
{
	minimum_damage= new_minimum_damage;
}
//Maximum Damage
int Weapon::get_maximum_damage()
{
	return maximum_damage;
}

void Weapon::set_maximum_damage(int new_maximum_damage )
{
	maximum_damage= new_maximum_damage;
}
//range
float Weapon::get_range()
{
	return range;
}

void Weapon::set_range(float new_range )
{
	range= new_range;
}
//accuracy
void Weapon::set_accuracy(float new_accuracy )
{
	//If the accuracy is within 0 to 100; It will allow the new value to be passed in
	if((new_accuracy=< 100 )&& (new_accuracy>= 0 ) )
	{
		accuracy= new_accuracy;
	}
	
	else
	{
		;
	}
}

float Weapon::get_accuracy()
{
	return accuracy;
}
//Condition
bool Weapon::get_condition()
{
	return condition;
}

void Weapon::set_condition(bool new_condition )
{
	condition= new_condition;
}