#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Potreba;

struct PotrebaElem
{
	Potreba* data;//���
	PotrebaElem* prev;//��������� �������
	PotrebaElem* next;//��������� �������
};

class PotrebaQueue
{
private:
	PotrebaElem* back;//���������� �������
	PotrebaElem* front;//�������
public:
	PotrebaQueue(void);
	~PotrebaQueue(void);
	
	void push_back(Potreba* value);//��������� � ����� �����
	Potreba* pop_back(void);//��������� � ���� �����
	bool pop(string name);//��������� �������� �������� �����
	void clear(void);// ��������
	Potreba* find(string name);//����� �� ������� ������
	friend class PotrebaQueueIterator;
};

class PotrebaQueueIterator
{
	 PotrebaQueue* obj;
	PotrebaElem* iter;

public:
	PotrebaQueueIterator( PotrebaQueue* obj) : obj(obj), iter(obj->back) {}

	PotrebaElem* begin(void)// ������� �������� �� ������� �����
	{
		return obj->back;
	}

	Potreba* getIter(void)//������ ���
	{
		return iter->data;
	}

	bool isEnd(void)//������� ������� ���� ����������
	{
		return iter == NULL;
	}

	void next(void)//������� �� ����������
	{
		iter = iter->next;
	}
};

//---------------------------------------------------------------------------------------------

class Potreba
{
protected:
	int stoimost;
	string classname;//��� �������
	string name;//����� �������
	int kolichestvo;//������� 

public:
	Potreba(void);

	Potreba(string classname, string name, int stoimost, int kolichestvo);

	int getStoimost(void) const;// ����� ��� ��������� ����� ��� ������� �������;

	void setStoimost(const int stoimost);// ����� ��� ������������ �������� �������;

	int getKolichestvo(void) const; //����� ��� ��������� ����� ��� ������� �������;

	void setKolichestvo(const int kolichestvo);//����� ��� ������������ �������� ��� ������� �������;

	string getClassname(void) const;//����� ��� ��������� ����� ��� ��� �������;

	string getName(void) const;//��� ��������� ������� �� ����

	double stoimostPotrebnosti(void);//������������ ������� �������
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

Potreba* getPotrebaObj(string classname, string name, int kolichestvo, int stoimost);//������� ��� ��������� �������� ��������� ����� �������