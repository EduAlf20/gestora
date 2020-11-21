#pragma once

#include "SignForm.h"
#include "frmLayout.h"
namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::LinkLabel^ linkForgottenPassword;
	private: System::Windows::Forms::LinkLabel^ linkRegister;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->linkForgottenPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->linkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 26);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 58);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 21);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 58);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 20);
			this->textBox2->TabIndex = 3;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(161, 89);
			this->btnLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(94, 24);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Ingresar";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// linkForgottenPassword
			// 
			this->linkForgottenPassword->AutoSize = true;
			this->linkForgottenPassword->Location = System::Drawing::Point(150, 143);
			this->linkForgottenPassword->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkForgottenPassword->Name = L"linkForgottenPassword";
			this->linkForgottenPassword->Size = System::Drawing::Size(113, 13);
			this->linkForgottenPassword->TabIndex = 5;
			this->linkForgottenPassword->TabStop = true;
			this->linkForgottenPassword->Text = L"Olvidó su contraseña\?";
			// 
			// linkRegister
			// 
			this->linkRegister->AutoSize = true;
			this->linkRegister->Location = System::Drawing::Point(181, 129);
			this->linkRegister->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkRegister->Name = L"linkRegister";
			this->linkRegister->Size = System::Drawing::Size(49, 13);
			this->linkRegister->TabIndex = 6;
			this->linkRegister->TabStop = true;
			this->linkRegister->Text = L"Registrar";
			this->linkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(293, 171);
			this->Controls->Add(this->linkRegister);
			this->Controls->Add(this->linkForgottenPassword);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"LoginForm";
			this->Text = L"Inicio de Sesión";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e);
};
}
