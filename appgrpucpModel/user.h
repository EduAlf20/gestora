#pragma once
namespace appgrpucpModel 
{
	using namespace System;
	public ref class user 
	{
	public:
		int id;
		bool admin;
		int codigoU;
		String^ firstName;
		String^ lastName;
		String^ genre;
		String^ email;
		String^ phoneNumber;
		String^ emailPucp;
		String^ career;
		String^ charge;
		//falta definir photo
		String^ Entrydate;
		String^ BirthDate;
		String^ userName;
		String^ password;
		String^ contactEmergencyName;  /*contacto de emergencia*/
		String^ contactEmergencyRelation;
		String^ contactEmergencyNumber;
		
	public:
		/*constructores*/
		user(int id, String^ name, String^ email, String^ usuario, String^ password); // mostrar
		user(String^ name, String^ email, String^ usuario, String^ password);// create
	};


}