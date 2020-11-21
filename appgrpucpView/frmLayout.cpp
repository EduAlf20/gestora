#include "frmLayout.h"
#include "frmNotifications.h"
#include "CalendarForm.h"
#include "ManagerComponentForm.h"
#include "frmProfile.h"
/*
=======

>>>>>>> Antony*/

using namespace System;
using namespace System::Windows::Forms;
//agregar el espacio de nombres del Controller:
/*
[STAThread]

void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	appgrpucpView::frmLayout form;
	Application::Run(% form);
}*/
/*
<<<<<<< HEAD
*/



System::Void appgrpucpView::frmLayout::notificacionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	frmNotifications^ notificationsVentana = gcnew frmNotifications();
	notificationsVentana->MdiParent = this;
	notificationsVentana->Show();
}



/*
System::Void appgrpucpView::frmLayout::tasksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	frmTasks^ tareasVentana = gcnew frmTasks();
	tareasVentana->MdiParent = this;
	tareasVentana->Show();
}*/

/*System::Void appgrpucpView::frmLayout::meetingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	frmMeetings^ meetingsVentana = gcnew frmMeetings();
	meetingsVentana->MdiParent = this;
	meetingsVentana->Show();
}*/

System::Void appgrpucpView::frmLayout::talleresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	frmTalleres^ talleresVentana = gcnew frmTalleres();
	talleresVentana->MdiParent = this;
	talleresVentana->Show();
}

System::Void appgrpucpView::frmLayout::yourCalendarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CalendarForm^ mycalendar = gcnew CalendarForm(date_);
	mycalendar->MdiParent = this;
	mycalendar->Show();
}

System::Void appgrpucpView::frmLayout::frmLayout_Load(System::Object^ sender, System::EventArgs^ e)
{
	date_= Convert::ToString(DateTime::Now.Date);
}

System::Void appgrpucpView::frmLayout::dataComponentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ManagerComponentForm^ ManagerComponentVentana = gcnew ManagerComponentForm();
	ManagerComponentVentana->MdiParent = this;
	ManagerComponentVentana->Show();
}

System::Void appgrpucpView::frmLayout::ClickPerfil(System::Object^ sender, System::EventArgs^ e)
{
	frmProfile^ ProfileVentana = gcnew frmProfile();
	ProfileVentana->MdiParent = this;
	ProfileVentana->Show();
}
