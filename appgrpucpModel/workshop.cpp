#include "pch.h"
#include "workshop.h"
using namespace appgrpucpModel;

workshop::workshop(int id, String^ tittle, String^ topic, String^ descripcion)
{
	this->id = id;
	this->tittle = tittle;
	this->topic = topic;
	this->descripcion = descripcion;

}
