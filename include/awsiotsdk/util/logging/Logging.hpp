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
 * @file Logging.hpp
 * @brief
 *
 */

#pragma once

#include <memory>
#include "awsiotsdk/util/Core_EXPORTS.hpp"

namespace awsiotsdk {
    namespace util {
        namespace Logging {
            class LogSystemInterface;

            // Standard interface

            /**
             * Call this at the beginning of your program, prior to any AWS calls.
             */
            AWS_API_EXPORT void InitializeAWSLogging(const std::shared_ptr<LogSystemInterface> &logSystem);

            /**
             * Call this at the exit point of your program, after all calls have finished.
             */
            AWS_API_EXPORT void ShutdownAWSLogging(void);

            /**
             * Get currently configured log system instance.
             */
            AWS_API_EXPORT LogSystemInterface *GetLogSystem();

            // Testing interface

            /**
             * Replaces the current logger with a new one, while pushing the old one onto a 1-deep stack; primarily for testing
             */
            AWS_API_EXPORT void PushLogger(const std::shared_ptr<LogSystemInterface> &logSystem);

            /**
             * Pops the logger off the logger stack and replaces the current logger with it.  Disables logging if the top logger is actually a nullptr
             */
            AWS_API_EXPORT void PopLogger();

        } // namespace Logging
    } // namespace util
} // namespace awsiotsdk
