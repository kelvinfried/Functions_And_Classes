#include "Weapon.h"
#include <iostream>

const int DAMAGE_RANGE= 2;

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