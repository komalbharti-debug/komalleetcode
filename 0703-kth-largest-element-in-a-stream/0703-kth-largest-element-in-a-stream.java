class KthLargest {
    List<Integer>arr=new ArrayList<>();
    int k;

    public KthLargest(int k, int[] nums) {
        for(int i:nums)
        arr.add(i);
        this.k=k;
    }
    
    public int add(int val) {
        arr.add(val);
        Collections.sort(arr);
        return arr.get(arr.size()-k);
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */