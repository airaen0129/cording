/*******************************************
 * 백준 14681: 사분면 고르기 - 점이 어느 사분면에 있는지 알아내는 문제
 * 단계별로 풀어보기: if문
 * 21.3.27 try: 1
 *******************************************/
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        //System.setIn(new FileInputStream("res/input.txt")); //import java.io.FileInputStream;

        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();

        if (x > 0 && y > 0) System.out.println(1);
        else if (x < 0 && y > 0) System.out.println(2);
        else if (x < 0 && y < 0) System.out.println(3);
        else System.out.println(4);

        sc.close();
    }
}
