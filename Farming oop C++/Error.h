#pragma once

class Error
{
protected:
	const char* text;

public:
	Error(const char* text);
	virtual const char* message(void) const;
};

class ProdukcijaError : public Error
{
public:
	ProdukcijaError(const char* text);
};

class FermerError : public Error
{
public:
	FermerError(const char* text);
};

class PotrebaError : public Error
{
public:
	PotrebaError(const char* text);
};

class FileError : public Error
{
public:
	FileError(const char* text);
};