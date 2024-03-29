#include "Organism.h"


Organism::Organism(World& world) :
	strength{ 0 },
	initiative{ 0 },
	age{ 0 },
	symbol{ 'N' },
	isAnimal{ false },
	position{ Point(0, 0) },
	world(world),
	species{ Species::ORGANISM } {
}


Organism::Organism(int strength, int initiative, char symbol, Point position, World& world) :
	strength{ strength },
	initiative{ initiative },
	age{ 0 },
	symbol{ symbol },
	isAnimal { false },
	position{ position },
	world{ world },
	species{ Species::ORGANISM } {
}


Organism::Organism(int strength, int initiative, int age, char symbol, Point position, World& world) :
	strength{ strength },
	initiative{ initiative },
	age{ age },
	symbol{ symbol },
	isAnimal{ false },
	position{ position },
	world{ world },
	species { Species::ORGANISM } {
}


Organism::Organism(int strength, int initiative, char symbol, World& world) :
	strength{ strength },
	initiative{ initiative },
	age{ 0 },
	symbol{ symbol },
	isAnimal{ false },
	position{ Point(0, 0) },
	world{ world },
	species{ Species::ORGANISM } {
}


Organism::~Organism() {
}


void Organism::printInfo() {
	std::cout << "Symbol: " << symbol << "\n";
	
	std::cout << "Strength: " << strength << "\n";
	std::cout << "Initiative: " << initiative << "\n";
	std::cout << "Age: " << age << "\n";
	
	std::cout << "Position: (" << position.x << ", " << position.y << ")" << "\n";
}


void Organism::printShortInfo() {
	std::cout << symbol << " (" << position.x << ", " << position.y << ")";
}


int Organism::getStrength() const {
	return strength;
}


int Organism::getInitiative() const {
	return initiative;
}


int Organism::getAge() const {
	return age;
}


char Organism::getSymbol() const {
	return symbol;
}


bool Organism::getIsAnimal() const {
	return isAnimal;
}


Point& Organism::getPosition() {
	return position;
}


int Organism::getX() const {
	return position.x;
}


int Organism::getY() const {
	return position.y;
}


Species Organism::getSpecies() const {
	return species;
}


void Organism::setPosition(int x, int y) {
	position.x = x;
	position.y = y;
}


void Organism::setPosition(Point& position) {
	this->position = position;
}


void Organism::setStrength(int strength) {
	this->strength = strength;
}


void Organism::setAge(int age) {
	this->age = age;
}


void Organism::setIsAnimal(bool isAnimal) {
	this->isAnimal = isAnimal;
}
