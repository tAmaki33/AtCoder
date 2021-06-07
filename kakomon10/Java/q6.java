import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = Integer.parseInt(sc.next());
    List<Integer> a = new ArrayList<Integer>(N);
    for (int i = 0; i < N; i++) {
      a.add(Integer.parseInt(sc.next()));
    }
    int AliceScore = 0;
    int BobScore = 0;
    Collections.sort(a);
    Collections.reverse(a);
    for (int i = 0; i < N; i++) {
      if (i % 2 == 0) {
        AliceScore += a.get(i);
      } else {
        BobScore += a.get(i);
      }
    }
    System.out.println(AliceScore - BobScore);
    sc.close();
  }
}
