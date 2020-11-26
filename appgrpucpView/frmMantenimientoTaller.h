#pragma once
#include "frmNewWorkshop.h"

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMantenimientoTaller
	/// </summary>
	public ref class frmMantenimientoTaller : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoTaller(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMantenimientoTaller()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ btnCrear;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnCrear = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(49, 115);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(461, 243);
			this->dataGridView1->TabIndex = 0;
			// 
			// btnCrear
			// 
			this->btnCrear->Location = System::Drawing::Point(49, 32);
			this->btnCrear->Name = L"btnCrear";
			this->btnCrear->Size = System::Drawing::Size(102, 35);
			this->btnCrear->TabIndex = 1;
			this->btnCrear->Text = L"Crear taller";
			this->btnCrear->UseVisualStyleBackColor = true;
			this->btnCrear->Click += gcnew System::EventHandler(this, &frmMantenimientoTaller::btnCrear_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Editar taller";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// frmMantenimientoTaller
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 443);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnCrear);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmMantenimientoTaller";
			this->Text = L"frmMantenimientoTaller";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCrear_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNewWorkshop^ frm = gcnew frmNewWorkshop();
		frm->ShowDialog();

	}
	};
}
