import java.util.Scanner;

public class stringexample {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = in.next();
        String personalised = mygreet(name);
        System.out.println(personalised);
    }

    static String mygreet(String name ) {
        String message = "Hello " + name + "!";
        return message;
    }
}