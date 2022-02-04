#include "Animal.h"

//Animal constructor
Animal::Animal()
{
	age= 0;
	name= "Default Animal Name";
	width= 0.0f;
	height= 0.0f;
	length= 0.0f;
	weight= 0.0f;
	gender= false;
};

//Seperate as to not cause issues with an output calling a function which has another output
void Animal::output_age()
{
	std::cout<< "The current age of '" <<get_name() <<"' is " <<get_age() <<std::endl;
}
//Getters and Setters
	//Age:
int Animal::get_age()
{
	return age;
}

void Animal::set_age(int new_age )
{
	age= new_age;
}

	//Name
std::string Animal::get_name()
{
	return name;
}

void Animal::set_name(std::string new_name )
{
	name= new_name;
}

//Width
float Animal::get_width()
{
	return width;
}

void Animal::set_width(float new_width )
{
	width= new_width;
}

//Height
float Animal::get_height()
{
	return height;
}

void Animal::set_height(float new_height )
{
	height= new_height;
}

//Length
float Animal::get_length()
{
	return length;
}

void Animal::set_length(float new_length )
{
	length= new_length;
}

//Weight
float Animal::get_weight()
{
	return weight;
}

void Animal::set_weight(float new_weight )
{
	weight= new_weight;
}

//Gender
bool Animal::get_gender()
{
	return gender;
}

void Animal::set_gender(bool new_gender )
{
	gender= new_gender;
}