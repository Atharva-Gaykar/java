// Base class
class Animal {
    public void walk() {
        System.out.println("Animal walks in its own way.");
    }

    public void eat() {
        System.out.println("Animal eats food.");
    }

    public void sound() {
        System.out.println("Animal makes a sound.");
    }
}

// Subclass Horse
class Horse extends Animal {
    @Override
    public void walk() {
        System.out.println("Horse walks on 4 legs.");
    }

    @Override
    public void eat() {
        System.out.println("Horse eats grass.");
    }

    @Override
    public void sound() {
        System.out.println("Horse neighs.");
    }
}

// Subclass Chicken
class Chicken extends Animal {
    @Override
    public void walk() {
        System.out.println("Chicken walks on 2 legs.");
    }

    @Override
    public void eat() {
        System.out.println("Chicken pecks grains.");
    }

    @Override
    public void sound() {
        System.out.println("Chicken clucks.");
    }
}

// Extra subclass Dog
class Dog extends Animal {
    @Override
    public void walk() {
        System.out.println("Dog walks on 4 legs.");
    }

    @Override
    public void eat() {
        System.out.println("Dog eats meat.");
    }

    @Override
    public void sound() {
        System.out.println("Dog barks.");
    }
}

// Main class
public class Inheritance {
    public static void main(String[] args) {
        // Polymorphism: base reference, derived object
        Animal a1 = new Horse();
        Animal a2 = new Chicken();
        Animal a3 = new Dog();

        // Store in array for looping
        Animal[] animals = {a1, a2, a3};

        for (Animal a : animals) {
            a.walk();
            a.eat();
            a.sound();
            System.out.println("-------------------");
        }
    }
}
