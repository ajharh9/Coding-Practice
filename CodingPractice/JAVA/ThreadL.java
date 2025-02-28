package JAVA;
class Counter{
    int count = 0;

    public synchronized void increment(){
        count++;
    }
}
// class A extends Thread {
//     public void run(){
//         for(int i=0;i<100;i++){
//             // System.out.println("Hi");
//             // try {
//             //     Thread.sleep(10);
//             // } catch (InterruptedException e) {
//             //     // TODO Auto-generated catch block
//             //     e.printStackTrace();
//             // }
//         }
//     }
// }
// class B extends Thread{
//     public void run(){
//         for(int i=0;i<100;i++){
//             // System.out.println("Hello");
//             // try {
//             //     Thread.sleep(10);
//             // } catch (InterruptedException e) {
//             //     // TODO Auto-generated catch block
//             //     e.printStackTrace();
//             // }
//         }
//     } 
// }

// class A implements Runnable {
//     public void run(){
//         for(int i=0;i<100;i++){
//             System.out.println("Hi");
//             try {
//                 Thread.sleep(10);
//             } catch (InterruptedException e) {
//                 // TODO Auto-generated catch block
//                 e.printStackTrace();
//             }
//         }
//     }
// }
// class B implements Runnable{
//     public void run(){
//         for(int i=0;i<100;i++){
//             System.out.println("Hello");
//             try {
//                 Thread.sleep(10);
//             } catch (InterruptedException e) {
//                 // TODO Auto-generated catch block
//                 e.printStackTrace();
//             }
//         }
//     }  
// }
public class ThreadL {
    public static void main(String[] args) throws InterruptedException {
        
        // A obj1 = new A();
        // B obj2 = new B();
        // obj1.start();
        // obj2.start();
        // obj1.setPriority(Thread.MIN_PRIORITY);
        // System.out.println(obj1.getPriority());
        //obj1.dis();
        //obj2.dis();
        // obj1.dis();
        
        // Runnable obj1 = new A();
        // Runnable obj2 = new B();
        // Thread t1 = new Thread(obj1);
        // Thread t2 = new Thread(obj2);
        // t1.start();
        // t2.start();

        // Runnable obj1 = new Runnable() {
        //     public void run(){
        //         for(int i=0;i<100;i++){
        //             System.out.println("Hi");
        //             try {
        //                 Thread.sleep(10);
        //             } catch (InterruptedException e) {
        //                 // TODO Auto-generated catch block
        //                 e.printStackTrace();
        //             }
        //         }
        //     } 
        // };
        // Runnable obj2 = new Runnable() {
        //     public void run(){
        //         for(int i=0;i<100;i++){
        //             System.out.println("Hello");
        //             try {
        //                 Thread.sleep(10);
        //             } catch (InterruptedException e) {
        //                 // TODO Auto-generated catch block
        //                 e.printStackTrace();
        //             }
        //         }
        //     }
        // };
        // Thread t1 =new Thread(obj1);
        // Thread t2 =new Thread(obj2);
        // t1.start();
        // t2.start();
    
        Counter c = new Counter();
        Runnable obj1 = ()->{
                for(int i=0;i<1000;i++){
                    c.increment();
                }
            };
        Runnable obj2 = ()->{
                for(int i=0;i<1000;i++){
                    c.increment();
                }
            };
        Thread t1 =new Thread(obj1);
        Thread t2 =new Thread(obj2);
        System.out. println(t1.getState());
        t1.start();
        t2.start();
        System.out.println(t1.getState());
        t1.join();
        t2.join();
        System.out.println(t1.getState());
        System.out.println(c.count);
        System.out.println(t1.getState());
    }    
}
