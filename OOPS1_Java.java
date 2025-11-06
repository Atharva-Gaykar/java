

class Student {
    String name;
    int age;
    int grade;

    Student(String name,int age,int grade){
        this.name=name;
        this.age=age;
        this.grade=grade;
    }

     
    public void student(){
        System.out.println(name + " is studying.");
    }

    public void student(String surname){
        System.out.println(this.name + surname + " is studying.");
    }
}
 class Pen{

    String  type;
    String color;

    public void write(){
        System.out.println("Writing something");
    }

    public void printColor(){
        System.out.println(this.color);
    }       
}

public class OOPS1_Java {

    public static void main(String [] args){

        Pen pen1=new Pen();
        pen1.color="Blue";
        pen1.type="Gel Pen";

        pen1.printColor();


        Student student1=new Student("atharva",20,12);
        student1.name="Atharva";
        student1.age=20;
        student1.grade=12;

        student1.student();
    }


}
