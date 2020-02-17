#pragma once
class Entity
{
public:
	Entity();
	~Entity();
	int takeDamage(int damage);
	int dealDamage(int damage);

private:
	int _health;
	int _damage;
};

