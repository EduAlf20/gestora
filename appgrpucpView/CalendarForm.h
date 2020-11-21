#pragma once
#include "Antony.h"

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace date_process;
	/// <summary>
	/// Resumen de CalendarForm
	/// </summary>
	public ref class CalendarForm : public System::Windows::Forms::Form
	{
	private: String^ date_;
	public: List<int>^ fecha = gcnew List<int>();
	public:
		CalendarForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}


		CalendarForm(String^ date)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			date_ = date;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CalendarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::Button^ btnNextMonth;
	private: System::Windows::Forms::Button^ btnPreviousMonth;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private:

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Panel^ panel38;
	private: System::Windows::Forms::Panel^ panel37;
	private: System::Windows::Forms::Panel^ panel36;
	private: System::Windows::Forms::Panel^ panel35;
	private: System::Windows::Forms::Panel^ panel34;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel25;


	private: System::Windows::Forms::Panel^ panel43;
	private: System::Windows::Forms::Panel^ panel45;
	private: System::Windows::Forms::Panel^ panel44;
	private: System::Windows::Forms::Panel^ panel42;
	private: System::Windows::Forms::Panel^ panel41;
	private: System::Windows::Forms::Panel^ panel40;
	private: System::Windows::Forms::Panel^ panel39;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnNextMonth = (gcnew System::Windows::Forms::Button());
			this->btnPreviousMonth = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->labelDate);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1066, 77);
			this->panel1->TabIndex = 0;
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate->Location = System::Drawing::Point(27, 20);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(190, 39);
			this->labelDate->TabIndex = 1;
			this->labelDate->Text = L"Month, Year";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->btnNextMonth);
			this->panel2->Controls->Add(this->btnPreviousMonth);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(830, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(234, 75);
			this->panel2->TabIndex = 0;
			// 
			// btnNextMonth
			// 
			this->btnNextMonth->Location = System::Drawing::Point(136, 27);
			this->btnNextMonth->Name = L"btnNextMonth";
			this->btnNextMonth->Size = System::Drawing::Size(75, 32);
			this->btnNextMonth->TabIndex = 2;
			this->btnNextMonth->Text = L">";
			this->btnNextMonth->UseVisualStyleBackColor = true;
			this->btnNextMonth->Click += gcnew System::EventHandler(this, &CalendarForm::btnNextMonth_Click);
			// 
			// btnPreviousMonth
			// 
			this->btnPreviousMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPreviousMonth->Location = System::Drawing::Point(37, 27);
			this->btnPreviousMonth->Name = L"btnPreviousMonth";
			this->btnPreviousMonth->Size = System::Drawing::Size(75, 32);
			this->btnPreviousMonth->TabIndex = 1;
			this->btnPreviousMonth->Text = L"<";
			this->btnPreviousMonth->UseVisualStyleBackColor = true;
			this->btnPreviousMonth->Click += gcnew System::EventHandler(this, &CalendarForm::btnPreviousMonth_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 77);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1066, 50);
			this->panel3->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::Highlight;
			this->label7->Dock = System::Windows::Forms::DockStyle::Left;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(912, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 50);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Sábado";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(760, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 50);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Viernes";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::Highlight;
			this->label5->Dock = System::Windows::Forms::DockStyle::Left;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(608, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 50);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Jueves";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->Dock = System::Windows::Forms::DockStyle::Left;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(456, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 50);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Miércoles";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::Highlight;
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(304, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 50);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Martes";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(152, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 50);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Lunes";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Highlight;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 50);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Domingo";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel7);
			this->flowLayoutPanel1->Controls->Add(this->panel8);
			this->flowLayoutPanel1->Controls->Add(this->panel9);
			this->flowLayoutPanel1->Controls->Add(this->panel10);
			this->flowLayoutPanel1->Controls->Add(this->panel14);
			this->flowLayoutPanel1->Controls->Add(this->panel17);
			this->flowLayoutPanel1->Controls->Add(this->panel16);
			this->flowLayoutPanel1->Controls->Add(this->panel15);
			this->flowLayoutPanel1->Controls->Add(this->panel13);
			this->flowLayoutPanel1->Controls->Add(this->panel12);
			this->flowLayoutPanel1->Controls->Add(this->panel11);
			this->flowLayoutPanel1->Controls->Add(this->panel23);
			this->flowLayoutPanel1->Controls->Add(this->panel24);
			this->flowLayoutPanel1->Controls->Add(this->panel22);
			this->flowLayoutPanel1->Controls->Add(this->panel21);
			this->flowLayoutPanel1->Controls->Add(this->panel20);
			this->flowLayoutPanel1->Controls->Add(this->panel19);
			this->flowLayoutPanel1->Controls->Add(this->panel18);
			this->flowLayoutPanel1->Controls->Add(this->panel29);
			this->flowLayoutPanel1->Controls->Add(this->panel38);
			this->flowLayoutPanel1->Controls->Add(this->panel37);
			this->flowLayoutPanel1->Controls->Add(this->panel36);
			this->flowLayoutPanel1->Controls->Add(this->panel35);
			this->flowLayoutPanel1->Controls->Add(this->panel34);
			this->flowLayoutPanel1->Controls->Add(this->panel33);
			this->flowLayoutPanel1->Controls->Add(this->panel32);
			this->flowLayoutPanel1->Controls->Add(this->panel31);
			this->flowLayoutPanel1->Controls->Add(this->panel30);
			this->flowLayoutPanel1->Controls->Add(this->panel28);
			this->flowLayoutPanel1->Controls->Add(this->panel27);
			this->flowLayoutPanel1->Controls->Add(this->panel26);
			this->flowLayoutPanel1->Controls->Add(this->panel25);
			this->flowLayoutPanel1->Controls->Add(this->panel43);
			this->flowLayoutPanel1->Controls->Add(this->panel45);
			this->flowLayoutPanel1->Controls->Add(this->panel44);
			this->flowLayoutPanel1->Controls->Add(this->panel42);
			this->flowLayoutPanel1->Controls->Add(this->panel41);
			this->flowLayoutPanel1->Controls->Add(this->panel40);
			this->flowLayoutPanel1->Controls->Add(this->panel39);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 127);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1066, 613);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(146, 96);
			this->panel6->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(155, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(146, 96);
			this->panel4->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Location = System::Drawing::Point(307, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(146, 96);
			this->panel5->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(459, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(146, 96);
			this->panel7->TabIndex = 1;
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Location = System::Drawing::Point(611, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(146, 96);
			this->panel8->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Location = System::Drawing::Point(763, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(146, 96);
			this->panel9->TabIndex = 2;
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Location = System::Drawing::Point(915, 3);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(146, 96);
			this->panel10->TabIndex = 3;
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Location = System::Drawing::Point(3, 105);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(146, 96);
			this->panel14->TabIndex = 7;
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Location = System::Drawing::Point(155, 105);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(146, 96);
			this->panel17->TabIndex = 10;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Location = System::Drawing::Point(307, 105);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(146, 96);
			this->panel16->TabIndex = 9;
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Location = System::Drawing::Point(459, 105);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(146, 96);
			this->panel15->TabIndex = 8;
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Location = System::Drawing::Point(611, 105);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(146, 96);
			this->panel13->TabIndex = 6;
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Location = System::Drawing::Point(763, 105);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(146, 96);
			this->panel12->TabIndex = 4;
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Location = System::Drawing::Point(915, 105);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(146, 96);
			this->panel11->TabIndex = 5;
			// 
			// panel23
			// 
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel23->Location = System::Drawing::Point(3, 207);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(146, 96);
			this->panel23->TabIndex = 9;
			// 
			// panel24
			// 
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel24->Location = System::Drawing::Point(155, 207);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(146, 96);
			this->panel24->TabIndex = 10;
			// 
			// panel22
			// 
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel22->Location = System::Drawing::Point(307, 207);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(146, 96);
			this->panel22->TabIndex = 8;
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Location = System::Drawing::Point(459, 207);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(146, 96);
			this->panel21->TabIndex = 7;
			// 
			// panel20
			// 
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Location = System::Drawing::Point(611, 207);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(146, 96);
			this->panel20->TabIndex = 6;
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Location = System::Drawing::Point(763, 207);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(146, 96);
			this->panel19->TabIndex = 4;
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Location = System::Drawing::Point(915, 207);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(146, 96);
			this->panel18->TabIndex = 5;
			// 
			// panel29
			// 
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Location = System::Drawing::Point(3, 309);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(146, 96);
			this->panel29->TabIndex = 15;
			// 
			// panel38
			// 
			this->panel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel38->Location = System::Drawing::Point(155, 309);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(146, 96);
			this->panel38->TabIndex = 14;
			// 
			// panel37
			// 
			this->panel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel37->Location = System::Drawing::Point(307, 309);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(146, 96);
			this->panel37->TabIndex = 12;
			// 
			// panel36
			// 
			this->panel36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel36->Location = System::Drawing::Point(459, 309);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(146, 96);
			this->panel36->TabIndex = 16;
			// 
			// panel35
			// 
			this->panel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel35->Location = System::Drawing::Point(611, 309);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(146, 96);
			this->panel35->TabIndex = 18;
			// 
			// panel34
			// 
			this->panel34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel34->Location = System::Drawing::Point(763, 309);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(146, 96);
			this->panel34->TabIndex = 20;
			// 
			// panel33
			// 
			this->panel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel33->Location = System::Drawing::Point(915, 309);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(146, 96);
			this->panel33->TabIndex = 24;
			// 
			// panel32
			// 
			this->panel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel32->Location = System::Drawing::Point(3, 411);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(146, 96);
			this->panel32->TabIndex = 22;
			// 
			// panel31
			// 
			this->panel31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel31->Location = System::Drawing::Point(155, 411);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(146, 96);
			this->panel31->TabIndex = 13;
			// 
			// panel30
			// 
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel30->Location = System::Drawing::Point(307, 411);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(146, 96);
			this->panel30->TabIndex = 11;
			// 
			// panel28
			// 
			this->panel28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel28->Location = System::Drawing::Point(459, 411);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(146, 96);
			this->panel28->TabIndex = 19;
			// 
			// panel27
			// 
			this->panel27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel27->Location = System::Drawing::Point(611, 411);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(146, 96);
			this->panel27->TabIndex = 21;
			// 
			// panel26
			// 
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Location = System::Drawing::Point(763, 411);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(146, 96);
			this->panel26->TabIndex = 23;
			// 
			// panel25
			// 
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Location = System::Drawing::Point(915, 411);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(146, 96);
			this->panel25->TabIndex = 17;
			// 
			// panel43
			// 
			this->panel43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel43->Location = System::Drawing::Point(3, 513);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(146, 96);
			this->panel43->TabIndex = 28;
			// 
			// panel45
			// 
			this->panel45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel45->Location = System::Drawing::Point(155, 513);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(146, 96);
			this->panel45->TabIndex = 26;
			// 
			// panel44
			// 
			this->panel44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel44->Location = System::Drawing::Point(307, 513);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(146, 96);
			this->panel44->TabIndex = 30;
			// 
			// panel42
			// 
			this->panel42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel42->Location = System::Drawing::Point(459, 513);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(146, 96);
			this->panel42->TabIndex = 27;
			// 
			// panel41
			// 
			this->panel41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel41->Location = System::Drawing::Point(611, 513);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(146, 96);
			this->panel41->TabIndex = 24;
			// 
			// panel40
			// 
			this->panel40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel40->Location = System::Drawing::Point(763, 513);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(146, 96);
			this->panel40->TabIndex = 25;
			// 
			// panel39
			// 
			this->panel39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel39->Location = System::Drawing::Point(915, 513);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(146, 96);
			this->panel39->TabIndex = 29;
			// 
			// CalendarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1066, 740);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"CalendarForm";
			this->Text = L"CalendarForm";
			this->Load += gcnew System::EventHandler(this, &CalendarForm::CalendarForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnNextMonth_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnPreviousMonth_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CalendarForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: void refresh_calendar();
};
}
