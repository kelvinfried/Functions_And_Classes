#include "Animal.h"

class Fish: public Animal
{
	private:
		int gil_capacity;
		int fin_count;
		float underwater_depth;
		
	public:
		//Constructor
		Fish();
		
		//Getters and setters
		//Gil capacity
		int get_gil_capacity();
		void set_gil_capacity(int new_gil_capacity );
		//Fin count;
		int get_fin_count();
		void set_fin_count(int new_fin_count );
		//Underwater_depth
		int get_underwater_depth();
		void set_underwater_depth(int new_underwater_depth );
};