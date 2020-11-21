#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace appgrpucpModel {
	public ref class Session
	{
		property int Id;
		property int Principal_Id;
		property DateTime^ Date;
		property float Duration;
		property List<int>^ Assistant_Advisers;
		property List<int>^ Assistant_students;
		property String^ Observations;
		property List<String^>^ Requirements;

	};
}
