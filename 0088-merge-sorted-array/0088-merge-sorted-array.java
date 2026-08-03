import java.util.Arrays;
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] num3= new int[m+n];
        for(int i=0;i<m;i++){
            num3[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            num3[m+i]=nums2[i];
        }
        Arrays.sort(num3);
         for (int i = 0; i < m + n; i++) {
            nums1[i] = num3[i];
    }
}}