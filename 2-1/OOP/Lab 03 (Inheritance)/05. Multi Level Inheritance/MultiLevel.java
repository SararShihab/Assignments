class animal{
    String a = "Animal";
    void an(){
        System.out.println(a);
    }
}

class mammal extends animal{
    String b = "Mammal";
    void mam(){
        System.out.println(b);
    }
}

class dog extends mammal{
    String c = "Dog";
    void d(){
        System.out.println(c);
    }
}

public class MultiLevel {
    public static void main(String[] args){
        dog Dog = new dog();
        Dog.an();
        Dog.mam();
        Dog.d();
    }
}
