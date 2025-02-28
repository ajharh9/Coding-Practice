package JAVA;

import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.TreeSet;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Hashtable;
import java.util.Iterator;

class Student implements Comparable<Student>{
    String name;
    int age;



    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return "Student [name=" + name + ", age=" + age + "]";
    }

    @Override
    public int compareTo(Student o) {
        return this.age > o.age?1:-1;
    }
    
    
}

public class CollectionL {
    public static void main(String[] args) {
        // Array
        // int [] arr = new int[55];
        // System.out.println(arr.length);
        // System.out.println(arr[49]);

        // Collection<Integer> nums = new ArrayList<Integer>();
        
        // LIST - ArrayList
        // List<Integer> nums = new ArrayList<Integer>();
        // nums.add(5);
        // nums.add(6);
        // nums.add(7);
        // nums.add(8);
        // nums.add(9);
        // System.out.println("Size : "+nums.size());
        // for(int n:nums){
        //     System.out.println(n);
        // }

        // SET - HashSet
        // Set<Integer> set = new HashSet<Integer>();
        // Set<Integer> set = new TreeSet<Integer>();
        // Collection<Integer> set = new TreeSet<Integer>();
        // set.add(11);
        // set.add(2);
        // set.add(32);
        // set.add(15);
        // set.add(52);
        // set.add(45);
        // set.add(48);
        // set.add(4);
        // System.out.println(set);
        // System.out.println("Size : "+set.size());
        // for(int nums: set){
        //     System.out.println(nums);
        // }

        // Iterator<Integer> it= set.iterator();
        // System.out.println(it.next());
        // while(it.hasNext()){
        //     System.out.println(it.next());
        // }

        // Map<String,Integer> mp = new HashMap<>();
        Map<String,Integer> mp = new Hashtable<>();
        mp.put("Azhar", 99);
        mp.put("Soaib", 100);
        mp.put("Arzoo", 101);
        mp.put("Abdul Rahman", 204);
        mp.put("Yousuf", 98);

        System.out.println(mp.get("Azhar"));
        System.out.println(mp.entrySet());
        for(Entry<String, Integer> s: mp.entrySet()){
            System.out.println(s.getKey());
        }

        // Comparator com = new Comparator<Integer>() {
        //     public int compare(Integer i, Integer j){
        //         return i%10>j%10? 1: -1;
        //     }
        // };
        Comparator<Integer> com = (Integer i, Integer j)->{
                return i%10>j%10? 1: -1;
            };
        List <Integer> nums = new ArrayList<>();
        nums.add(35);
        nums.add(23);
        nums.add(81);
        nums.add(12);
        nums.add(10);

        Collections.sort(nums, (i,j)->i%10>j%10?1:-1);
        // Collections.sort(nums,com);

        System.out.println(nums);
        
        List<Student> studs = new ArrayList<>();
        studs.add(new Student("Azhar", 27));
        studs.add(new Student("Abdul", 11));
        studs.add(new Student("Arzoo", 17));
        studs.add(new Student("Soaib", 25));
        studs.add(new Student("Yousuf", 3));
        
        // Comparator<Student> com1 = new Comparator<Student>() {
        //     public int compare(Student i, Student j){
        //         return i.age > j.age ? 1 : -1;
        //     }
        // };  
        // Collections.sort(studs,com1);
        // Collections.sort(studs,(Student i, Student j)->{
        //     return i.age > j.age ? 1: -1;
        // });
        // Collections.sort(studs,(Student i, Student j) -> i.age > j.age ? 1: -1);
        Collections.sort(studs);
        System.out.println(studs);
        
    }
}
