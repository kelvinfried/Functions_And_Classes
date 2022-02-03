#include <iostream>
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
int Animal::get_name()
{
	return name;
}

void Animal::set_name(int new_name )
{
	name= new_name;
}

//Width
int Animal::get_width()
{
	return width;
}

void Animal::set_width(int new_width )
{
	width= new_width;
}

//Height
int Animal::get_height()
{
	return height;
}

void Animal::set_height(int new_height )
{
	height= new_height;
}

//Length
int Animal::get_length()
{
	return length;
}

void Animal::set_length(int new_length )
{
	length= new_length;
}

//Weight
int Animal::get_weight()
{
	return weight;
}

void Animal::set_weight(int new_weight )
{
	weight= new_weight;
}

//Gender
int Animal::get_gender()
{
	return gender;
}

void Animal::set_gender(int new_gender )
{
	gender= new_gender