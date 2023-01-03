//Copyright (c) 2019 The PIVX developers
//Copyright (c) 2022 The Owlcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Owlcoin_PAIRRESULT_H
#define Owlcoin_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //Owlcoin_PAIRRESULT_H
