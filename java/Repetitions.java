import java.util.Scanner;

public class Repetitions {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String st = scanner.nextLine();
        int maxCount = 0;
        int currentCount = 0;
        char currentChar = 'D';
        
        for (int i = 0; i < st.length(); i++) {
            if (st.charAt(i) != currentChar) {
                maxCount = Math.max(maxCount, currentCount);
                currentCount = 0;
            } 
            currentChar = st.charAt(i);
            currentCount ++;
        }
        maxCount = Math.max(maxCount, currentCount);
        System.out.println(maxCount);
        scanner.close();

    }
}
