#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmNotifications
	/// </summary>
public ref class frmNotifications : public System::Windows::Forms::Form
{
public:
	frmNotifications(void)
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
	~frmNotifications()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::TabControl^ tabControl1;
protected:
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Titulo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ estado;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Details;








protected:







protected:
private: System::ComponentModel::IContainer^ components;

protected:




private:
	/// <summary>
	/// Variable del diseñador necesaria.
	/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Método necesario para admitir el Diseñador. No se puede modificar
	/// el contenido de este método con el editor de código.
	/// </summary>
	void InitializeComponent(void)
	{
		this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
		this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
		this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
		this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
		this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
		this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->Titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
		this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
		this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
		this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Details = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabControl1->SuspendLayout();
		this->tabPage2->SuspendLayout();
		this->tabPage1->SuspendLayout();
		this->tabControl2->SuspendLayout();
		this->tabPage4->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
		this->tabPage5->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
		this->tabPage6->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
		this->SuspendLayout();
		this->tabControl1->Controls->Add(this->tabPage1);
		this->tabControl1->Controls->Add(this->tabPage2);
		this->tabControl1->Controls->Add(this->tabPage3);
		this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tabControl1->Location = System::Drawing::Point(0, 0);
		this->tabControl1->Name = L"tabControl1";
		this->tabControl1->SelectedIndex = 0;
		this->tabControl1->Size = System::Drawing::Size(1123, 687);
		this->tabControl1->TabIndex = 0;
		this->tabPage2->Controls->Add(this->dataGridView4);
		this->tabPage2->Location = System::Drawing::Point(4, 22);
		this->tabPage2->Name = L"tabPage2";
		this->tabPage2->Padding = System::Windows::Forms::Padding(3);
		this->tabPage2->Size = System::Drawing::Size(1115, 661);
		this->tabPage2->TabIndex = 1;
		this->tabPage2->Text = L"Reuniones";
		this->tabPage2->UseVisualStyleBackColor = true;
		this->tabPage3->Location = System::Drawing::Point(4, 22);
		this->tabPage3->Name = L"tabPage3";
		this->tabPage3->Padding = System::Windows::Forms::Padding(3);
		this->tabPage3->Size = System::Drawing::Size(1115, 661);
		this->tabPage3->TabIndex = 2;
		this->tabPage3->Text = L"Encuestas";
		this->tabPage3->UseVisualStyleBackColor = true;
		this->tabPage1->Controls->Add(this->tabControl2);
		this->tabPage1->Location = System::Drawing::Point(4, 22);
		this->tabPage1->Name = L"tabPage1";
		this->tabPage1->Padding = System::Windows::Forms::Padding(3);
		this->tabPage1->Size = System::Drawing::Size(1115, 661);
		this->tabPage1->TabIndex = 0;
		this->tabPage1->Text = L"Tareas";
		this->tabPage1->UseVisualStyleBackColor = true;
		this->tabControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->tabControl2->Controls->Add(this->tabPage4);
		this->tabControl2->Controls->Add(this->tabPage5);
		this->tabControl2->Controls->Add(this->tabPage6);
		this->tabControl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tabControl2->Location = System::Drawing::Point(8, 28);
		this->tabControl2->Name = L"tabControl2";
		this->tabControl2->SelectedIndex = 0;
		this->tabControl2->Size = System::Drawing::Size(1099, 537);
		this->tabControl2->TabIndex = 3;
		this->tabPage4->Controls->Add(this->dataGridView1);
		this->tabPage4->Location = System::Drawing::Point(4, 29);
		this->tabPage4->Name = L"tabPage4";
		this->tabPage4->Padding = System::Windows::Forms::Padding(3);
		this->tabPage4->Size = System::Drawing::Size(1091, 504);
		this->tabPage4->TabIndex = 0;
		this->tabPage4->Text = L"Historial";
		this->tabPage4->UseVisualStyleBackColor = true;
		this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Titulo, this->estado });
		this->dataGridView1->Location = System::Drawing::Point(3, 6);
		this->dataGridView1->Name = L"dataGridView1";
		this->dataGridView1->Size = System::Drawing::Size(1079, 486);
		this->dataGridView1->TabIndex = 0;
		this->Titulo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		this->Titulo->HeaderText = L"Titulo de tareas pasadas";
		this->Titulo->Name = L"Titulo";
		this->estado->HeaderText = L"Estado";
		this->estado->Name = L"estado";
		this->tabPage5->Controls->Add(this->dataGridView2);
		this->tabPage5->Location = System::Drawing::Point(4, 29);
		this->tabPage5->Name = L"tabPage5";
		this->tabPage5->Padding = System::Windows::Forms::Padding(3);
		this->tabPage5->Size = System::Drawing::Size(1091, 504);
		this->tabPage5->TabIndex = 1;
		this->tabPage5->Text = L"Pendientes";
		this->tabPage5->UseVisualStyleBackColor = true;
		this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
			this->dataGridViewTextBoxColumn1,
				this->dataGridViewTextBoxColumn2
		});
		this->dataGridView2->Location = System::Drawing::Point(6, 6);
		this->dataGridView2->Name = L"dataGridView2";
		this->dataGridView2->Size = System::Drawing::Size(1079, 492);
		this->dataGridView2->TabIndex = 1;
		this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		this->dataGridViewTextBoxColumn1->HeaderText = L"Titulo de Pendiente";
		this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
		this->dataGridViewTextBoxColumn2->HeaderText = L"Estado";
		this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
		this->tabPage6->Controls->Add(this->dataGridView3);
		this->tabPage6->Location = System::Drawing::Point(4, 29);
		this->tabPage6->Name = L"tabPage6";
		this->tabPage6->Padding = System::Windows::Forms::Padding(3);
		this->tabPage6->Size = System::Drawing::Size(1091, 504);
		this->tabPage6->TabIndex = 2;
		this->tabPage6->Text = L"Hechos";
		this->tabPage6->UseVisualStyleBackColor = true;
		this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
			this->dataGridViewTextBoxColumn3,
				this->dataGridViewTextBoxColumn4
		});
		this->dataGridView3->Location = System::Drawing::Point(6, 6);
		this->dataGridView3->Name = L"dataGridView3";
		this->dataGridView3->Size = System::Drawing::Size(1079, 492);
		this->dataGridView3->TabIndex = 1;
		this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		this->dataGridViewTextBoxColumn3->HeaderText = L"Titulo Hechos";
		this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
		this->dataGridViewTextBoxColumn4->HeaderText = L"Estado";
		this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
		this->dataGridView4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
			this->Column1, this->Column2,
				this->Details
		});
		this->dataGridView4->Location = System::Drawing::Point(84, 54);
		this->dataGridView4->Name = L"dataGridView4";
		this->dataGridView4->Size = System::Drawing::Size(941, 460);
		this->dataGridView4->TabIndex = 1;
		this->Column1->HeaderText = L"Fecha";
		this->Column1->Name = L"Column1";
		this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		this->Column2->HeaderText = L"Titulo";
		this->Column2->Name = L"Column2";
		this->Details->HeaderText = L"Details";
		this->Details->Name = L"Details";
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1123, 687);
		this->Controls->Add(this->tabControl1);
		this->Name = L"frmNotifications";
		this->Text = L"Notifications";
		this->Load += gcnew System::EventHandler(this, &frmNotifications::frmNotifications_Load);
		this->tabControl1->ResumeLayout(false);
		this->tabPage2->ResumeLayout(false);
		this->tabPage1->ResumeLayout(false);
		this->tabControl2->ResumeLayout(false);
		this->tabPage4->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
		this->tabPage5->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
		this->tabPage6->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
		this->ResumeLayout(false);

	}
#pragma endregion
	/*
private: System::Void meetingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void tareasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cuestionariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
*/
private: System::Void frmNotifications_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   


};
}
