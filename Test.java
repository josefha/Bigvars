import java.util.*;

public class Test {

    public static void main(String[] args) {

        Hashtable table = new Hashtable();
        long startTime = System.currentTimeMillis();

        for(int i = 0; i < 1000000; i = i + 1) {
            table.put(i, new String("value"));
        }

        for(int i = 0; i < 1000000; i = i + 1) {
            Object s = table.get(i);
        }

        long endTime = System.currentTimeMillis();

        System.out.println("That took " + (endTime - startTime) + " milliseconds");
    }

}
