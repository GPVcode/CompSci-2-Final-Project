#ifndef CREDITCARDDEBT_H
#define CREDITCARDDEBT_H

#include "Debt.h"

class CreditCardDebt : public Debt {
public:
    CreditCardDebt(double principalInput, double rateInput);

    double calculateMinimumPayment() const;
    double calculateInterest() const override;

    // Override to return interest rate directly for sorting purposes
    double getInterestRate() const { return interestRate; }
};

#endif