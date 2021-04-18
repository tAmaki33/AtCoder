import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = Integer.parseInt(sc.next());
    List<Integer> A = new ArrayList<Integer>(N);
    for (int i = 0; i < N; i++) {
      A.add(Integer.parseInt(sc.next()));
    }
    int ans = 1000000001;
    Calc c = new Calc();
    for (int n : A) {
      ans = Math.min(c.div2Count(n), ans);
    }
    System.out.println(ans);
    sc.close();
  }
}

class Calc {
  public int div2Count(int n) {
    int c = 0;
    while (n % 2 == 0) {
      n /= 2;
      c++;
    }
    return c;
  }
}