class Counter {
    private static int count = 0; // private static member

    // Constructor increments count
    public Counter() {
        count++;
    }

    // Static method to increment count
    public static void increment() {
        count++;
    }

    // Static method to show current count
    public static void show() {
        System.out.println("Current count: " + count);
    }

    // Static method to get count
    public static int getCount() {
        return count;
    }
}

public class OOPS_JAVA2 {
    public static void main(String[] args) {
        Counter c1 = new Counter();
        new Counter();  // no unused variable warning

        // ✅ Proper way to call static methods
        Counter.increment();
        Counter.increment();

        Counter.show();
        System.out.println("Final count: " + Counter.getCount());
    }
}
