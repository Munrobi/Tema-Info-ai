#include "Motorcycle.h"

void Motorcycle::set_eng_capacity(int cap)
{
	eng_capacity = cap;
}
int Motorcycle::get_eng_capacity()
{
	return eng_capacity;
}
void Motorcycle::set_weight(int wei)
{
	weight = wei;
}
int Motorcycle::get_weight()
{
	return weight;
}
void Motorcycle::set_model(std::string mod)
{
	model = mod;
}
std::string Motorcycle::get_model()
{
	return model;
}
void Motorcycle::set_brand(std::string bra)
{
	brand = bra;
}
std::string Motorcycle::get_brand()
{
	return brand;
}
void Motorcycle::set_horsepower(int hp)
{
	horsepower = hp;
}
int Motorcycle::get_horsepower()
{
	return horsepower;
}
