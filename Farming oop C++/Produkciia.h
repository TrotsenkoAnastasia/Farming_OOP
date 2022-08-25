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
	Produkcija* data; // ���
	ProdElem* prev;//��������� �������
	ProdElem* next;//��������� �������
};

class ProdukcijaQueue
{
private:
	ProdElem* back;//���������� �������
	ProdElem* front;//�������
public:

	ProdukcijaQueue(void);
	~ProdukcijaQueue(void);

	void push_back(Produkcija* value);//��������� � ����� �����
	Produkcija* pop_back(void);//��������� � ���� �����
	int pop(string name, int kolichestvo);//��������� �������� �������� �����
	void clear(void);// ��������
	Produkcija* find(string name);//����� �� ������� ������

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
	string classname;//��� ���������
	int kolichestvo;//������� ���������
	double cenazaedenicu;//���� �� �������
	string ed;//������� ���������� ���������
	string name;//����� ���������

	PotrebaQueue potrebi;

public:
	Produkcija(void);

	Produkcija(string name, string classname, double cenazaedenicu, int kolichestvo, string ed);

	~Produkcija(void);

	virtual string getName(void) const;// ����� ��� ��������� ����� ��� ����� ���������;

	virtual string getClassName(void) const;//����� ��� ��������� ����� ��� ��� ���������;

	virtual double getCenazaedenicu(void) const;//����� ��� ��������� ����� ��� ���� ���������;

	virtual void setCenazaedenicu(const double cenazaedenicu);//����� ��� ������������ �������� ���� �� ������� ���������;

	virtual int getKolichestvo(void) const;//����� ��� ��������� ����� ��� �������;

	virtual void setKolichestvo(const int kolichestvo);//) ����� ��� ������������ ������� ���������;

	virtual string getEdenici(void) const;//����� ��� ��������� ����� ��� ������� ���������� ������� ���������;

	virtual void setEdenici(const string ed);//����� ��� ������������ ����� ��� ������� ���������� ������� ���������;

	void addPotreba(Potreba* potreba);//������� ��� ��������� �������, ��� ���������� ������ ���������;

	bool delPotreba(string potreba);//��������� �������

    PotrebaQueue& getPotrebiQueue(void) ;//����� ��� ��������� ����� ��� �������;
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

Produkcija* getProdukcijaObj(string name, string classname, double cenazaedenicu, int kolichestvo, string ed);//������� ��� ��������� �������� ��������� ����� ���������