import java.util.*;

class JAVA_CORE2 {
    public static void main(String[] args) {
        System.out.println("Try programiz.pro");

        int[] arr = {3, 1, 4, 5}; 
        int[] nums = new int[2];

        nums[0] = 1; 

        String name = "Atharva ";
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Input your surname");
        String surname=sc.nextLine();
        
        name=name+surname;
        System.out.println(name);

        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));

        System.out.println("The minimum between 5 and 6:");
        System.out.println(Math.min(5, 6));
        
        
        System.out.println("Input Your Age");
        
        float age=sc.nextFloat();
        boolean isAdult=false;
        
        if(age>=18){
            
            System.out.println("Eligible ");
            isAdult=true;
        }
        
        System.out.println("Input any random integer");
        
        int num=sc.nextInt();
        System.out.println(num);

        if(isAdult){
            System.out.println("You can vote");
        }
        else{
            System.out.println("You cannot vote");
        }
        sc.close();
             
        
        
    }


}