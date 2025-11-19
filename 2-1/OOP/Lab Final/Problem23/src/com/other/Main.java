
package com.other;

/**
 *
 * @author shihab
 *
 */
import com.example.Employee;
public class Main {
    public static void main(String[] args){
        Employee e = new Employee(30);
        e.show();
        Manager m = new Manager(40);
        m.show();
    }
}
