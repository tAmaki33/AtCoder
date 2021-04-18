import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = Integer.parseInt(sc.next());
    List<Integer> t = new ArrayList<Integer>(N + 1);
    List<Integer> x = new ArrayList<Integer>(N + 1);
    List<Integer> y = new ArrayList<Integer>(N + 1);
    t.add(0);
    x.add(0);
    y.add(0);

    boolean can = true;
    for (int i = 0; i < N; i++) {
      t.add(Integer.parseInt(sc.next()));
      x.add(Integer.parseInt(sc.next()));
      y.add(Integer.parseInt(sc.next()));
    }
    sc.close();
    for (int i = 0; i < N; i++) {
      int dt = t.get(i + 1) - t.get(i);
      int dist = Math.abs(x.get(i + 1) - x.get(i)) + Math.abs(y.get(i + 1) - y.get(i));
      if (dt < dist) {
        can = false;
      }
      if (dist % 2 != dt % 2) {
        can = false;
      }
    }
    if (can) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}