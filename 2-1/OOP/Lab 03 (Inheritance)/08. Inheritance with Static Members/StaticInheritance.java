class Parent {
    static String staticVar = "Parent Static Variable";

    static void staticMethod() {
        System.out.println("Static method in Parent");
    }
}

class Child extends Parent {
    static String staticVar = "Child Static Variable";

    static void staticMethod() {
        System.out.println("Static method in Child");
    }
}

public class StaticInheritance {
    public static void main(String[] args) {
        System.out.println(Parent.staticVar);
        Parent.staticMethod();

        System.out.println(Child.staticVar);
        Child.staticMethod();

        System.out.println("Access via Parent reference to Child object:");
        Parent ref = new Child();
        System.out.println(ref.staticVar);     
        ref.staticMethod();           
    }
}
