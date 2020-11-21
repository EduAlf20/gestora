#pragma once
#include "user.h"
using namespace System;
using namespace System::Collections::Generic;


namespace appgrpucpModel {

	public ref class Inscription_detail
	{
	public:
		property int Id;
		property int WorkShopId;
		property String^ Status;
		property String^ Observations;
	
	public:
		Inscription_detail(int id, int WorkShopId, String^ Status, String^ Observations);
	};

}




