import java.util.Scanner;

public class MissingNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            int a = scanner.nextInt();
            sum += (long) a;
        }

        long totalSum = (long) n * (n + 1) / 2;
        System.out.println(totalSum - sum);
        scanner.close();
    }
}
