#include <iostream>


class weapon
{
	std::string m_name;
	float m_minimumDamage;
	float m_maximumDamage;
	float m_attackSpeed;
	float DamagePerSecond();
};

float weapon::DamagePerSecond()
{
	return 0.0f;
}
