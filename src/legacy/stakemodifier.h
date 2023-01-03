// Copyright (c) 2011-2013 The PPCoin developers
// Copyright (c) 2013-2014 The NovaCoin Developers
// Copyright (c) 2014-2018 The BlackCoin Developers
//Copyright (c) 2015-2022 The PIVX developers
//Copyright (c) 2022 The Owlcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Owlcoin_LEGACY_MODIFIER_H
#define Owlcoin_LEGACY_MODIFIER_H

#include "chain.h"
#include "stakeinput.h"

// Old Modifier - Only for IBD
bool GetOldStakeModifier(CStakeInput* stake, uint64_t& nStakeModifier);
bool ComputeNextStakeModifier(const CBlockIndex* pindexPrev, uint64_t& nStakeModifier, bool& fGeneratedStakeModifier);

#endif // Owlcoin_LEGACY_MODIFIER_H