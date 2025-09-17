
class Vehicle {
    String brand;
    int wheels;

    Vehicle(String brand, int wheels) {
        this.brand = brand;
        this.wheels = wheels;
    }

    @Override
    public String toString() {
        return "Vehicle [Brand: " + brand + ", Wheels: " + wheels + "]";
    }
}

class Car extends Vehicle {
    String model;
    int doors;

    Car(String brand, int wheels, String model, int doors) {
        super(brand, wheels);
        this.model = model;
        this.doors = doors;
    }

    @Override
    public String toString() {
        return "Car [Brand: " + brand + ", Model: " + model + ", Wheels: " + wheels + ", Doors: " + doors + "]";
    }
}

public class Override_to_String {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle("Generic", 4);
        Car car = new Car("Toyota", 4, "Corolla", 4);

        System.out.println(vehicle);
        System.out.println(car);
    }
}
