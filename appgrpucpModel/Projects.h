#pragma once
#include "Supplies.h"

using namespace System;
using namespace System::Collections::Generic;

namespace appgrpucpModel {
	public ref class Projects
	{
		property int Id;
		property String^ Name;
		property String^ Description;
		property DateTime^ DateInit;
		property DateTime^ DateEnd;
		property double Invertion;
		property List<Supplies^>^ Supply;
	};
}
