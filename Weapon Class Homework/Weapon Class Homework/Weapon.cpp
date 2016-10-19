#include <iostream>

template<class T>
 class weapon
{
public:
	std::string m_name;
	float m_minimumDamage;
	float m_maximumDamage;
	float m_attackSpeed;
	float DamagePerSecond();
	virtual void doDamage();
};

template<class T>
 class Uzi : weapon<T>
{
public:
	weapon m_attackSpeed;
	weapon m_minimumDamage;
	weapon m_maximumDamage;
};

template<class T>
 class Katana : weapon<T>
{
public:
	weapon m_attackSpeed;
	weapon m_minimumDamage;
	weapon m_maximumDamage;
};

template<class T>
 class Shotgun : weapon<T>
{
public:
	weapon m_attackSpeed;
	weapon m_minimumDamage;
	weapon m_maximumDamage;
};

template<class T>
 float weapon<T>::DamagePerSecond()
{
	float m_Damage = m_attackSpeed + (m_maximum - m_minimum);
	return m_Damage;
}

 template<class T>
 void weapon<T>::doDamage()
 {
	 printf("Damage Taken")
 }

