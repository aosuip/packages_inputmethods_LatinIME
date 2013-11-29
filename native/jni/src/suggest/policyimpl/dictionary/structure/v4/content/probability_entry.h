/*
 * Copyright (C) 2013, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LATINIME_PROBABILITY_ENTRY_H
#define LATINIME_PROBABILITY_ENTRY_H

#include "defines.h"
#include "suggest/policyimpl/dictionary/structure/v4/ver4_dict_constants.h"

namespace latinime {

class ProbabilityEntry {
 public:
    ProbabilityEntry()
            : mFlags(0), mProbability(NOT_A_PROBABILITY),
              mTimestamp(Ver4DictConstants::NOT_A_TIME_STAMP), mLevel(0), mCount(0) {}

    void setProbability(const int flags, const int probability) {
        mFlags = flags;
        mProbability = probability;
        mTimestamp = Ver4DictConstants::NOT_A_TIME_STAMP;
        mLevel = 0;
        mCount = 0;
    }

    void setProbabilityWithHistricalInfo(const int flags, const int probability,
            const int timestamp, const int level, const int count) {
        mFlags = flags;
        mProbability = probability;
        mTimestamp = timestamp;
        mLevel = level;
        mCount = count;
    }

    int getFlags() const {
        return mFlags;
    }

    int getProbability() const {
        return mProbability;
    }

    int getTimeStamp() const {
        return mTimestamp;
    }

    int getLevel() const {
        return mLevel;
    }

    int getCount() const {
        return mCount;
    }

 private:
    DISALLOW_COPY_AND_ASSIGN(ProbabilityEntry);

    int mFlags;
    int mProbability;
    int mTimestamp;
    int mLevel;
    int mCount;
};
} // namespace latinime
#endif /* LATINIME_PROBABILITY_ENTRY_H */
