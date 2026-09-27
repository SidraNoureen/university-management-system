#include <cassert>
#include <iostream>

int recordPayment(int outstanding, int payment);

void testRecordPayment()
{
    assert(recordPayment(50000, 10000) == 40000);
}

int main()
{
    testRecordPayment();
    std::cout << "All tests passed!\n";
    return 0;
}
