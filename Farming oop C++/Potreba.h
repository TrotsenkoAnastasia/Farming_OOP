#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Potreba;

struct PotrebaElem
{
	Potreba* data;//дані
	PotrebaElem* prev;//попередній елемент
	PotrebaElem* next;//наступний елемент
};

class PotrebaQueue
{
private:
	PotrebaElem* back;//початковий елемент
	PotrebaElem* front;//останній
public:
	PotrebaQueue(void);
	~PotrebaQueue(void);
	
	void push_back(Potreba* value);//додавання в кінець черги
	Potreba* pop_back(void);//видалення з кінця черги
	bool pop(string name);//видалення заданого елемента черги
	void clear(void);// очищення
	Potreba* find(string name);//пошук за заданою назвою
	friend class PotrebaQueueIterator;
};

class PotrebaQueueIterator
{
	 PotrebaQueue* obj;
	PotrebaElem* iter;

public:
	PotrebaQueueIterator( PotrebaQueue* obj) : obj(obj), iter(obj->back) {}

	PotrebaElem* begin(void)// повертає вказівник на початок черги
	{
		return obj->back;
	}

	Potreba* getIter(void)//поточні дані
	{
		return iter->data;
	}

	bool isEnd(void)//повертає елемент після останнього
	{
		return iter == NULL;
	}

	void next(void)//перехід до наступного
	{
		iter = iter->next;
	}
};

//---------------------------------------------------------------------------------------------

class Potreba
{
protected:
	int stoimost;
	string classname;//тип потреби
	string name;//назва потреби
	int kolichestvo;//кількість 

public:
	Potreba(void);

	Potreba(string classname, string name, int stoimost, int kolichestvo);

	int getStoimost(void) const;// гетер для отримання даних про вартість потреби;

	void setStoimost(const int stoimost);// сетер для присваювання значення вартості;

	int getKolichestvo(void) const; //гетер для отримання даних про кількість потреби;

	void setKolichestvo(const int kolichestvo);//сетер для присваювання значення про кількість потреби;

	string getClassname(void) const;//гетер для отримання даних про тип потреби;

	string getName(void) const;//для отримання доступу до імені

	double stoimostPotrebnosti(void);//встановлення вартості потреби
};

//---------------------------------------------------------------------------------------------

class Udobrenija : public Potreba
{
public:
	Udobrenija(string name, double stoimost, int kolichestvo);
};

//---------------------------------------------------------------------------------------------

class SredstvaProizvodstva : public Potreba
{
public:
	SredstvaProizvodstva(string name, double stoimost, int kolichestvo);
};

//---------------------------------------------------------------------------------------------

class TransportnijeUslugi : public Potreba
{
public:
	TransportnijeUslugi(string name, double stoimost, int kolichestvo);
};

//---------------------------------------------------------------------------------------------

Potreba* getPotrebaObj(string classname, string name, int kolichestvo, int stoimost);//функція для визначеня обраного похідного класу потреби