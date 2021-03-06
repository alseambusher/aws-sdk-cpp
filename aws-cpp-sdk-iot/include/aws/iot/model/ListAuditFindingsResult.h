﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditFinding.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListAuditFindingsResult
  {
  public:
    ListAuditFindingsResult();
    ListAuditFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAuditFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline const Aws::Vector<AuditFinding>& GetFindings() const{ return m_findings; }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline void SetFindings(const Aws::Vector<AuditFinding>& value) { m_findings = value; }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline void SetFindings(Aws::Vector<AuditFinding>&& value) { m_findings = std::move(value); }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& WithFindings(const Aws::Vector<AuditFinding>& value) { SetFindings(value); return *this;}

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& WithFindings(Aws::Vector<AuditFinding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& AddFindings(const AuditFinding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& AddFindings(AuditFinding&& value) { m_findings.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuditFinding> m_findings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
