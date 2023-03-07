#pragma once
#include <string>
class Motorcycle
{
public:
	void set_eng_capacity(int cap);
	int get_eng_capacity();
	void set_weight(int wei);
	int get_weight();
	void set_model(std::string mod);
	std::string get_model();
	void set_brand(std::string bra);
	std::string get_brand();
	void set_horsepower(int hp);
	int get_horsepower();
	
private:
	int eng_capacity;
	int weight;
	std::string brand;
	std::string model;
	int horsepower;

};

