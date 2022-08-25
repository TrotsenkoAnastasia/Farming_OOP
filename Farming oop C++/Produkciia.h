#pragma once

#include "Potreba.h"

#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Produkcija;

struct ProdElem
{
	Produkcija* data; // дані
	ProdElem* prev;//попередній елемент
	ProdElem* next;//наступний елемент
};

class ProdukcijaQueue
{
private:
	ProdElem* back;//початковий елемент
	ProdElem* front;//останній
public:

	ProdukcijaQueue(void);
	~ProdukcijaQueue(void);

	void push_back(Produkcija* value);//додавання в кінець черги
	Produkcija* pop_back(void);//видалення з кінця черги
	int pop(string name, int kolichestvo);//видалення заданого елемента черги
	void clear(void);// очищення
	Produkcija* find(string name);//пошук за заданою назвою

	friend class ProdukcijaQueueIterator;
};

//---------------------------------------------------------------------------------------------

class ProdukcijaQueueIterator
{
private:
     ProdukcijaQueue* obj;
	ProdElem* iter;

public:
	ProdukcijaQueueIterator( ProdukcijaQueue* obj) : obj(obj), iter(obj->back) {}

	ProdElem* begin(void)
	{
		return obj->back;
	}

	Produkcija* getIter(void)
	{
		return iter->data;
	}

	bool isEnd(void)
	{
		return iter == NULL;
	}

	void next(void)
	{
		iter = iter->next;
	}
};

//---------------------------------------------------------------------------------------------

class Produkcija
{
protected:
	string classname;//тип продукції
	int kolichestvo;//кількість продукції
	double cenazaedenicu;//ціна за одиницю
	string ed;//одиниці вимірювання продукції
	string name;//назва продукції

	PotrebaQueue potrebi;

public:
	Produkcija(void);

	Produkcija(string name, string classname, double cenazaedenicu, int kolichestvo, string ed);

	~Produkcija(void);

	virtual string getName(void) const;// гетер для отримання даних про назву продукції;

	virtual string getClassName(void) const;//гетер для отримання даних про тип продукції;

	virtual double getCenazaedenicu(void) const;//гетер для отримання даних про ціну продукції;

	virtual void setCenazaedenicu(const double cenazaedenicu);//сетер для присваювання значення ціна за одиницю продукції;

	virtual int getKolichestvo(void) const;//гетер для отримання даних про кількість;

	virtual void setKolichestvo(const int kolichestvo);//) сетер для присваювання кількості продукції;

	virtual string getEdenici(void) const;//гетер для отримання даних про одиниці вимірювання кількості продукції;

	virtual void setEdenici(const string ed);//сетер для присваювання даних про одиниці вимірювання кількості продукції;

	void addPotreba(Potreba* potreba);//функція для додавання потреби, щоб виготовити задану продукцію;

	bool delPotreba(string potreba);//видалення потреби

    PotrebaQueue& getPotrebiQueue(void) ;//гетер для отримання даних про потребу;
};

//---------------------------------------------------------------------------------------------

class Zerno : public Produkcija
{
public:
	Zerno(string name, double cenazaedenicu, int kolichestvo, string ed);
};

//---------------------------------------------------------------------------------------------

class Miaso : public Produkcija
{
public:
	Miaso(string name, double cenazaedenicu, int kolichestvo, string ed);
};

//---------------------------------------------------------------------------------------------

class Fructi : public Produkcija
{
public:
	Fructi(string name,double cenazaedenicu, int kolichestvo, string ed);
};

//---------------------------------------------------------------------------------------------

class Ovocshi : public Produkcija
{
public:
	Ovocshi(string name, double cenazaedenicu, int kolichestvo, string ed);
};

//---------------------------------------------------------------------------------------------

Produkcija* getProdukcijaObj(string name, string classname, double cenazaedenicu, int kolichestvo, string ed);//функція для визначеня обраного похідного класу продукції