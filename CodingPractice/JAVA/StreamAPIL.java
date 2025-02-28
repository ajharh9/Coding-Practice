package JAVA;

import java.util.Arrays;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Predicate;
import java.util.stream.Stream;

public class StreamAPIL {
    public static <T> void main(String[] args) {
        List<Integer> nums = Arrays.asList(4,5,7,2,8,3);
        System.out.println(nums);

        // Consumer<Integer> con = new Consumer<Integer>() {
        //     public void accept(Integer n){
        //         System.out.println(n);
        //     }
        // };
        // Consumer<Integer> con = n -> System.out.println(n);

        // nums.forEach(con);
        // nums.forEach(n -> System.out.println(n));
        // Stream<Integer> s1 = nums.stream();
        // s1.forEach(n -> System.out.println(n));
        
        // Predicate<Integer> p = new Predicate<Integer>() {
            
        //     @Override
        //     public boolean test(Integer t) {
        //         return t%2==0;
        //     }
            
        // };
        
        // Stream<Integer> s2 = s1.filter(p);
        // Stream<Integer> s2 = s1.filter(n -> n%2 == 0);
        // s2.forEach(n -> System.out.println(n));
        // Stream<Integer> s3 = s2.map(n -> n*2);
        // s3.forEach(n -> System.out.println(n));
        
        // int sum = s3.reduce(0, (c,e)->c+e);
        // System.out.println("=========================");
        // System.out.println(sum);

        int sum =nums.stream()
            .filter(n -> n%2==0)
            .map(n -> n*2)
            .reduce(0,(c,e) -> c+e);
        System.out.println(sum);

        // int sum = 0;
        // for(int n: nums){
        //     if(n%2==0) 
        //         sum += n;
        // }
        // System.out.println(sum);


    }
}
