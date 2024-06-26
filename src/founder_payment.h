/*
 * Copyright (c) 2020 The Gainprox developer
 * Distributed under the MIT software license, see the accompanying
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.
 * 
 * FounderPayment.h
 *
 *  Created on: Jun 24, 2018
 *      Author: Tri Nguyen
 */

#ifndef SRC_FOUNDER_PAYMENT_H_
#define SRC_FOUNDER_PAYMENT_H_
#include <string>
#include <amount.h>
#include <primitives/transaction.h>
#include <script/standard.h>
#include <limits.h>
using namespace std;

static const string DEFAULT_FOUNDER_ADDRESS = "GdfW1VGKpYUobhRMBFmxQS6on7JVSsqzsw";
struct FounderRewardStructure {
	int blockHeight;
	int rewardPercentage;
};

class FounderPayment {
    // Existing members...
    std::string newFounderAddress;
    int updateBlockHeight;
public:
    // Modify the constructor to accept the new address and update block height
    FounderPayment(std::vector<FounderRewardStructure> rewardStructures = {}, int startBlock = 0, const std::string &address = DEFAULT_FOUNDER_ADDRESS, const std::string &newAddress = "", int updateHeight = INT_MAX) {
        this->founderAddress = address;
        this->newFounderAddress = newAddress;
        this->startBlock = startBlock;
        this->rewardStructures = rewardStructures;
        this->updateBlockHeight = updateHeight;
    }
private:
	string founderAddress;
	int startBlock;
	vector<FounderRewardStructure> rewardStructures;
};



#endif /* SRC_FOUNDER_PAYMENT_H_ */
