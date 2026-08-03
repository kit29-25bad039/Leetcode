import java.util.Arrays;
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m=nums1.length;
        int n=nums2.length;
        int[] num3 = new int[m + n];
        for(int i=0;i<m;i++){
            num3[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            num3[m+i]=nums2[i];
        }
        Arrays.sort(num3);
        int a=num3.length;
        if(a%2!=0){
            return num3[a/2];
        }else{
            return (num3[a / 2 - 1] + num3[a / 2]) / 2.0;
        }
    }
}