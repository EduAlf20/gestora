#pragma once
#include "user.h"
#include "Session.h"
namespace appgrpucpModel 
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class workshop {

	public:
		int id;
		int idCreador;
		String^ tittle;
		String^ topic;
		List<user^>^ listaOrganizer;
		String^ descripcion;
		int capacity;
		List<user^>^ listaParticipantes;
		List<Session^>^ listSession;
		
	public:

		workshop(int id, String^ tittle, String^ topic, String^ descripcion);
		workshop () {};








	};
	




}

