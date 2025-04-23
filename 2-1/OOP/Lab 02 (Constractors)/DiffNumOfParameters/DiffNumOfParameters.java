class Book{
    String title, author;
    int price;
    Book(){
        System.out.println("Constructor with no parameters:");
        System.out.println("\tNo value received.");
    }
    Book(String title, String author){
        System.out.println("Constructor with 2 parameters:");
        System.out.println("\tTitle: "+title+"\n\tAuthor: "+author);
    }
    Book(String title, String author, int price){
        System.out.println("Constructor with 2 parameters:");
        System.out.println("\tTitle: "+title+"\n\tAuthor: "+author+"\n\tPrice: "+price);
    }
}

public class DiffNumOfParameters {
    public static void main(String[] args){
        Book b1 = new Book();
        Book b2 = new Book("The Hundreds", "Michael H. Heart");
        Book b3 = new Book("Quaran at a Glance", "Mijanur Rahaman Azhari", 1590);
    }
}
