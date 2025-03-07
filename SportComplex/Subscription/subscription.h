// Copyright 2025 Marina Usova

#ifndef SUBSCRIPTION_SUBSCRIPTION_H_
#define SUBSCRIPTION_SUBSCRIPTION_H_

enum SubscriptionType {
    Common,
    Daytime,
    VIP
};

class Subscription {
    SubscriptionType _type;
    //Date _purchase_date;
    //Date _expiration_date;
};

#endif  // SUBSCRIPTION_SUBSCRIPTION_H_
