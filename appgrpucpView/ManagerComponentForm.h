#pragma once

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ManagerComponentForm
	/// </summary>
	public ref class ManagerComponentForm : public System::Windows::Forms::Form
	{
	public:
		ManagerComponentForm(void)
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
		~ManagerComponentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Store;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateUpdated;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;
	private: System::Windows::Forms::ComboBox^ comboBox1;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Store = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateUpdated = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(335, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(335, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(131, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Descripción";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(77, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Componentes";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(19, 38);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(94, 21);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Por tienda";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(156, 38);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(140, 21);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Por componentes";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(234, 156);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(308, 138);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tipo de búsqueda";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Name, this->Store,
					this->DateUpdated, this->Price, this->Quantity, this->Subtotal
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 341);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(748, 162);
			this->dataGridView1->TabIndex = 9;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// Store
			// 
			this->Store->HeaderText = L"Tienda";
			this->Store->MinimumWidth = 6;
			this->Store->Name = L"Store";
			this->Store->Width = 125;
			// 
			// DateUpdated
			// 
			this->DateUpdated->HeaderText = L"Fecha de Actualización";
			this->DateUpdated->MinimumWidth = 6;
			this->DateUpdated->Name = L"DateUpdated";
			this->DateUpdated->Width = 125;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 125;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Cantidad";
			this->Quantity->MinimumWidth = 6;
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 125;
			// 
			// Subtotal
			// 
			this->Subtotal->HeaderText = L"Subtotal";
			this->Subtotal->MinimumWidth = 6;
			this->Subtotal->Name = L"Subtotal";
			this->Subtotal->Width = 125;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 77);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// ManagerComponentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 574);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			//this->Name = L"ManagerComponentForm";
			//this->Text = L"ManagerComponentForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
