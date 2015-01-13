/////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2009-2014 Alan Wright. All rights reserved.
// Distributable under the terms of either the Apache License (Version 2.0)
// or the GNU Lesser General Public License.
/////////////////////////////////////////////////////////////////////////////

#ifndef LUCENEHEADERS_H
#define LUCENEHEADERS_H

#include "fnord-fts/Lucene.h"

// Include most common files: analysis
#include "fnord-fts/analysis/standard/StandardAnalyzer.h"
#include "fnord-fts/analysis/standard/StandardFilter.h"
#include "fnord-fts/analysis/standard/StandardTokenizer.h"
#include "fnord-fts/analysis/KeywordAnalyzer.h"
#include "fnord-fts/analysis/KeywordTokenizer.h"
#include "fnord-fts/analysis/LowerCaseFilter.h"
#include "fnord-fts/analysis/LowerCaseTokenizer.h"
#include "fnord-fts/analysis/PerFieldAnalyzerWrapper.h"
#include "fnord-fts/analysis/PorterStemFilter.h"
#include "fnord-fts/analysis/SimpleAnalyzer.h"
#include "fnord-fts/analysis/StopAnalyzer.h"
#include "fnord-fts/analysis/StopFilter.h"
#include "fnord-fts/analysis/Token.h"
#include "fnord-fts/analysis/TokenFilter.h"
#include "fnord-fts/analysis/WhitespaceAnalyzer.h"
#include "fnord-fts/analysis/WhitespaceTokenizer.h"

// Include most common files: document
#include "fnord-fts/document/DateField.h"
#include "fnord-fts/document/DateTools.h"
#include "fnord-fts/document/Document.h"
#include "fnord-fts/document/Field.h"
#include "fnord-fts/document/NumberTools.h"
#include "fnord-fts/document/NumericField.h"

// Include most common files: index
#include "fnord-fts/index/IndexCommit.h"
#include "fnord-fts/index/IndexDeletionPolicy.h"
#include "fnord-fts/index/IndexReader.h"
#include "fnord-fts/index/IndexWriter.h"
#include "fnord-fts/index/KeepOnlyLastCommitDeletionPolicy.h"
#include "fnord-fts/index/LogByteSizeMergePolicy.h"
#include "fnord-fts/index/LogDocMergePolicy.h"
#include "fnord-fts/index/LogMergePolicy.h"
#include "fnord-fts/index/MergeScheduler.h"
#include "fnord-fts/index/MultiReader.h"
#include "fnord-fts/index/ParallelReader.h"
#include "fnord-fts/index/Term.h"
#include "fnord-fts/index/TermDocs.h"
#include "fnord-fts/index/TermEnum.h"

// Include most common files: queryparser
#include "fnord-fts/queryparser/MultiFieldQueryParser.h"
#include "fnord-fts/queryparser/QueryParseError.h"
#include "fnord-fts/queryparser/QueryParser.h"

// Include most common files: search
#include "fnord-fts/search/BooleanClause.h"
#include "fnord-fts/search/BooleanQuery.h"
#include "fnord-fts/search/DocIdSet.h"
#include "fnord-fts/search/DocIdSetIterator.h"
#include "fnord-fts/search/Explanation.h"
#include "fnord-fts/search/IndexSearcher.h"
#include "fnord-fts/search/MatchAllDocsQuery.h"
#include "fnord-fts/search/MultiPhraseQuery.h"
#include "fnord-fts/search/MultiSearcher.h"
#include "fnord-fts/search/MultiTermQuery.h"
#include "fnord-fts/search/NumericRangeFilter.h"
#include "fnord-fts/search/NumericRangeQuery.h"
#include "fnord-fts/search/ParallelMultiSearcher.h"
#include "fnord-fts/search/PhraseQuery.h"
#include "fnord-fts/search/PrefixFilter.h"
#include "fnord-fts/search/PrefixQuery.h"
#include "fnord-fts/search/ScoreDoc.h"
#include "fnord-fts/search/Scorer.h"
#include "fnord-fts/search/Searcher.h"
#include "fnord-fts/search/Sort.h"
#include "fnord-fts/search/TermQuery.h"
#include "fnord-fts/search/TermRangeFilter.h"
#include "fnord-fts/search/TermRangeQuery.h"
#include "fnord-fts/search/TopDocs.h"
#include "fnord-fts/search/TopDocsCollector.h"
#include "fnord-fts/search/TopFieldCollector.h"
#include "fnord-fts/search/TopScoreDocCollector.h"
#include "fnord-fts/search/Weight.h"
#include "fnord-fts/search/WildcardQuery.h"
#include "fnord-fts/search/spans/SpanFirstQuery.h"
#include "fnord-fts/search/spans/SpanNearQuery.h"
#include "fnord-fts/search/spans/SpanNotQuery.h"
#include "fnord-fts/search/spans/SpanOrQuery.h"
#include "fnord-fts/search/spans/SpanQuery.h"

// Include most common files: store
#include "fnord-fts/store/FSDirectory.h"
#include "fnord-fts/store/MMapDirectory.h"
#include "fnord-fts/store/RAMDirectory.h"
#include "fnord-fts/store/RAMFile.h"
#include "fnord-fts/store/RAMInputStream.h"
#include "fnord-fts/store/RAMOutputStream.h"
#include "fnord-fts/store/SimpleFSDirectory.h"

// Include most common files: util
#include "fnord-fts/util/MiscUtils.h"
#include "fnord-fts/util/StringUtils.h"
#include "fnord-fts/util/BufferedReader.h"
#include "fnord-fts/util/DocIdBitSet.h"
#include "fnord-fts/util/FileReader.h"
#include "fnord-fts/util/InfoStream.h"
#include "fnord-fts/util/LuceneThread.h"
#include "fnord-fts/util/OpenBitSet.h"
#include "fnord-fts/util/OpenBitSetDISI.h"
#include "fnord-fts/util/OpenBitSetIterator.h"
#include "fnord-fts/util/StringReader.h"
#include "fnord-fts/util/ThreadPool.h"

#endif
