#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmTalleres
	/// </summary>
	public ref class frmTalleres : public System::Windows::Forms::Form
	{
	public:
		frmTalleres(void)
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
		~frmTalleres()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button1;

	protected:




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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1064, 474);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Fechas";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Descripcion";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado";
			this->Column4->Name = L"Column4";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(897, 523);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Inscribir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmTalleres::button1_Click);
			// 
			// frmTalleres
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 595);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmTalleres";
			this->Text = L"frmTalleres";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
