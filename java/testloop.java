
public class testloop {
    public static void main(String[] args) {
        forLoop();
        whileLoop();
        doWhileLoop();
    }
        public static void forLoop() {
            for (int i = 0; i < 5; i++) {
                System.out.println("The value of i is: " + i);
            }
        }
        public static void whileLoop() {
            int j = 0;
            while (j < 5) {
                System.out.println("The value of j is: " + j);
                j++;
            }
        }
        public static void doWhileLoop() {
            int k = 0;
            do {
                System.out.println("The value of k is: " + k);
                k++;
            } while (k < 5);
        }
}
