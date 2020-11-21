#pragma once
#include "frmTasks.h"
#include "frmMeetings.h"
#include "frmTalleres.h"
namespace appgrpucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

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
	public:
		frmLayout(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ tasksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ meetingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ talleresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ notificacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dataComponentsToolStripMenuItem;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->perfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yourCalendarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tasksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meetingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->talleresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->notificacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataComponentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(209, 602);
			this->panel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->perfilToolStripMenuItem,
					this->yourCalendarToolStripMenuItem, this->tasksToolStripMenuItem, this->meetingsToolStripMenuItem, this->talleresToolStripMenuItem,
					this->notificacionesToolStripMenuItem, this->dataComponentsToolStripMenuItem
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip1->Location = System::Drawing::Point(0, 25);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(199, 543);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmLayout::menuStrip1_ItemClicked);
			// 
			// perfilToolStripMenuItem
			// 
			this->perfilToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->perfilToolStripMenuItem->Name = L"perfilToolStripMenuItem";
			this->perfilToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->perfilToolStripMenuItem->Text = L"Perfil";
			// 
			// yourCalendarToolStripMenuItem
			// 
			this->yourCalendarToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->yourCalendarToolStripMenuItem->Name = L"yourCalendarToolStripMenuItem";
			this->yourCalendarToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->yourCalendarToolStripMenuItem->Text = L"Your Calendar";
			// 
			// tasksToolStripMenuItem
			// 
			this->tasksToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->tasksToolStripMenuItem->Name = L"tasksToolStripMenuItem";
			this->tasksToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->tasksToolStripMenuItem->Text = L"Tasks";
			this->tasksToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::tasksToolStripMenuItem_Click);
			// 
			// meetingsToolStripMenuItem
			// 
			this->meetingsToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->meetingsToolStripMenuItem->Name = L"meetingsToolStripMenuItem";
			this->meetingsToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->meetingsToolStripMenuItem->Text = L"Meetings";
			this->meetingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::meetingsToolStripMenuItem_Click);
			// 
			// talleresToolStripMenuItem
			// 
			this->talleresToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->talleresToolStripMenuItem->Name = L"talleresToolStripMenuItem";
			this->talleresToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->talleresToolStripMenuItem->Text = L"Talleres";
			this->talleresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLayout::talleresToolStripMenuItem_Click);
			// 
			// notificacionesToolStripMenuItem
			// 
			this->notificacionesToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->notificacionesToolStripMenuItem->Name = L"notificacionesToolStripMenuItem";
			this->notificacionesToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->notificacionesToolStripMenuItem->Text = L"Notificaciones";
			// 
			// dataComponentsToolStripMenuItem
			// 
			this->dataComponentsToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->dataComponentsToolStripMenuItem->Name = L"dataComponentsToolStripMenuItem";
			this->dataComponentsToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->dataComponentsToolStripMenuItem->Text = L"Data Components";
			// 
			// frmLayout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1181, 602);
			this->Controls->Add(this->panel1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmLayout";
			this->Text = L"frmLayout";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
private: System::Void tasksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	frmTasks^ tareasVentana = gcnew frmTasks();
	tareasVentana->MdiParent = this;
	tareasVentana->Show();
}
private: System::Void meetingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMeetings^ meetingsVentana = gcnew frmMeetings();
	meetingsVentana->MdiParent = this;
	meetingsVentana->Show();
}
private: System::Void talleresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmTalleres^ talleresVentana = gcnew frmTalleres();
	talleresVentana->MdiParent = this;
	talleresVentana->Show();
}
};
}
