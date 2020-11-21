#include "CalendarForm.h"
using namespace System;
using namespace System::Windows::Forms;


System::Void appgrpucpView::CalendarForm::btnNextMonth_Click(System::Object^ sender, System::EventArgs^ e)
{
    fecha[1] += 1;
    if (fecha[1] == 13) {
        fecha[1] = 1;
        fecha[2] ++;
    }

    refresh_calendar();
}

System::Void appgrpucpView::CalendarForm::btnPreviousMonth_Click(System::Object^ sender, System::EventArgs^ e)
{
    fecha[1] += - 1 ;
    if (fecha[1] == 0) {
        fecha[1] = 12;
        fecha[2] += -1;
    }

    refresh_calendar();
}

System::Void appgrpucpView::CalendarForm::CalendarForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    array<String^>^ date_info = date_->Split('/');
    fecha->Add(Convert::ToInt16(date_info[0]));
    fecha->Add(Convert::ToInt16(date_info[1]));
    fecha->Add(Convert::ToInt16(date_info[2]->Substring(0,4)));

    refresh_calendar();
}

void appgrpucpView::CalendarForm::refresh_calendar()
{
    String^ month;
    int first_day_of_month;
    DateTime^ day_selected = DateTime(fecha[2], fecha[1], 1);
    String^ day_name = Convert::ToString(day_selected->DayOfWeek);
    int total_days = DateTime::DaysInMonth(fecha[2], fecha[1]);

    first_day_of_month = get_index_day(day_name);


    for (int i = 0; i < 42; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonHighlight;
    }

    for (int i = 0; i < first_day_of_month; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonFace;
    }

    for (int i = first_day_of_month + total_days; i < 42; i++) {
        flowLayoutPanel1->Controls[i]->BackColor = System::Drawing::SystemColors::ButtonFace;
    }

    month = get_name_month_spanish(fecha[1]);

    labelDate->Text = month + "," + fecha[2];
}

