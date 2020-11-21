#include "SignForm.h"

System::Void appgrpucpView::SignForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (ofdSelectImage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        MyPhoto->Image = Image::FromFile(ofdSelectImage->FileName);
        
    }
}
