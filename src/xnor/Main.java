import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            int b = sc.nextInt();
            nums[i] = b;
        }
        int eor = 0;
        for (int i = 0; i < n; i++) {
            eor ^= nums[i];
        }
        System.out.println(eor);
        int rightOne = eor & (~eor + 1);
        System.out.println(rightOne);
        int eor1 = 0;
        for (int cur : nums) {
            if ((cur & rightOne) != 0) {
                System.out.println(cur);
                eor1 ^= cur;
            }
        }
        eor ^= eor1;
        if (eor > eor1) {
            System.out.print(eor1 + " " + eor);
        } else {
            System.out.print(eor + " " + eor1);
        }

    }
}