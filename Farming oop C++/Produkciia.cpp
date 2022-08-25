#include "Produkciia.h"

ProdukcijaQueue::ProdukcijaQueue(void) : back(NULL), front(NULL) {}

ProdukcijaQueue::~ProdukcijaQueue(void)
{
	this->clear();
}

void ProdukcijaQueue::push_back(Produkcija* value)
{
	ProdElem* temp = new ProdElem;

	temp->data = value;
	temp->prev = NULL;

	if (!this->back)
	{
		this->back = this->front = temp; temp->next = NULL;
	}
	else
	{
		temp->next = this->back;
		this->back->prev = temp;
		this->back = temp;
	}
}

Produkcija* ProdukcijaQueue::pop_back(void)
{
	if (!this->back)
		return NULL;

	if (!this->back->next)
	{
		Produkcija* out = this->back->data;
		delete this->back;
		this->back = this->front = NULL;
		return out;
	}
	ProdElem* del = this->back;
	Produkcija* out = this->back->data;
	this->back = this->back->next;
	delete del;
	this->back->prev = NULL;
	return out;
}

int ProdukcijaQueue::pop(string name, int kolichestvo)
{
	ProdElem* cursor = this->back;
	while (cursor)
		if (cursor->data->getName() == name)
		{
			if (cursor->data->getKolichestvo() < kolichestvo)
				return -1;
			if (cursor->data->getKolichestvo() > kolichestvo)
				cursor->data->setKolichestvo(cursor->data->getKolichestvo() - kolichestvo);
			else
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
			return 1;
		}
		else
			cursor = cursor->next;
	return 0;
}
void ProdukcijaQueue::clear(void)
{
	while (this->back) delete this->pop_back();
}

Produkcija* ProdukcijaQueue::find(string name)
{
	ProdElem* cursor = this->back;
	while (cursor)
		if (cursor->data->getName() == name)
			return cursor->data;
		else
			cursor = cursor->next;
	return NULL;
}

//---------------------------------------------------------------------------------------------

Produkcija::Produkcija(void) {}

Produkcija::Produkcija(string name, string classname, double cenazaedenicu, int kolichestvo, string ed) :
	name(name), classname(classname), cenazaedenicu(cenazaedenicu), kolichestvo(kolichestvo), ed(ed) {}

Produkcija::~Produkcija(void)
{
	potrebi.clear();
}

string Produkcija::getClassName(void) const
{
	return classname;
}

string Produkcija::getName(void) const
{
	return name;
}

double Produkcija::getCenazaedenicu(void) const
{
	return cenazaedenicu;
}

void Produkcija::setCenazaedenicu(const double cenazaedenicu)
{
	this->cenazaedenicu = cenazaedenicu;
}

int Produkcija::getKolichestvo(void) const
{
	return kolichestvo;
}

void Produkcija::setKolichestvo(const int kolichestvo)
{
	this->kolichestvo = kolichestvo;
}

string Produkcija::getEdenici(void) const
{
	return ed;
}

void Produkcija::setEdenici(const string ed)
{
	this->ed = ed;
}

void Produkcija::addPotreba(Potreba* potreba)
{
	potrebi.push_back(potreba);
}

bool Produkcija::delPotreba(string potreba)
{
	return potrebi.pop(potreba);
}

 PotrebaQueue& Produkcija::getPotrebiQueue(void) 
{
	return potrebi;
}

//---------------------------------------------------------------------------------------------

Zerno::Zerno(string name, double cenazaedenicu, int kolichestvo, string ed) :
	Produkcija(name, "Zerno", cenazaedenicu, kolichestvo, ed)
{
	/*potrebi["Gerbicidi"] = Udobrenija(500, 100);
	potrebi["Transport"] = TransportnijeUslugi(80, 200);*/
}

//---------------------------------------------------------------------------------------------

Miaso::Miaso(string name, double cenazaedenicu, int kolichestvo, string ed) :
	Produkcija(name, "Miaso", cenazaedenicu, kolichestvo, ed)
{
	/*potrebi["Miasopererabotka"] = SredstvaPriizvodstva(kolichestvo * 300, 150);
	potrebi["Transport"] = TransportnijeUslugi(kolichestvo * 300, 100);*/
}

//---------------------------------------------------------------------------------------------

Fructi::Fructi(string name, double cenazaedenicu, int kolichestvo, string ed) :
	Produkcija(name, "Fructi", cenazaedenicu, kolichestvo, ed)
{
	/*potrebi["Gerbicidi"] = Udobrenija(kolichestvo * 500, 100);
	potrebi["Transport"] = TransportnijeUslugi(kolichestvo * 80, 200);*/
}

//---------------------------------------------------------------------------------------------

Ovocshi::Ovocshi(string name, double cenazaedenicu, int kolichestvo, string ed) :
	Produkcija(name, "Ovocshi", cenazaedenicu, kolichestvo, ed)
{
	/*potrebi["Gerbicidi"] = Udobrenija(kolichestvo * 100, 100);
	potrebi["Transport"] = TransportnijeUslugi(kolichestvo * 120, 100);*/
}

//---------------------------------------------------------------------------------------------

Produkcija* getProdukcijaObj(string name, string classname, double cenazaedenicu, int kolichestvo, string ed)
{
	if (classname == "Zerno")
		return new Zerno(name, cenazaedenicu, kolichestvo, ed);
	else if (classname == "Miaso")
		return new Miaso(name, cenazaedenicu, kolichestvo, ed);
	else if (classname == "Fructi")
		return new Fructi(name, cenazaedenicu, kolichestvo, ed);
	else if (classname == "Ovocshi")
		return new Ovocshi(name, cenazaedenicu, kolichestvo, ed);
	else
		return NULL;
}