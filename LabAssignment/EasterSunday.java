package LabAssignment;
public class EasterSunday{
    public int year;

    
    public void setYear(int year) {
        this.year = year;
    }

    int day,month;

    public String getMonth() {
    int y = year;
    int a = y%19;
    int b = y/100;
    int c = y%100;
    int d = b/4;
    int e = b%4;
    int g = (8*b+13)/25;
    int h = (19*a+b-d-g+15)%30;
    int j = c/4;
    int k = c%4;
    int m = (a+11*h)/319;
    int r = (2*e+2*j-k-h+m+32)%7;
    int n = (h-m+r+90)/25;
        if(n==1){
            return "January ";
        }else if(n==2){
            return "February ";
        }else if(n==3){
            return "March ";
        }else if(n==4){
            return "April ";
        }else if(n==5){
            return "May ";
        }else if(n==6){
            return "June ";
        }else if(n==7){
            return "July ";
        }else if(n==8){
            return "August ";
        }else if(n==9){
            return "August ";
        }else if(n==10){
            return "October ";
        }else if(n==11){
            return "November ";
        }else if(n==12){
            return "December ";
        }else{
            return "Error ";
        }
    }


    public int getDay() {
    int y = year;
    int a = y%19;
    int b = y/100;
    int c = y%100;
    int d = b/4;
    int e = b%4;
    int g = (8*b+13)/25;
    int h = (19*a+b-d-g+15)%30;
    int j = c/4;
    int k = c%4;
    int m = (a+11*h)/319;
    int r = (2*e+2*j-k-h+m+32)%7;
    int n = (h-m+r+90)/25;
    int p =(h-m+r+n+19)%32;
        day=p;
        return day;
    }

    
}