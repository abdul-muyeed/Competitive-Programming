package LabAssignment;
import java.util.Scanner;

// PROBLEM NO. 1

public class TotalCost {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        CarInfo info = new CarInfo();
        System.out.println("Enter New Car Price:");
        info.setCarPrice(obj.nextDouble());
        info.setMiles(15000);
        info.setGasPrice(4);
        System.out.println("Enter Car Effiviency:");
        info.setEfficiency(obj.nextDouble());
        System.out.println("Enter Resale Price:");
        info.setResalePrice(obj.nextDouble());

        System.out.println(info.getTotalCost());



    }
    
}