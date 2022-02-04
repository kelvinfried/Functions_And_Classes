#include "Bird.H"

//Bird construcor
Bird::Bird()
{
	//Parent class attributes
	name= "Default Bird Name";
	
	//Class attributes
	wing_span= 0;
	air_time= 0;
};

//Getters and setters
//Wing_span
int Bird::get_wing_span()
{
	return wing_span;
}

void Bird::set_wing_span(int new_wing_span )
{
	wing_span= new_wing_span;
}
//Air_time
int Bird::get_air_time()
{
	return air_time;
}

void Bird::set_air_time(int new_air_time )
{
	air_time= new_air_time;
}