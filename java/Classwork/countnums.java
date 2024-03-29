package Classwork;
import java.util.Scanner;

public class countnums {
    // public static void main(String[] args) {
    //     int[] nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //     int count = 0;

    //     for (int num : nums) {
    //         if (num % 2 == 0) {
    //             count++;
    //         }
    //     }

    //     System.out.println("Count of even numbers: " + count);
    // }
    // get the count for user input
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        int count = 0;

        System.out.println("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        for (int num : nums) {
            if (num % 2 == 0) {
                count++;
            }
        }

        System.out.println("Count of even numbers: " + count);
    }
}