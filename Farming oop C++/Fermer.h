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
	Fermer* data;//������ ��� 
	elem* prev;//��������� �������
	elem* next;//��������� �������
};

class FermerQueue
{
private:
	elem* back;//���������� �������
	elem* front;//������� �������
public:
	FermerQueue(void);
	~FermerQueue(void);
	
	void push_back(Fermer* value);//��������� � ����� �����
	Fermer* pop_back(void);//��������� � ���� �����
	bool pop(string name);//��������� �������� �������� �����
	void clear(void);// ��������
	Fermer* find(string name);//����� �� ������� ������

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
	ProdukcijaQueue prod;// �ᒺ�� ����� - ���������� �� ������ � ����������
	double budjet;//������ ���������� �������

public:
	Fermer(void);

	Fermer(string name, double budjet);

	~Fermer(void);

	string getName(void) const;//����� ��� ��������� ������� �� ����

	double getBudjet(void) const;//����� ��� ��������� ����� ��� ������

	void setBudjet(const double budjet);//����� ��� ������������ �������� �������

	void addProdukcija(Produkcija *produkcija);//������� ��� ��������� ���������

	int delProdukcija(string produkcija, int kolichestvo);//������� ��� ��������� ���������

	Produkcija* findProdukcija(string produkcija);//����� ��� ������ ������ ���������

	ProdukcijaQueue& getProdukcijaQueue(void);//����� �� ������� �������� �ᒺ��� � �����

	void prodToComboBox(ComboBox^ comboBox);//����� �� �������� ��������� � ���������� ������
};

//---------------------------------------------------------------------------------------------

class Rukovoditel : public Rabotnik
{
private:
	FermerQueue fermers;

public:
	Rukovoditel(string name);

	~Rukovoditel(void);

	void clearFermers(void);//��������� ��� ����� ��� �������

	void addFermer(Fermer* fermer);//��������� �������

	int delFermer(string name);//��������� ������� �� ����

	Fermer* findFermer(string name);//����� �������

	FermerQueue& getFermerQueue(void);//����� ������� ������� � �����

	void fermersToComboBox(ComboBox^ comboBox);//��������� ������� � ���������� ������
};