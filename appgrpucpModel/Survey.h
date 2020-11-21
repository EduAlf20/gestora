#pragma once
#include "user.h"

namespace appgrpucpModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Survey {

	public:
		int id;
		String^ tittle;
		String^ descripcion;
		user^ Encuestado;

	public:

		Survey(int id, String^ tittle, String^ descripcion, user^ Encuestado);

	};
}
