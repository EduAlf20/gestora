#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace appgrpucpModel;

	/// <summary>
	/// Summary for frmNewWorkshop
	/// </summary>
	public ref class frmNewWorkshop : public System::Windows::Forms::Form
	{
	public:
		frmNewWorkshop(void)
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
		~frmNewWorkshop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_title;
	protected:
	private: System::Windows::Forms::TextBox^ txt_descripcion;
	private: System::Windows::Forms::Button^ btn_New;
	private: Form^ refForm;
	public: frmNewWorkshop(Form^ owner) {
		InitializeComponent();
		this->refForm = owner;
	}
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
			this->txt_title = (gcnew System::Windows::Forms::TextBox());
			this->txt_descripcion = (gcnew System::Windows::Forms::TextBox());
			this->btn_New = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_title
			// 
			this->txt_title->Location = System::Drawing::Point(232, 69);
			this->txt_title->Name = L"txt_title";
			this->txt_title->Size = System::Drawing::Size(100, 22);
			this->txt_title->TabIndex = 0;
			// 
			// txt_descripcion
			// 
			this->txt_descripcion->Location = System::Drawing::Point(232, 114);
			this->txt_descripcion->Name = L"txt_descripcion";
			this->txt_descripcion->Size = System::Drawing::Size(100, 22);
			this->txt_descripcion->TabIndex = 4;
			// 
			// btn_New
			// 
			this->btn_New->Location = System::Drawing::Point(232, 194);
			this->btn_New->Name = L"btn_New";
			this->btn_New->Size = System::Drawing::Size(117, 23);
			this->btn_New->TabIndex = 5;
			this->btn_New->Text = L"Crear";
			this->btn_New->UseVisualStyleBackColor = true;
			this->btn_New->Click += gcnew System::EventHandler(this, &frmNewWorkshop::btn_New_Click);
			// 
			// frmNewWorkshop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 468);
			this->Controls->Add(this->btn_New);
			this->Controls->Add(this->txt_descripcion);
			this->Controls->Add(this->txt_title);
			this->Name = L"frmNewWorkshop";
			this->Text = L"frmNewWorkshop";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: appgrpucpModel::workshop^ taller = gcnew workshop();

	private: System::Void btn_New_Click(System::Object^ sender, System::EventArgs^ e) {
		taller->tittle = txt_title->Text;
		taller->descripcion = txt_descripcion->Text;
		this->Close();
	}
	

	};
}
