package JAVA;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Student{
    private String name;
    private int age;

    public Student(){

    }

    public Student(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String toString() {
        return "Student [name=" + name + ", age=" + age + "]";
    }

    

    
}

public class MethodClassRef {
    public static void main(String[] args) {
        List<String> names = Arrays.asList("Azhar", "Shoaib", "Arzoo", "Abdul", "Yousuf");
        // List<String> uname = names.stream()
        //                         .map(n -> n.toUpperCase())
        //                         .toList();
        // List<String> uname = names.stream()
        //                         .map(String::toUpperCase)
        //                         .toList();

        // System.out.println(uname);
        // uname.forEach(name -> System.out.println(name));
        // uname.forEach(System.out::println);

        List<Student> students = new ArrayList<>();

        for(String name: names){
            students.add(new Student(name));
        }
        // students = names.stream().map(name -> new Student(name)).toList();
        // students = names.stream().map(Student::new).toList();
        // System.out.println(students);
    }
}
