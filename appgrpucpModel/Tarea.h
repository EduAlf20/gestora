#pragma once
#include "user.h"

namespace appgrpucpModel 
{
	using namespace System;
	
	public ref class Tarea
	{
	private:
		int id;
		DateTime^ fechaInicio;
		DateTime^ fechaEntrega;
		String^ Estado;
		user^ encargado;
		String^ Titulo;
		String^ Contenido;
	public:
		Tarea(int id, DateTime^ fechaInicio,DateTime^ fechaEntrega,String^ Estado,user^ encargado,String^ Titulo,String^ Contenido);

	};
}




