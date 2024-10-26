import java.util.Scanner;

public class casecheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character: ");
        char ch = sc.next().charAt(0);
        switch (ch) {
            case 'a':
                System.out.println("This is vowel a");
                break;
            case 'e':
                System.out.println("This is vowel e");
                break;
            case 'i':
                System.out.println("This is vowel i");
                break;
            case 'o':
                System.out.println("This is vowel o");
                break;
            case 'u':
                System.out.println("This is vowel u");
                break;
            default:
                System.out.println("Consonant");
        }
    }
}
