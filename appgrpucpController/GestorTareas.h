#pragma once
namespace appgrpucpController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace appgrpucpModel;
	

	public ref class GestorTareas
	{
	private:
		List<Tarea^>^ listaTareas;
		
	public:
		GestorTareas();
		void abrirConexionDB();
		void cerrarConexionDB();

		void agregarTareaDB(Tarea^ objTarea);
		void modificarTareaDB(int id, Tarea^ objTarea);
		void eliminarTareaDB(int id);

	};

    

}

