#pragma once


#include "Organism.h"
#include "World.h"


class Animal : public Organism
{
public:
	Animal(int strength, int initiative, char symbol, const Point& position, World& world);
	Animal(int strength, int initiative, char symbol, World& world);

	virtual ~Animal();

	virtual void action() override;
	virtual bool collision(Organism& other) override;
	virtual void draw() override;
	
protected:
	virtual void move(const Point& position);
	virtual void kill (Organism& other);
	virtual void reproduce(const Point& position);
	virtual void die();

	virtual bool canMoveTo(const Point& destination) const;
	virtual bool canKill(const Organism& other) const override;
	virtual bool canBeKilledBy(const Organism& other) const override;
	virtual bool canReproduce(const Organism& other, const Point& position) const;
};

