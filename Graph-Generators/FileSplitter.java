import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;

public class FileSplitter {
    public static void main(String[] args) throws IOException {
        if (args.length != 2) {
            System.err.println("Usage: java FileSplitter filename number_of_files");
            System.exit(1);
        }
        
        String filename = args[0];
    
        // if there is not extension, the following will have size 1
        String[] tokens = filename.split("\\.(?=[^\\.]+$)");
        
        int splits = 0;
        try {
            splits = Integer.parseInt(args[1]);
        } catch (NumberFormatException e) {
            System.err.println("Argument " + args[1] + " must be an integer.");
            System.err.println("Usage: java FileSplitter filename number_of_files");
            System.exit(1);
        }
        
        int lines = 0;
        
        try {
           lines = number_of_lines(filename);
        } catch (IOException e) {
            System.err.println("The existence of file + " + filename + " is questionable.");
            System.err.println("Usage: java FileSplitter filename number_of_files");
            System.exit(1);
        }
        

        int k = lines / splits;
        int m = lines % splits;
        BufferedReader br = new BufferedReader(new FileReader(filename));

        try {
            for (int i = 0; i < splits; i++) {
                // open file
                PrintWriter writer = new PrintWriter(outfile(tokens,i + 1), "UTF-8");
                
                int bound = (i + 1) * k + min(i + 1, m) - (i * k + min(i, m));
                for (int j = 0; j < bound; j++) {
                    String line = br.readLine();
                    writer.println(line);
                }
                writer.close();
            }
        } catch (IOException e) {
            System.err.println("An IOException hit the fan.");
            System.err.println("Usage: java FileSplitter filename number_of_files");
        } finally {
            if (br != null)
                br.close();
        }
    }

    private static String outfile(String[] tokens, int n) {
        if (tokens.length == 2) {
            return tokens[0] + "_" + n + "." + tokens[1];
        } else {
            return tokens[0] + "_" + n;
        }
    }

    
    private static int min(int x, int y) {
        if (x < y)
            return x;
        return y;
    }

    
    private static int number_of_lines(String filename)
        throws IOException {
        int count = 0;
        BufferedReader br = new BufferedReader(new FileReader(filename));
        try {
            while (br.readLine() != null)
                count++;
        } finally {
            if (br != null)
                br.close();
        }
        return count;
    }
}
