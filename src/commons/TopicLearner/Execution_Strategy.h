/*******************************************************************************
    Copyright (c) 2011 Yahoo! Inc. All rights reserved.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License. See accompanying LICENSE file.

    The Initial Developer of the Original Code is Shravan Narayanamurthy.
******************************************************************************/
/*
 * Execution_Strategy.h
 *
 *
 *
 *  Created on: 23-Dec-2010
 *      
 */

#ifndef EXECUTION_STRATEGY_H_
#define EXECUTION_STRATEGY_H_

//!Interface for strategy objects
/**
 * Implement this interface to define
 * a strategy detailing what filters
 * are added to the pipeline and how
 * to run the pipeline
 */
class Execution_Strategy {
public:
    virtual void execute() = 0;
};

#endif /* EXECUTION_STRATEGY_H_ */
