class Book{
    int id, price;
    String name, author;
    void display(){
        System.out.println("Id: "+id);
        System.out.println("Name: "+ name);
        System.out.println("Author: "+author);
        System.out.println("Price: "+price);
    }
}
public class ShowDetails {
    public static void main(String[] args){
        Book b1 = new Book();
        Book b2 = new Book();
        b1.id = 101;
        b1.name = "Paradoxical Sajid";
        b1.author = "Arif Azad";
        b1.price = 350;
        b2.id=102;
        b2.name="The Hundreds";
        b2.author="Michael H. Heart";
        b2.price=500;
        b1.display();
        b2.display();
    }
}
