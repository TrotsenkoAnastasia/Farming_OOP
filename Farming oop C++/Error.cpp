#include "Error.h"

Error::Error(const char* text) : text(text) {}

const char* Error::message(void) const
{
	return text;
}

ProdukcijaError::ProdukcijaError(const char* text) : Error(text) {}

FermerError::FermerError(const char* text) : Error(text) {}

PotrebaError::PotrebaError(const char* text) : Error(text) {}

FileError::FileError(const char* text) : Error(text) {}