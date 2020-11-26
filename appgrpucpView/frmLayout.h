#pragma once

#include "CalendarForm.h"

namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Resumen de frmLayout
	/// </summary>
	/// 

	/*public ref class FormCollection : System::Collections::ReadOnlyCollectionBase {

	public: IGNORAR ESTOOOO 
		FormCollection();

	};*/

	public ref class frmLayout : public System::Windows::Forms::Form 
	{
	public: String^ date_; //Variable Global que servir� para todas las ventanas
	public:
		frmLayout(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmLayout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ perfilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yourCalendarToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ talleresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ notificacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dataComponentsToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ crearTallerToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;


	protected:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->yourCalendarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->notificacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->talleresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataComponentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearTallerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(309, 741);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(27, 12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 231);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->yourCalendarToolStripMenuItem,
					this->notificacionesToolStripMenuItem, this->talleresToolStripMenuItem, this->dataComponentsToolStripMenuItem, this->toolStripMenuItem1,
					this->perfilToolStripMenuItem
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip1->Location = System::Drawing::Point(24, 258);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(251, 312);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// yourCalendarToolStripMenuItem
			// 
			this->yourCalendarToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->yourCalendarToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->yourCalendarToolStripMenuItem->Name = L"yourCalendarToolStripMenuItem";
			this->yourCalendarToolStripMenuItem->Size = System::Drawing::Size(245, 41);
			this->yourCalendarToolStripMenuItem->Text = L"Your Calendar";
			this->yourCalendarToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::yourCalendarToolStripMenuItem_Click);
			// 
			// notificacionesToolStripMenuItem
			// 
			this->notificacionesToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->notificacionesToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->notificacionesToolStripMenuItem->Name = L"notificacionesToolStripMenuItem";
			this->notificacionesToolStripMenuItem->Size = System::Drawing::Size(245, 41);
			this->notificacionesToolStripMenuItem->Text = L"Notificaciones";
			this->notificacionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::notificacionesToolStripMenuItem_Click);
			// 
			// talleresToolStripMenuItem
			// 
			this->talleresToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->talleresToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->talleresToolStripMenuItem->Name = L"talleresToolStripMenuItem";
			this->talleresToolStripMenuItem->Size = System::Drawing::Size(245, 41);
			this->talleresToolStripMenuItem->Text = L"Talleres";
			this->talleresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::talleresToolStripMenuItem_Click);
			// 
			// dataComponentsToolStripMenuItem
			// 
			this->dataComponentsToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->dataComponentsToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->dataComponentsToolStripMenuItem->Name = L"dataComponentsToolStripMenuItem";
			this->dataComponentsToolStripMenuItem->Size = System::Drawing::Size(245, 41);
			this->dataComponentsToolStripMenuItem->Text = L"Data Components";
			this->dataComponentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::dataComponentsToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->ForeColor = System::Drawing::Color::White;
			this->toolStripMenuItem1->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(245, 41);
			this->toolStripMenuItem1->Text = L"Perfil";
			// 
			// perfilToolStripMenuItem
			// 
			this->perfilToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->crearTallerToolStripMenuItem });
			this->perfilToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->perfilToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->perfilToolStripMenuItem->Name = L"perfilToolStripMenuItem";
			this->perfilToolStripMenuItem->Size = System::Drawing::Size(245, 41);
			this->perfilToolStripMenuItem->Text = L"Admin";
			// 
			// crearTallerToolStripMenuItem
			// 
			this->crearTallerToolStripMenuItem->Name = L"crearTallerToolStripMenuItem";
			this->crearTallerToolStripMenuItem->Size = System::Drawing::Size(359, 42);
			this->crearTallerToolStripMenuItem->Text = L"Mantenimiento Taller";
			this->crearTallerToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::crearTallerToolStripMenuItem_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(309, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1484, 37);
			this->panel2->TabIndex = 2;
			// 
			// frmLayout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1793, 741);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmLayout";
			this->Text = L"Inicio";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &frmLayout::frmLayout_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
/*<<<<<<< HEAD*/
	/*frmTasks^ tareasVentana = gcnew frmTasks();
	tareasVentana->MdiParent = this;
	tareasVentana->Show();
}*/
//private: System::Void meetingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void talleresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void notificacionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void yourCalendarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void frmLayout_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataComponentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ClickPerfil(System::Object^ sender, System::EventArgs^ e);
private: System::Void crearTallerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
