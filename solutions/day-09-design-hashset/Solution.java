import java.util.LinkedList;

class MyHashSet {

    private final int size = 1000;
    private LinkedList<Integer>[] buckets;

    public MyHashSet() {
        buckets = new LinkedList[size];
        for (int i = 0; i < size; i++) {
            buckets[i] = new LinkedList<>();
        }
    }

    private int hash(int key) {
        return key % size;
    }

    public void add(int key) {
        LinkedList<Integer> bucket = buckets[hash(key)];
        if (!bucket.contains(key)) {
            bucket.add(key);
        }
    }

    public void remove(int key) {
        buckets[hash(key)].remove((Integer) key);
    }

    public boolean contains(int key) {
        return buckets[hash(key)].contains(key);
    }
}
