import java.util.*;

class Main
{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = Integer.parseInt(sc.next());
    List<Integer> A = new ArrayList<Integer>(n);

    for(int i=0;i<n;i++) A.add(Integer.parseInt(sc.next()));

    int res = 0;
    for(int a : A) {
      int tmp = a - 10;

      if(tmp > 0) res+=tmp;
    }
    System.out.println(res);
  }
}