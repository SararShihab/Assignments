class animal {
    String a = "Animal";

    void an() {
        System.out.println("This is an animal.");
    }
}

class mammal extends animal {
    String b = "Mammal";

    void mam() {
        System.out.println("This is a mammal.");
    }
}

class dog extends mammal {
    String c = "Dog";

    // Override the an() method from the animal class
    @Override
    void an() {
        super.an(); // Call the parent class method
        System.out.println("This is a dog.");
    }

    void d() {
        System.out.println("This is a dog-specific method.");
    }
}

public class SuperKeyword {
    public static void main(String[] args) {
        dog Dog = new dog();

        // Call overridden method
        Dog.an();

        // Call methods from mammal and dog classes
        Dog.mam();
        Dog.d();
    }
}
