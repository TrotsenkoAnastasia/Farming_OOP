#include "Potreba.h"

PotrebaQueue::PotrebaQueue(void) : back(NULL), front(NULL) {}

PotrebaQueue::~PotrebaQueue(void)
{
	this->clear();
}


void PotrebaQueue::push_back(Potreba* value)
{
	PotrebaElem* temp = new PotrebaElem;

	temp->data = value;
	temp->prev = NULL;

	if (!this->back)//якщо не кінець
	{
		this->back = this->front = temp;//очередь з одного елемента темп 
		temp->next = NULL;//а вказівник на наступний нулл
	}
	else//якщо не кінець
	{
		temp->next = this->back;
		this->back->prev = temp;
		this->back = temp;
	}
}

Potreba* PotrebaQueue::pop_back(void)
{
	if (!this->back)//якщо черга порожня
		return NULL;

	if (!this->back->next)//якщо  з одного елемента
	{
		Potreba* out = this->back->data;
		delete this->back;
		this->back = this->front = NULL;
		return out;
	}
	PotrebaElem* del = this->back;
	Potreba* out = this->back->data;
	this->back = this->back->next;
	delete del;
	this->back->prev = NULL;
	return out;
}

bool PotrebaQueue::pop(string name)
{
	PotrebaElem* cursor = this->back;
	while (cursor)
		if (cursor->data->getName() == name)
		{
			if (!(this->back->next || this->back->prev))
				this->back = NULL;
			if (cursor->prev)
				cursor->prev->next = cursor->next;
			if (cursor->next)
				cursor->next->prev = cursor->prev;
			if (cursor == this->back)
				this->back = cursor->next;
			delete cursor->data;
			delete cursor;
			return true;
		}
		else
			cursor = cursor->next;
	return false;
}

void PotrebaQueue::clear(void)
{
	while (this->back) delete this->pop_back();
}

Potreba* PotrebaQueue::find(string name)
{
	PotrebaElem* cursor = this->back;
	while (cursor)
		if (cursor->data->getName() == name)
			return cursor->data;
		else
			cursor = cursor->next;
	return NULL;
}

//---------------------------------------------------------------------------------------------

Potreba::Potreba(void) {}

Potreba::Potreba(string classname, string name, int stoimost, int kolichestvo) :
	classname(classname), name(name), stoimost(stoimost), kolichestvo(kolichestvo) {}

int Potreba::getStoimost(void) const
{
	return stoimost;
}

void Potreba::setStoimost(const int stoimost)
{
	this->stoimost = stoimost;
}

int Potreba::getKolichestvo(void) const
{
	return kolichestvo;
}

void Potreba::setKolichestvo(const int kolichestvo)
{
	this->kolichestvo = kolichestvo;
}

string Potreba::getName(void) const
{
	return name;
}

string Potreba::getClassname(void) const
{
	return classname;
}

double Potreba::stoimostPotrebnosti(void)
{
	return kolichestvo * stoimost;
}

//---------------------------------------------------------------------------------------------

Udobrenija::Udobrenija(string name, double stoimost, int kolichestvo) :
	Potreba("Udobrenija", name, stoimost, kolichestvo) {}

//---------------------------------------------------------------------------------------------

SredstvaProizvodstva::SredstvaProizvodstva(string name, double stoimost, int kolichestvo) :
	Potreba("SredstvaPriizvodstva", name, stoimost, kolichestvo) {}

//---------------------------------------------------------------------------------------------

TransportnijeUslugi::TransportnijeUslugi(string name, double stoimost, int kolichestvo) :
	Potreba("TransportnijeUslugi", name, stoimost, kolichestvo) {}

//---------------------------------------------------------------------------------------------

Potreba* getPotrebaObj(string classname, string name, int kolichestvo, int stoimost)
{
	if (classname == "Udobrenija")
		return new Udobrenija(name, stoimost, kolichestvo);
	else if (classname == "SredstvaPriizvodstva")
		return new SredstvaProizvodstva(name, stoimost, kolichestvo);
	else if (classname == "TransportnijeUslugi")
		return new TransportnijeUslugi(name, stoimost, kolichestvo);
	else
		return NULL;
}