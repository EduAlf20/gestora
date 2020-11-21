#include "Antony.h"

int date_process::get_index_day(String^ day_name)
{
    int index_day;

    if (day_name->Equals("Sunday")) {
        index_day = 0;
    }
    else if (day_name->Equals("Monday")) {
        index_day = 1;
    }
    else if (day_name->Equals("Tuesday")) {
        index_day = 2;
    }
    else if (day_name->Equals("Wednesday")) {
        index_day = 3;
    }
    else if (day_name->Equals("Thursday")) {
        index_day = 4;
    }
    else if (day_name->Equals("Friday")) {
        index_day = 5;
    }
    else {
        index_day = 6;
    }

    return index_day;
}

String^ date_process::get_name_month_spanish(int month_index)
{
    String^ month;

    if (month_index == 1) {
        month = "Enero";
    }
    else if (month_index == 2) {
        month = "Febrero";
    }
    else if (month_index == 3) {
        month = "Marzo";
    }
    else if (month_index == 4) {
        month = "Abril";
    }
    else if (month_index == 5) {
        month = "Mayo";
    }
    else if (month_index == 6) {
        month = "Junio";
    }
    else if (month_index == 7) {
        month = "Julio";
    }
    else if (month_index == 8) {
        month = "Agosto";
    }
    else if (month_index == 9) {
        month = "Septiembre";
    }
    else if (month_index == 10) {
        month = "Octubre";
    }
    else if (month_index == 11) {
        month = "Noviembre";
    }
    else {
        month = "Diciembre";
    }

    return month;
}


