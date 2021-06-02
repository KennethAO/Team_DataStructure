

static bool validateDate(int day, int month, int year){
    bool flag;
    if(year>=1900 && year<=2100){
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            if(month>=1 && month<=12){
                if(month==4 || month==6 || month==9 || month==11){
                    if(day>=1 && day<=30){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }else if(month == 2){
                    if(day>=1 && day<=29){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }else{
                    if(day>=1 && day<=31){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }
            }else{
                flag = false;
            }
        }
        else{
            if(month>=1 && month<=12){
                if(month==4 || month==6 || month==9 || month==11){
                    if(day>=1 && day<=30){
                        flag = true;
                    }else{
                        flag = false;
                    }

                }else if(month == 2){
                    if(day>=1 && day<=28){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }else{
                    if(day>=1 && day<=31){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }
            }else{
                flag = false;
            }
        }
    }else{
        flag = false;
    }

    return flag;
}


static int zeller(int day,int month,int year){
    int a = (14-month)/12;
	int y = year - a;
	int m = month +12 * a-2;
	int d = (day + y + y/4 - y/100 + y/400 + (31*m)/12)%7;
    return d;
}
