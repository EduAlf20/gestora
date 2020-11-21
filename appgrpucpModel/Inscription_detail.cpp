#include "pch.h"
#include "Inscription_detail.h"

using namespace appgrpucpModel;

Inscription_detail::Inscription_detail(int id_,int WorkShopId_, String^ Status_, String^ Observations_)
{
	this->Id = id_;
	this->WorkShopId = WorkShopId_;
	this->Status = Status_;
	this->Observations = Observations_;
}
