/*******************************************
 * SW Expert Academy 2056. 연월일 달력
 * D1
 * 21.2.2 try: 1
 *******************************************/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) throws Exception {
        //System.setIn(new FileInputStream("res/input.txt")); //import java.io.FileInputStream;

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int test_case = 1; test_case <= T; test_case++) {
            String input = sc.next(), ans = "-1";

            String year = input.substring(0, 4);
            String month = input.substring(4, 6);
            String day = input.substring(6);

            switch (month) {
                case "01":
                case "03":
                case "05":
                case "07":
                case "08":
                case "10":
                case "12":
                    if (Integer.parseInt(day) > 0 && Integer.parseInt(day) <= 31)
                    ans = year + '/' + month + '/' + day;
                    break;
                case "04":
                case "06":
                case "09":
                case "11":
                    if (Integer.parseInt(day) > 0 && Integer.parseInt(day) <= 30)
                    ans = year + '/' + month + '/' + day;
                    break;
                case "02":
                    if (Integer.parseInt(day) > 0 && Integer.parseInt(day) <= 28)
                    ans = year + '/' + month + '/' + day;
                    break;
                default:
                    break;
            }

            System.out.println("#" + test_case + ' ' + ans);
        }

        sc.close();
    }
}