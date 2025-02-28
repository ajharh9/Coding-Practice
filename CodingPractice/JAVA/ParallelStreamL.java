package JAVA;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.stream.Stream;

public class ParallelStreamL {
    public static void main(String[] args) {
        int size = 10_000;
        List<Integer> nums = new ArrayList<>(1000);

        Random ran =new Random();

        // System.out.println(ran.nextInt(100));

        for(int i=0;i<size;i++){
            nums.add(ran.nextInt(100));
        }

        // System.out.println(nums);
        int sum = nums.stream()
                        .map(n -> n*2)
                        .reduce(0,(c,e)->c+e);
        System.out.println(sum);

        int sum2 = nums.stream()
                    .map(n -> n*2)
                    .mapToInt(i -> i)
                    .sum();
        System.out.println(sum2);
        
        int sum3 = nums.parallelStream()
                    .map(n -> n*2)
                    .mapToInt(i -> i)
                    .sum();
        System.out.println(sum3);
    }
}
