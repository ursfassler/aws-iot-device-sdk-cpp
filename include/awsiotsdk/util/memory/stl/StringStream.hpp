/*
 * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file StringStream.hpp
 * @brief
 *
 */

#pragma once

#include "awsiotsdk/util/Core_EXPORTS.hpp"

#include <sstream>

namespace awsiotsdk {
    namespace util {
        typedef std::basic_stringstream<char, std::char_traits<char> > StringStream;
        typedef std::basic_istringstream<char, std::char_traits<char> > IStringStream;
        typedef std::basic_ostringstream<char, std::char_traits<char> > OStringStream;
        typedef std::basic_stringbuf<char, std::char_traits<char> > StringBuf;
    } // namespace util
} // namespace awsiotsdk
