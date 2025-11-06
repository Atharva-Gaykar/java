

import java.util.*;

class JAVA_CORE1 {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);

        int[] nums = new int[5];
        int sum = 0, max = Integer.MIN_VALUE, min = Integer.MAX_VALUE;

        // Input loop
        for (int i = 0; i < 5; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            nums[i] = sc.nextInt();
            sum += nums[i];
            if (nums[i] > max)
                max = nums[i];
            if (nums[i] < min)
                min = nums[i];
        }

        double average = sum / 5.0;

        System.out.println("\nYou entered: " + Arrays.toString(nums));
        System.out.println("Sum = " + sum);
        System.out.println("Average = " + average);
        System.out.println("Maximum = " + max);
        System.out.println("Minimum = " + min);

        // Day switch
        System.out.print("\nEnter a number (1-7) for day of the week: ");
        int numDay = sc.nextInt();

        switch (numDay) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid day number. Please enter between 1 and 7.");
        }

        sc.close();
    }
}