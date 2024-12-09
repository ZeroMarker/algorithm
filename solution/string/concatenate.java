import java.util.ArrayList;
import java.util.List;

public class concatenate {
    /**
     * Concatenate two string one by one character,
     * if str1.len < str2.len, repeat str2 character.
     * @param args
     */
    public static void main(String[] args) {
        // Input
        var str1 = "sbogfngow";
        var str2 = "snogoe";

        // Program
        List<Character> result = new ArrayList<>();
        List<Character> s1 = new ArrayList<>();
        for(char ch : str1.toCharArray()) {
            s1.add(ch);
        }
        List<Character> s2 = new ArrayList<>();
        for(char ch : str2.toCharArray()) {
            s2.add(ch);
        }
        while(s1.size() > s2.size()) {
            int size = s2.size();
            for(int i = 0; i < size; i++) {
                s2.add(s2.get(i));
            }
        }
        for(int i = 0; i < str1.length(); i++) {
            result.add(s1.get(i));
            result.add(s2.get(i));
        }
        StringBuilder sb = new StringBuilder();

        // Appends characters one by one
        for (Character ch : result) {
            sb.append(ch);
        }

        // convert in string
        String string = sb.toString();

        // Output
        System.out.println(string);
    }
}
