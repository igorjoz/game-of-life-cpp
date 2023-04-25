#include "Animal.h"


Animal::Animal(int strength, int initiative, char symbol, const Point& position, World& world) :
	Organism(strength, initiative, symbol, position, world) {
}


Animal::Animal(int strength, int initiative, char symbol, World& world) :
	Organism(strength, initiative, symbol, world) {
}


Animal::~Animal() {
}


void Animal::action() {
	Point destination = world.getRandomNeighbour(position);
	if (canMoveTo(destination)) {
		move(destination);
	}
}


bool Animal::collision(Organism& other) {
	if (canEat(other)) {
		eat(other);
		return true;
	}
	return false;
}


//void Animal::draw() {
//	world.draw(position, symbol);
//}


void Animal::move(const Point& destination) {
	world.move(position, destination);
	position = destination;
}


void Animal::eat(Organism& other) {
	world.remove(other.getPosition());
}


void Animal::reproduce(const Point& position) {
	// TODO
}


bool Animal::canMoveTo(const Point& destination) const {
	bool canMoveTo = world.isEmpty(destination);

	/*if (canMoveTo) {
		Organism* other = world.getOrganism(destination);
		if (other != nullptr) {
			canMoveTo = canEat(*other);
		}
	}*/

	// check coordinates
	if (destination.x < 0 or destination.x >= WORLD_SIZE or destination.y < 0 or destination.y >= WORLD_SIZE) {
		canMoveTo = false;
	}
	
	return canMoveTo;
}


bool Animal::canEat(const Organism& other) const {
	return false;
}
