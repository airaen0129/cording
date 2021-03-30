/*******************************************
 * 백준 1463: 1로 만들기 - 메모이제이션으로 N을 1로 바꾸기 위해 주어진 연산을 몇 번 사용하는지 계산하는 문제
 * 단계별로 풀어보기: 동적 계획법1
 * 알고리즘 분류: 다이나믹 프로그래밍
 * 21.3.30 try: 1
 *******************************************/
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        //System.setIn(new FileInputStream("res/input.txt")); //import java.io.FileInputStream;

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] dp = new int[N + 1];

        for (int i = 2; i <= N; ++i) {
            int min = 1000001;
            if (i % 3 == 0 && dp[i / 3] < min) min = dp[i / 3];
            if (i % 2 == 0 && dp[i / 2] < min) min = dp[i / 2];
            if (dp[i - 1] < min) min = dp[i - 1];
            dp[i] = min + 1;
        }

        System.out.println(dp[N]);

        sc.close();
    }
}
