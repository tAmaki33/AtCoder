import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    long N = Integer.parseInt(sc.next());
    long Y = Integer.parseInt(sc.next());

    String ans = "-1 -1 -1";
    for (long x = 0; x <= N; x++) {
      for (long y = 0; y <= N - x; y++) {
        if (10000 * x + 5000 * y + 1000 * (N - x - y) == Y) {
          ans = x + " " + y + " " + (N - x - y);
        }
      }
    }
    System.out.println(ans);
    sc.close();
  }
}