import java.util.List;

public interface Printable {
    public void print();

    public static void name(List <Printable>... printables) {
        System.out.println(printables.length);
    }

}
