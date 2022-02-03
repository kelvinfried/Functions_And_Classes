#include <string>

Weapon()
{
	private:
	//Attribute Definition
		std::string Weapon::name;
		std::string Weapon::material;
		
		int Weapon::minimum_damage;
		int Weapon::maximum_damage;
		float Weapon::range;
		float Weapon::accuracy;
		bool Weapon::condition;	//If it is in good or bad condition	
		
	public:
	//Constructor 
		Weapon::Weapon();
		//Name
		std::string Weapon::get_name();
		void Weapon::set_name(std::string new_name );
		//Mateiral
		std::string Weapon::get_material();
		void Weapon::set_material(std::string new_materials );
		//Min Damage
		int Weapon::get_minimum_damage();
		void Weapon::set_minimum_damage(int new_minimum_damage );
		//Max Damage
		int get_maximum_damage();
		void Weapon::set_maximum_damage(int new_maximum_damage );
		//Range
		float Weapon::get_range();
		void Weapon:: set_range(float new_range );
		//Accuracy
		float Weapon::get_accuracy();
		void Weapon::set_accuracy(float new_accuracy );
		//Conditon
		bool Weapon::get_condition();
		void Weapon::set_condition(bool new_condition );
};