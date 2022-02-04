#include <iostream>
#include "Weapon.CPP"
#include "Animal.CPP"
#include "Fish.CPP"
#include "Bird.CPP"

int main()
{
	//Created a sword object from the weapon class; Defined with default values.
	//Weapon sword;	
	
	/*//Output section	- Task 2
		//Task 4: Over Write the values using the setters	-Placing valid sword attributes for the object
		//Task 6: Modifying setters to be able to use them to check my validation
	//std::cout<<"Welcom to the program, sword values are as listed:" <<std::endl;
	
		//std::cout<<"Name is: " <<sword.name <<std::endl;
	//std::cout<<"Name is: " <<sword.get_name() <<std::endl;
	sword.set_name("short sword" );	//Should not work as the default value is less than 0
	std::cout<<"Name is: " <<sword.get_name() <<std::endl;
	sword.set_name("sword" );
	std::cout<<"Name is: " <<sword.get_name() <<std::endl <<std::endl;
	
		//std::cout<<"Material is: " <<sword.material <<std::endl;
	//std::cout<<"Material is: " <<sword.get_material() <<std::endl;
	sword.set_material("Steel" );
	std::cout<<"Material is: " <<sword.get_material() <<std::endl;
	
		//std::cout<<"Damage ranges from: " <<sword.minimum_damage <<" to " <<sword.maximum_damage <<std::endl;
	//std::cout<<"Damage ranges from: " <<sword.get_minimum_damage() <<" to " <<sword.get_maximum_damage() <<std::endl;
	sword.set_minimum_damage(54 );
	sword.set_maximum_damage(154 );
	std::cout<<"Damage ranges from: " <<sword.get_minimum_damage() <<" to " <<sword.get_maximum_damage() <<std::endl;
	
		//std::cout<<"Range is: " <<sword.range <<std::endl;
	//std::cout<<"Range is: " <<sword.get_range() <<std::endl;
	sword.set_range(5.0f );
	std::cout<<"Range is: " <<sword.get_range() <<std::endl;
	
		//std::cout<<"Accuracy is: " <<sword.accuracy <<std::endl;
	//std::cout<<"Accuracy is: " <<sword.get_accuracy() <<std::endl;
	sword.set_accuracy(95.0f );
	std::cout<<"Accuracy is: " <<sword.get_accuracy() <<std::endl;
	
		//std::cout<<"With it's condition being " <<sword.condition <<std::endl;	//As expected raises issues.
	//std::cout<<"With it's condition being " <<sword.get_condition() <<std::endl;	//As expected raises issues.
	sword.set_condition(true );
	std::cout<<"With it's condition being " <<sword.get_condition() <<std::endl <<std::endl;	//As expected raises issues.
	
	//Task 5 working with external files; _/
	//Trying this block again 
	sword.set_name("short sword" );	//Should not work as the default value is less than 0
	std::cout<<"Name is: " <<sword.get_name() <<std::endl;
	sword.set_name("sword" );
	std::cout<<"Name is: " <<sword.get_name() <<std::endl;	//Here this works as it is within a valid range */
	 
	 //Task 7	//Task 8 
	//Line break
	//std::cout<<std::endl <<std::endl <<std::endl <<std::endl;
	Animal test;
	
	std::cout<<std::endl;
	test.output_age();
	
	Fish salmon;
	//std::cout<<"The fish tells us that it's name is " <<test_1.get_name() <<std::endl <<std::endl;
	salmon.output_age();
	
	Bird seagull;
	seagull.output_age();


	//Attempting to call the parent class version of output age
	//seagull.Animal::output_age();
	//std::cout<< seagull.Animal::get_age() <<std::endl;
	//salmon.Animal::output_age();
	seagull.output_age();
	seagull.Animal::output_age();
	
	
	return 0;
}