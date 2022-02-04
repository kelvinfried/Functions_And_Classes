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
		
		void output_age();
		//Getters and setters
		//Age
		int get_age();
		void set_age(int new_age );
		//Name
		std::string get_name();
		void set_name(std::string new_name );
		//Width
		float get_width();
		void set_width(float new_width );
		//Height
		float get_height();
		void set_height(float new_height );
		//Length
		float get_length();
		void set_length(float new_length );
		//Weight
		float get_weight();
		void set_weight(float new_weight );
		//Gender
		bool get_gender();
		void set_gender(bool new_gender );
};