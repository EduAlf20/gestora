#include "ManagerComponentForm.h"
#include "frmComponent.h"
System::Void appgrpucpView::ManagerComponentForm::toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	frmComponent^ CrearComponentVentana = gcnew frmComponent();
	CrearComponentVentana->Show();
}

System::Void appgrpucpView::ManagerComponentForm::toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	frmComponent^ EditarComponentVentana = gcnew frmComponent();
	EditarComponentVentana->Show();
}
