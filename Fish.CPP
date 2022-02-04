#include "Fish.h"


//Fish constructor 
Fish::Fish()
{
	//Parent class redefined attrubtes 
	name= "Default Fish Name";
	
	//Own class attrubutes
	gil_capacity= 0;
	fin_count= 0;
	underwater_depth= 0.0f;
};

//Getters and setters
//Gil_capacity
int Fish::get_gil_capacity()
{
	return gil_capacity;
}

void Fish::set_gil_capacity(int new_gil_capacity )
{
	gil_capacity= new_gil_capacity;
}
//Fin_Count
int Fish::get_fin_count()
{
	return fin_count;
}

void Fish::set_fin_count(int new_fin_count )
{
	fin_count= new_fin_count;
}
//Underwater_depth
int Fish::get_underwater_depth()
{
	return underwater_depth;
}

void Fish::set_underwater_depth(int new_underwater_depth )
{
	underwater_depth= new_underwater_depth;
}