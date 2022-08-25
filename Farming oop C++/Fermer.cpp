#include "Fermer.h"

FermerQueue::FermerQueue(void) : back(NULL), front(NULL) {}

FermerQueue::~FermerQueue(void)
{
	this->clear();
}


void FermerQueue::push_back(Fermer* value)
{
	elem* temp = new elem;

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

Fermer* FermerQueue::pop_back(void)
{
	if (!this->back)
		return NULL;

	if (!this->back->next)
	{
		Fermer* out = this->back->data;
		delete this->back;
		this->back = this->front = NULL;
		return out;
	}
	elem* del = this->back;
	Fermer* out = this->back->data;
	this->back = this->back->next;
	delete del;
	this->back->prev = NULL;
	return out;
}

bool FermerQueue::pop(string name)
{
	elem* cursor = this->back;
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

void FermerQueue::clear(void)
{
	while (this->back) delete this->pop_back();
}

Fermer* FermerQueue::find(string name)
{
	elem* cursor = this->back;
	while (cursor)
		if (cursor->data->getName() == name)
			return cursor->data;
		else
			cursor = cursor->next;
	return NULL;
}

//---------------------------------------------------------------------------------------------

Rabotnik::Rabotnik(string name) : name(name) {}

//---------------------------------------------------------------------------------------------

Fermer::Fermer(void) : Rabotnik(""), budjet(0) {}

Fermer::Fermer(string name, double budjet) : Rabotnik(name), budjet(budjet) {}

Fermer::~Fermer(void)
{
	prod.clear();
}

string Fermer::getName(void) const
{
	return name;
}

double Fermer::getBudjet(void) const
{
	return budjet;
}

void Fermer::setBudjet(const double budjet)
{
	this->budjet = budjet;
}

void Fermer::addProdukcija(Produkcija *produkcija)
{
	prod.push_back(produkcija);
}

int Fermer::delProdukcija(string produkcija, int kolichestvo)
{
	return prod.pop(produkcija, kolichestvo);
}

Produkcija* Fermer::findProdukcija(string produkcija)
{
	return prod.find(produkcija);
}

ProdukcijaQueue& Fermer::getProdukcijaQueue(void) 
{
	return prod;
}

void Fermer::prodToComboBox(ComboBox^ comboBox)
{
	comboBox->Items->Clear();
	for (ProdukcijaQueueIterator it(&getProdukcijaQueue()); !it.isEnd(); it.next())
		comboBox->Items->Add(gcnew String(it.getIter()->getName().c_str()));
}

//---------------------------------------------------------------------------------------------

Rukovoditel::Rukovoditel(string name) : Rabotnik(name) {}

Rukovoditel::~Rukovoditel(void)
{
	fermers.clear();
}

void Rukovoditel::clearFermers(void)
{
	fermers.clear();
}

void Rukovoditel::addFermer(Fermer* fermer)
{
	fermers.push_back(fermer);
}

int Rukovoditel::delFermer(string name)
{
	return fermers.pop(name);
}

Fermer* Rukovoditel::findFermer(string name)
{
	return fermers.find(name);
}

 FermerQueue& Rukovoditel::getFermerQueue(void) 
{
	return fermers;
}

void Rukovoditel::fermersToComboBox(ComboBox^ comboBox)
{
	comboBox->Items->Clear();
	for (FermerQueueIterator it(&getFermerQueue()); !it.isEnd(); it.next())
		comboBox->Items->Add(gcnew String(it.getIter()->getName().c_str()));
}