#pragma once

#include "Produkciia.h"
#include "Potreba.h"
#include <vector>
#include <iostream>
#include <string>
#include <windows.h>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


using namespace std;

class Fermer;

struct elem
{
	Fermer* data;//поточні дані 
	elem* prev;//попередній елемент
	elem* next;//наступний елемент
};

class FermerQueue
{
private:
	elem* back;//початковий елемент
	elem* front;//останній елемент
public:
	FermerQueue(void);
	~FermerQueue(void);
	
	void push_back(Fermer* value);//додавання в кінець черги
	Fermer* pop_back(void);//видалення з кінця черги
	bool pop(string name);//видалення заданого елемента черги
	void clear(void);// очищення
	Fermer* find(string name);//пошук за заданою назвою

	friend class FermerQueueIterator;
};

class FermerQueueIterator
{
    FermerQueue* obj;
	elem* iter;

public:
	FermerQueueIterator( FermerQueue* obj) : obj(obj), iter(obj->back) {}

	elem* begin(void)
	{
		return obj->back;
	}

	Fermer* getIter(void)
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

class Rabotnik
{
protected:
	string name;
public:
	Rabotnik(string name);
};

//---------------------------------------------------------------------------------------------

class Fermer : public Rabotnik
{
private:
	ProdukcijaQueue prod;// об’єкт класу - контейнеру що працює з продукцією
	double budjet;//бюджет необхідний фермеру

public:
	Fermer(void);

	Fermer(string name, double budjet);

	~Fermer(void);

	string getName(void) const;//метод для отримання доступу до імені

	double getBudjet(void) const;//гетер для отримання даних про бюджет

	void setBudjet(const double budjet);//сетер для присваювання значення бюджету

	void addProdukcija(Produkcija *produkcija);//функція для додавання продукції

	int delProdukcija(string produkcija, int kolichestvo);//функція для видалення продукції

	Produkcija* findProdukcija(string produkcija);//метод для пошуку заданої продукції

	ProdukcijaQueue& getProdukcijaQueue(void);//метод що повертає значення об’єкта з черги

	void prodToComboBox(ComboBox^ comboBox);//метод що добавляє продукцію у випадаючий список
};

//---------------------------------------------------------------------------------------------

class Rukovoditel : public Rabotnik
{
private:
	FermerQueue fermers;

public:
	Rukovoditel(string name);

	~Rukovoditel(void);

	void clearFermers(void);//видалення усіх даних про фермерів

	void addFermer(Fermer* fermer);//додавання фермера

	int delFermer(string name);//видалення фермера по імені

	Fermer* findFermer(string name);//пошук фермера

	FermerQueue& getFermerQueue(void);//метод повертає фермера з черги

	void fermersToComboBox(ComboBox^ comboBox);//додавання фермера у випадаючий список
};