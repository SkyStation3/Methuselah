// Copyright (c) 2017 The STRAKS developers
// Copyright (c) 2017-2018 The Methuselah Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "zmqabstractnotifier.h"
#include "util.h"


CZMQAbstractNotifier::~CZMQAbstractNotifier()
{
    assert(!psocket);
}

bool CZMQAbstractNotifier::NotifyBlock(const CBlockIndex * /*CBlockIndex*/)
{
    return true;
}

bool CZMQAbstractNotifier::NotifyTransaction(const CTransaction &/*transaction*/)
{
    return true;
}
