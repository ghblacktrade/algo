class RandomizedSet {
    constructor() {
        this.valToIndex = new Map();
        this.nums = [];
    }

    insert(val) {
        if (this.valToIndex.has(val)) {
            return false;
        }

        this.nums.push(val);
        this.valToIndex.set(val, this.nums.length - 1);

        return true;
    }


    printContents() {
        console.log("valToIndex: ");
        for (const [key, value] of this.valToIndex.entries()) {
            console.log(`{${key}: ${value}}`);
        }

        console.log("nums: ", this.nums.join(" "));
    }
}

const randomSet = new RandomizedSet();

randomSet.insert(1);
randomSet.printContents();

randomSet.insert(2);
randomSet.printContents();

randomSet.insert(3);
randomSet.printContents();
