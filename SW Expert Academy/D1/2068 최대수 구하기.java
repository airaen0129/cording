/*******************************************
 * SW Expert Academy 2068: 최대수 구하기
 * D1
 * 21.1.31 try: 1
 *******************************************/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) throws Exception {
        //System.setIn(new FileInputStream("res/input.txt"));

        Scanner sc = new Scanner(System.in);
        int T;
        T=sc.nextInt();

        for(int test_case = 1; test_case <= T; test_case++) {
            int num, max = 0;

            for (int i = 0; i < 10; ++i) {
                num = sc.nextInt();

                if (num > max) max = num;
            }

            System.out.println("#" + test_case + ' ' + max);
        }

        sc.close();
    }
}