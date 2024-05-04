class Operation
{
private:
    int num;
public:
    Operation(int num);
    ~Operation();
    Operation& operator+=(const Operation &op);
    Operation& operator-=(const Operation &op);
    Operation& operator*=(const Operation &op);
    Operation& operator/=(const Operation &op);
    bool operator==(const Operation &op);
    void display();
};
