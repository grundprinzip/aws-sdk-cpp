/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/GetIdentityPoliciesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityPoliciesResult::GetIdentityPoliciesResult()
{
}

GetIdentityPoliciesResult::GetIdentityPoliciesResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIdentityPoliciesResult& GetIdentityPoliciesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("GetIdentityPoliciesResult");

  if(!resultNode.IsNull())
  {
    XmlNode policiesNode = resultNode.FirstChild("Policies");
    policiesNode = policiesNode.FirstChild("entry");
    while(!policiesNode.IsNull())
    {
      XmlNode keyNode = policiesNode.FirstChild("key");
      XmlNode valueNode = policiesNode.FirstChild("value");
      m_policies[StringUtils::Trim(keyNode.GetText().c_str())] =
          StringUtils::Trim(valueNode.GetText().c_str());
      policiesNode = policiesNode.NextNode("entry");
    }

  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}