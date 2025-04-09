import java.util.Scanner;

class Student {
    String name;
    int rollNumber;
    String address;
    String contactNo;

    public void setInfo(String name, int rollNumber, String address, String contactNo) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.address = address;
        this.contactNo = contactNo;
    }

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Address: " + address);
        System.out.println("Contact No: " + contactNo);
    }
}

public class StudentDetails {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Roll Number: ");
        int rollNumber = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter Address: ");
        String address = sc.nextLine();

        System.out.print("Enter Contact No: ");
        String contactNo = sc.nextLine();

        Student student = new Student();
        student.setInfo(name, rollNumber, address, contactNo);
        student.displayInfo();

        sc.close();
    }
}
