import java.util.LinkedList;

class MyHashMap {

    private static class Pair {
        int key, value;
        Pair(int key, int value) {
            this.key = key;
            this.value = value;
        }
    }

    private final int size = 1000;
    private LinkedList<Pair>[] buckets;

    public MyHashMap() {
        buckets = new LinkedList[size];
        for (int i = 0; i < size; i++) {
            buckets[i] = new LinkedList<>();
        }
    }

    private int hash(int key) {
        return key % size;
    }

    public void put(int key, int value) {
        LinkedList<Pair> bucket = buckets[hash(key)];
        for (Pair p : bucket) {
            if (p.key == key) {
                p.value = value;
                return;
            }
        }
        bucket.add(new Pair(key, value));
    }

    public int get(int key) {
        for (Pair p : buckets[hash(key)]) {
            if (p.key == key) return p.value;
        }
        return -1;
    }

    public void remove(int key) {
        buckets[hash(key)].removeIf(p -> p.key == key);
    }
}
