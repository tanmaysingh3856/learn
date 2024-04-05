package Program;

public class swaping {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        //swap number
//
        swap(a, b);
        System.out.println("The value of a is: " + a);
        System.out.println("The value of b is: " + b);

        String name = "John";
        changeName(name);
        System.out.println("The name is: " + name);
    }
    static void changeName(String name) {
        name = "Doe";
    }

    static void swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
