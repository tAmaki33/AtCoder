import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String S = sc.nextLine();
    sc.close();
    String[] strList = { "dream", "dreamer", "erase", "eraser" };

    while (true) {
      boolean m = false;
      for (String str : strList) {
        if (S.endsWith(str)) {
          m = true;
          S = S.substring(0, S.length() - str.length());
          break;
        }
      }
      if (!m) {
        System.out.println("NO");
        break;
      }

      if (S.isEmpty()) {
        System.out.println("YES");
        break;
      }
    }
  }
}