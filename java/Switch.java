import java.util.Scanner;

public class Switch {
    // public static void main(String[] args) {
    //     Scanner in = new Scanner(System.in);
    //     String fruit = in.next();
    //     switch(fruit){
    //         case "Mango":
    //             System.out.println("King of fruits");
    //             break;
    //         case "Apple":
    //             System.out.println("A sweet red fruit");
    //             break;
    //         case "Banana":
    //             System.out.println("A yellow fruit");
    //             break;
    //         case "Grapes":
    //             System.out.println("Small fruit");
    //             break;
    //         default:
    //             System.out.println("Please enter a valid fruit");
    //     }
    //     //cleaner way to write the above code
    //     switch(fruit){
    //         case "Mango" -> System.out.println("King of fruits");
    //         case "Apple" -> System.out.println("A sweet red fruit");
    //         case "Banana" -> System.out.println("A yellow fruit");
    //         case "Grapes" -> System.out.println("Small fruit");
    //         default -> System.out.println("Please enter a valid fruit");
    //     }
    // }
    //NESTED SWITCH
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int empID = in.nextInt();
        String department = in.next();
        switch(empID){
            case 1:
                System.out.println("Employee ID 1");
                switch(department){
                    case "IT":
                        System.out.println("IT Department");
                        break;
                    case "Management":
                        System.out.println("Management Department");
                        break;
                    default:
                        System.out.println("No department");
                }
                break;
            case 2:
                System.out.println("Employee ID 2");
                switch(department){
                    case "IT":
                        System.out.println("IT Department");
                        break;
                    case "Management":
                        System.out.println("Management Department");
                        break;
                    default:
                        System.out.println("No department");
                }
                break;
            default:
                System.out.println("Invalid Employee ID");
        }
    }
}
