#include <iostream>

class Animal
{
	private:
		//Attributes for all the animals
		int age;
		std::string name;
		float width;
		float height;
		float length;
		float weight;
		//Where false is male/ True female
		bool gender;
	
	public:
		//Constructor
		Animal();
		
		//Getters and setters
		//Age
		int get_age();
		void set_age(int new_age );
		//Name
		int get_name();
		void set_name(int new_name );
		//Width
		int get_width();
		void set_width(int new_width );
		//Height
		int get_height();
		void set_height(int new_height );
		//Length
		int get_length();
		void set_length(int new_length );
		//Weight
		int get_weight();
		void set_weight(int new_weight );
		//Gender
		int get_gender();
		void set_gender(int new_gender );
}