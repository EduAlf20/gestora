#pragma once
namespace appgrpucpController
{
	
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace appgrpucpModel;
	using namespace System::Data::SqlClient;
	public ref class GestorUsuario {
	public:
		List<user^>^ listaUsuario;
		SqlConnection^ conexion;

	public:
		GestorUsuario();
		//AÑADIR USUARIO A LA LISTA
		void agregarUser(user^ objusuario);
		void openConexion();
		void cerrarConexion();
	};



}

