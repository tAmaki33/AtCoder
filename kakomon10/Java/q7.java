import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = Integer.parseInt(sc.next());
    List<Integer> d = new ArrayList<Integer>(N);
    for (int i = 0; i < N; i++) {
      d.add(Integer.parseInt(sc.next()));
    }
    Collections.sort(d);
    Collections.reverse(d);
    int minwid = 101, ans = 0;
    for (int w : d) {
      if (w < minwid) {
        ans++;
        minwid = Math.min(w, minwid);
      }
    }
    System.out.println(ans);
    sc.close();
  }
}