#include "Animal.h"

class Bird: public Animal
{
	private:
		int wing_span;
		int air_time;
		
	public:
		//Constructor
		Bird();
		
		void output_age();
		//Getters and setters
		//Wing span
		int get_wing_span();
		void set_wing_span(int new_wing_span );
		//Air time
		int get_air_time();
		void set_air_time(int new_air_time );
};