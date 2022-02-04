#include "Animal.CPP"

class Fish: protected Animal
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
		
		
};