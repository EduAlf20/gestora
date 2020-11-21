#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RecoveryPasswordForm
	/// </summary>
	public ref class RecoveryPasswordForm : public System::Windows::Forms::Form
	{
	public:
		RecoveryPasswordForm(void)
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
		~RecoveryPasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtEmail;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSend;

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
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(266, 28);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(183, 22);
			this->txtEmail->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Escriba Correo de Usuario";
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(318, 73);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 23);
			this->btnSend->TabIndex = 2;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			// 
			// RecoveryPasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 111);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtEmail);
			this->Name = L"RecoveryPasswordForm";
			this->Text = L"RecoveryPasswordForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
