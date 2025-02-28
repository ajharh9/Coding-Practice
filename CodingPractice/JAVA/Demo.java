package JAVA;
import java.util.regex.Pattern;
class A
{
    public void show(){
        System.out.println("In A show");
    } 

    static class B
    {
        public void show1(){
            System.out.println("In B show");
        }
    }
}

interface C {
    void  show();
}

enum Status{
    Running,Pending,Success,Failed
}
public class Demo { 
    public static void main(String[] args) {
        A obj = new A();
        obj.show();  
        A.B obj1 = new A.B();
        obj1.show1();

        C obj2 = () -> System.out.println("In new C show");
        obj2.show();
        Status s = Status.Running;
        System.out.println(s.ordinal());

        String str = "He is a very very good boy, isn't he?";

        String[] nstr = str.split("[^A-Za-z]+");
        for(int i=0;i<nstr.length;i++){
            System.out.println(nstr[i]);
        }

//         ([A-Z])(.+)
//          [AZ[a-z](a-z)
//          batcatpat(nat
        // Pattern p = Pattern.compile("([A-Z])(.+)");
        Pattern p;
        try {
            p = Pattern.compile("batcatpat(nat");
        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        // System.out.println(p);
    }

}