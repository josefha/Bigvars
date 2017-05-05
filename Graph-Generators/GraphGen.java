import java.util.Set;
import java.util.HashSet;
import java.util.Random;

public class GraphGen {
    public static void main(String[] args) {
        int n = 1;
        int k = 1;

        if (args.length != 2) {
            System.err.println("Usage: java GraphGen number_of_nodes min_number_of_friends");
            System.exit(1);
        }
        
        try {
            n = Integer.parseInt(args[0]);
            k = Integer.parseInt(args[1]);
        } catch (NumberFormatException e) {
            System.err.println("Arguments must be an integer s");
            System.err.println("Usage: java GraphGen number_of_nodes min_number_of_friends");
            System.exit(1);
        }

        int[] nodes = new int[2 * n * k];
        Random rand = new Random();
        int count = 0;
       
        // set up intial k nodes in ring
        if (k > 1) {
            for (int i = 0; i < k; i++) {
                nodes[count++] = i;
                nodes[count++] = (i + 1) % k;
                out(i,(i + 1) % k);
            }
        } else {
            nodes[count++] = 0;
        }
        
        for (int i = k; i < n; i++) {
            Set<Integer> others = new HashSet<Integer>();
            for (int j = 0; j < k; j++) {
                others.add(nodes[rand.nextInt(count)]);
            }
            
            for (int other : others) {
                nodes[count++] = i;
                nodes[count++] = other;
                // only keep new edges
                out(i, other);
            }
        }
    }
    
    public static void out(int i, int j) {
        System.out.println("(" + i + "," + j +")");
    }
}
