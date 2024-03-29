package Program;

import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number: ");
        double x = sc.nextDouble();
        System.out.println("Enter the second number: ");
        double y = sc.nextDouble();
        System.out.println("Enter the operator (+, -, *, /): ");
        char operator = sc.next().charAt(0);
        double result;

        switch (operator) {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
                result = x / y;
                break;
            default:
                System.out.println("Invalid operator");
                return;
        }

        System.out.println("The result is " + result);
    }
}
