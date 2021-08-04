class Product {
    int count, total;
    double afterChange;

public: Product(int count, int total) {
        this->count = count;
        this->total = total;
        setNewReviewChange();
    }

private: void setNewReviewChange() {
        double curPer = (double) count / total;
        double newPer = (double) (count + 1) / (total + 1);
        this->afterChange = newPer - curPer;
    }

private : double overAllContribution(int count) {
        return (afterChange / count);
    }

};
struct cmp {
    Product
    ((p1, p2) -> Double.compare(p2.afterChange, p1.afterChange))
}
int five_star_reviews(std::vector<std::vector<int>> productRatings, int  ratingsThreshold) {
    auto comp = [](Product a, Product b) {
        if (a.afterChange > b.afterChange) {
            return a.afterChange;
        }
        return b.afterChange;
    };

    priority_queue<Product, vector<Product>, comp>pq(comp);
    priority_queue<Product*> *pq = new PriorityQueue<Product*>([&] (p1, p2)
    {
        Double::compare(p2::afterChange, p1::afterChange);
    });

    double current = 0;
    for (auto product : productRatings) {
        pq.push(new Product(product[0], product[1]));
        current += (double) product[0] / product[1];
    }
    int change = 0, n = productRatings.size();
    current /= n;
    while (current * 100 < ratingsThreshold) {
        Product poll = pq.top();
        pq.pop();
        current += poll.overAllContribution(n);
        change++;
        pq.push(new Product(poll.count + 1, poll.total + 1));
    }
    return change;
}









static class Product {
    int count, total;
    double afterChange;

    public Product(int count, int total) {
        this.count = count;
        this.total = total;
        setNewReviewChange();
    }

    private void setNewReviewChange() {
        double curPer = (double) count / total;
        double newPer = (double) (count + 1) / (total + 1);
        this.afterChange = newPer - curPer;
    }

    private double overAllContribution(int count) {
        return (afterChange / count);
    }
}

int fiveStarReviews(vector<int>& productRatings, int ratingsThreshold) {
    priority_queue<Product, vector<Product>>pq;
    double current = 0;
    for (auto product : productRatings) {
        pq.push(new Product(product[0], product[1]));
        current += (double) product[0] / product[1];
    }
    int change = 0, n = productRatings.size();
    current /= n;
    while (current * 100 < ratingsThreshold) {
        Product poll = pq.top();
        pq.pop();
        current += poll.overAllContribution(n);
        change++;
        pq.push(new Product(poll.count + 1, poll.total + 1));
    }
    return change;
}

//java
public static int fiveStarReviews(int[][] productRatings, int ratingsThreshold) {
    PriorityQueue<Product> pq = new PriorityQueue<>((p1, p2) -> Double.compare(p2.afterChange, p1.afterChange));
    double current = 0;
    for (int[] product : productRatings) {
        pq.add(new Product(product[0], product[1]));
        current += (double) product[0] / product[1];
    }
    int change = 0, n = productRatings.length;
    current /= n;
    while (current * 100 < ratingsThreshold) {
        Product poll = pq.poll();
        current += poll.overAllContribution(n);
        change++;
        pq.add(new Product(poll.count + 1, poll.total + 1));
    }
    return change;
}

static class Product {
    int count, total;
    double afterChange;

    public Product(int count, int total) {
        this.count = count;
        this.total = total;
        setNewReviewChange();
    }

    private void setNewReviewChange() {
        double curPer = (double) count / total;
        double newPer = (double) (count + 1) / (total + 1);
        this.afterChange = newPer - curPer;
    }

    private double overAllContribution(int count) {
        return (afterChange / count);
    }
}