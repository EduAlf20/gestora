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
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtId_Creador;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btn_New;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtTitulo;
	private: System::Windows::Forms::TextBox^ txtTema;
	private: System::Windows::Forms::TextBox^ txtDescripcion;
	private: System::Windows::Forms::TextBox^ txtCapacidad;







	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dgvSesiones;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_del_principal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnAnadirSesion;
	private: System::Windows::Forms::ComboBox^ cmbOrganizadores;
	private: System::Windows::Forms::ComboBox^ cmbParticipantes;
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
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtId_Creador = (gcnew System::Windows::Forms::TextBox());
			this->btn_New = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->txtTema = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacidad = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dgvSesiones = (gcnew System::Windows::Forms::DataGridView());
			this->Id_del_principal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnAnadirSesion = (gcnew System::Windows::Forms::Button());
			this->cmbOrganizadores = (gcnew System::Windows::Forms::ComboBox());
			this->cmbParticipantes = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSesiones))->BeginInit();
			this->SuspendLayout();
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(190, 64);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(127, 22);
			this->txtId->TabIndex = 0;
			this->txtId->TextChanged += gcnew System::EventHandler(this, &frmNewWorkshop::txt_title_TextChanged);
			// 
			// txtId_Creador
			// 
			this->txtId_Creador->Location = System::Drawing::Point(190, 123);
			this->txtId_Creador->Name = L"txtId_Creador";
			this->txtId_Creador->Size = System::Drawing::Size(127, 22);
			this->txtId_Creador->TabIndex = 4;
			// 
			// btn_New
			// 
			this->btn_New->Location = System::Drawing::Point(550, 431);
			this->btn_New->Name = L"btn_New";
			this->btn_New->Size = System::Drawing::Size(152, 54);
			this->btn_New->TabIndex = 5;
			this->btn_New->Text = L"Crear taller";
			this->btn_New->UseVisualStyleBackColor = true;
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(876, 431);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(163, 54);
			this->btnCancelar->TabIndex = 6;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Id del creador:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Titulo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(70, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Tema:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(412, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Organizadores:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(412, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Descripción:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(412, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Capacidad:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(412, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Participantes:";
			// 
			// txtTitulo
			// 
			this->txtTitulo->Location = System::Drawing::Point(190, 179);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(159, 22);
			this->txtTitulo->TabIndex = 15;
			// 
			// txtTema
			// 
			this->txtTema->Location = System::Drawing::Point(190, 233);
			this->txtTema->Name = L"txtTema";
			this->txtTema->Size = System::Drawing::Size(159, 22);
			this->txtTema->TabIndex = 16;
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(550, 69);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(152, 22);
			this->txtDescripcion->TabIndex = 17;
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(550, 123);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->Size = System::Drawing::Size(50, 22);
			this->txtCapacidad->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(765, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Sesiones:";
			// 
			// dgvSesiones
			// 
			this->dgvSesiones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSesiones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id_del_principal,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dgvSesiones->Location = System::Drawing::Point(768, 100);
			this->dgvSesiones->Name = L"dgvSesiones";
			this->dgvSesiones->RowHeadersWidth = 51;
			this->dgvSesiones->RowTemplate->Height = 24;
			this->dgvSesiones->Size = System::Drawing::Size(678, 150);
			this->dgvSesiones->TabIndex = 22;
			// 
			// Id_del_principal
			// 
			this->Id_del_principal->HeaderText = L"Id del principal";
			this->Id_del_principal->MinimumWidth = 6;
			this->Id_del_principal->Name = L"Id_del_principal";
			this->Id_del_principal->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Duración";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Observaciones";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Requerimientos";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1184, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 60);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Eliminar sesión seleccionada";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnAnadirSesion
			// 
			this->btnAnadirSesion->Location = System::Drawing::Point(976, 307);
			this->btnAnadirSesion->Name = L"btnAnadirSesion";
			this->btnAnadirSesion->Size = System::Drawing::Size(104, 55);
			this->btnAnadirSesion->TabIndex = 23;
			this->btnAnadirSesion->Text = L"Añadir nueva sesión";
			this->btnAnadirSesion->UseVisualStyleBackColor = true;
			this->btnAnadirSesion->Click += gcnew System::EventHandler(this, &frmNewWorkshop::btnAnadirSesion_Click);
			// 
			// cmbOrganizadores
			// 
			this->cmbOrganizadores->FormattingEnabled = true;
			this->cmbOrganizadores->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Anadir" });
			this->cmbOrganizadores->Location = System::Drawing::Point(550, 179);
			this->cmbOrganizadores->Name = L"cmbOrganizadores";
			this->cmbOrganizadores->Size = System::Drawing::Size(121, 24);
			this->cmbOrganizadores->TabIndex = 25;
			// 
			// cmbParticipantes
			// 
			this->cmbParticipantes->FormattingEnabled = true;
			this->cmbParticipantes->Location = System::Drawing::Point(550, 233);
			this->cmbParticipantes->Name = L"cmbParticipantes";
			this->cmbParticipantes->Size = System::Drawing::Size(121, 24);
			this->cmbParticipantes->TabIndex = 26;
			// 
			// frmNewWorkshop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1560, 526);
			this->Controls->Add(this->cmbParticipantes);
			this->Controls->Add(this->cmbOrganizadores);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnAnadirSesion);
			this->Controls->Add(this->dgvSesiones);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtCapacidad);
			this->Controls->Add(this->txtDescripcion);
			this->Controls->Add(this->txtTema);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btn_New);
			this->Controls->Add(this->txtId_Creador);
			this->Controls->Add(this->txtId);
			this->Name = L"frmNewWorkshop";
			this->Text = L"frmNewWorkshop";
			this->Load += gcnew System::EventHandler(this, &frmNewWorkshop::frmNewWorkshop_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSesiones))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void btnAnadirSesion_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvSesiones->Rows->Add();
	}
private: System::Void txt_title_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void frmNewWorkshop_Load(System::Object^ sender, System::EventArgs^ e) {
	/*Button^ Anadir_org = gcnew Button();
	cmbOrganizadores->Items->Add(Anadir_org);*/
}
};
}
