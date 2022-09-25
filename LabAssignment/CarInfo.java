package LabAssignment;

public class CarInfo{
    private double carPrice, miles, gasPrice, efficiency, resalePrice;

    public void setCarPrice(double carPrice) {
        this.carPrice = carPrice;
    }
    public void setMiles(double miles) {
        this.miles = miles;
    }
    public void setGasPrice(double gasPrice) {
        this.gasPrice = gasPrice;
    }
    public void setEfficiency(double efficiency) {
        this.efficiency = efficiency;
    }
    public void setResalePrice(double resalePrice) {
        this.resalePrice = resalePrice;
    }

    
    public double getTotalCost() {
        double totalCost = carPrice + ((miles * gasPrice * 5)) / efficiency - resalePrice;
        return totalCost;
    }

}