#include "pch.h"
#include "user.h"
using namespace appgrpucpModel;
user::user(int id, String^ name, String^ email, String^ usuario, String^ password)
{
	this->id = id;
	this->firstName = name;
	this->email = email;
	this->userName = usuario;
	this->password= password;

}

user::user(String^ name, String^ email, String^ usuario, String^ password)
{
	this->firstName = name;
	this->email = email;
	this->userName = usuario;
	this->password = password;
}
