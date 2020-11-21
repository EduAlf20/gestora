#pragma once

namespace appgrpucpModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Question {

	public:
		int id;
		String^ Type;
		String^ contenidoPregunta;
		String^ contenidoRespuesta;

	public:
		Question(int id, String^ Type, String^ contenidoPregunta, String^ contenidoRespuesta);

	};
}
