import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String str = sc.nextLine();
    int ans = 0;
    if (str.charAt(0) == '1') {
      ans++;
    }

    if (str.charAt(1) == '1') {
      ans++;
    }

    if (str.charAt(2) == '1') {
      ans++;
    }

    System.out.println(ans);
    sc.close();
  }
}