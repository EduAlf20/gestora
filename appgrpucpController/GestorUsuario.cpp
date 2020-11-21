#include "pch.h"
#include "GestorUsuario.h"
using namespace appgrpucpController;

GestorUsuario::GestorUsuario()
{
	this->listaUsuario = gcnew List<user^>();
	this->conexion = gcnew SqlConnection();
}

void GestorUsuario::agregarUser(user^ objusuario)
{
	// vamos a agregar ese objUsuario a la lista 

	this->listaUsuario->Add(objusuario);

	

	try {
		this->openConexion();

		SqlCommand^ query = gcnew SqlCommand();
		query->Connection = this->conexion;
		/*query->CommandText = "insert into Usuario(NAME,EMAIL,USUARIO, CONTRASENA) values('" + objusuario->name + "','" + objusuario->email + "','" + objusuario->usuario + "','" + objusuario->contrasena + "'); ";*/
		query->ExecuteNonQuery();
		this->cerrarConexion();
		
	}
	catch (SqlException^ e) {
		this->cerrarConexion();
	}
}

void GestorUsuario::openConexion()
{
	String^ contra = "Iamthefuture23";
	this->conexion->ConnectionString = "Server= grpucp.cdx2wfxvg9vx.us-east-1.rds.amazonaws.com; DataBase= grpucp;User ID=admin ; Password = '"+contra+"'";
	this->conexion->Open();

}

void GestorUsuario::cerrarConexion()
{
	this->conexion->Close();
}
