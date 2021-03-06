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

#include <aws/mediaconvert/model/Mp4FreeSpaceBox.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Mp4FreeSpaceBoxMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        Mp4FreeSpaceBox GetMp4FreeSpaceBoxForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return Mp4FreeSpaceBox::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return Mp4FreeSpaceBox::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp4FreeSpaceBox>(hashCode);
          }

          return Mp4FreeSpaceBox::NOT_SET;
        }

        Aws::String GetNameForMp4FreeSpaceBox(Mp4FreeSpaceBox enumValue)
        {
          switch(enumValue)
          {
          case Mp4FreeSpaceBox::INCLUDE:
            return "INCLUDE";
          case Mp4FreeSpaceBox::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Mp4FreeSpaceBoxMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
