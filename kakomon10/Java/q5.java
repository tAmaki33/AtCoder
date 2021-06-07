import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N, A, B;
    N = Integer.parseInt(sc.next());
    A = Integer.parseInt(sc.next());
    B = Integer.parseInt(sc.next());

    int ans = 0;
    for (int i = 1; i <= N; i++) {
      String nStr = String.valueOf(i);
      int sum = 0;
      for (int k = 0; k < nStr.length(); k++) {
        sum += nStr.charAt(k) - '0';
      }
      if (sum >= A && sum <= B) {
        ans += i;
      }
    }

    System.out.println(ans);
    sc.close();
  }
}