package LabAssignment;

import java.util.Scanner;

//    PROBLEM NO. 2

public class FindDate {
    public static void main(String[] args) {
        EasterSunday date = new EasterSunday();
        Scanner in =new Scanner(System.in);

        date.setYear(in.nextInt());

        System.out.println("The Easter falls on " + date.getMonth() + date.getDay());
    }
    
}
