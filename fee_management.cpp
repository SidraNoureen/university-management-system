int calculateRemainingBalance(int outstanding, int payment)
{
    return outstanding - payment;
}

int recordPayment(int outstanding, int payment)
{
    return calculateRemainingBalance(outstanding, payment);
}
