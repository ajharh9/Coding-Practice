package JAVA;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Optional;

public class OptionalL {
    public static void main(String[] args) {
        List<String> names = Arrays.asList("Azhar", "Shoaib", "Arzoo", "Abdul", "Yousuf");
        // Optional<String> name = names.stream()
        //                             .filter(n -> n.contains("o"))
        //                             .findFirst();
        // System.out.println(name.orElse("Not Found"));
        String name = names.stream()
                            .filter(n -> n.contains("o"))
                            .findFirst()
                            .orElse("not found");
        System.out.println(name);
    }
}
