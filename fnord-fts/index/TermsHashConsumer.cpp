/////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2009-2014 Alan Wright. All rights reserved.
// Distributable under the terms of either the Apache License (Version 2.0)
// or the GNU Lesser General Public License.
/////////////////////////////////////////////////////////////////////////////

#include "fnord-fts/index//LuceneInc.h"
#include "fnord-fts/index/TermsHashConsumer.h"

namespace Lucene {

TermsHashConsumer::~TermsHashConsumer() {
}

void TermsHashConsumer::setFieldInfos(const FieldInfosPtr& fieldInfos) {
    this->fieldInfos = fieldInfos;
}

}
