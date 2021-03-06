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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/ContentModerationDetection.h>
#include <aws/rekognition/model/Warning.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API GetContentModerationResult
  {
  public:
    GetContentModerationResult();
    GetContentModerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetContentModerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the content moderation job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the content moderation job.</p>
     */
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The current status of the content moderation job.</p>
     */
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the content moderation job.</p>
     */
    inline GetContentModerationResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the content moderation job.</p>
     */
    inline GetContentModerationResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline const VideoMetadata& GetVideoMetadata() const{ return m_videoMetadata; }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline void SetVideoMetadata(const VideoMetadata& value) { m_videoMetadata = value; }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline void SetVideoMetadata(VideoMetadata&& value) { m_videoMetadata = std::move(value); }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline GetContentModerationResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline GetContentModerationResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}


    /**
     * <p>The detected moderation labels and the time(s) they were detected.</p>
     */
    inline const Aws::Vector<ContentModerationDetection>& GetModerationLabels() const{ return m_moderationLabels; }

    /**
     * <p>The detected moderation labels and the time(s) they were detected.</p>
     */
    inline void SetModerationLabels(const Aws::Vector<ContentModerationDetection>& value) { m_moderationLabels = value; }

    /**
     * <p>The detected moderation labels and the time(s) they were detected.</p>
     */
    inline void SetModerationLabels(Aws::Vector<ContentModerationDetection>&& value) { m_moderationLabels = std::move(value); }

    /**
     * <p>The detected moderation labels and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& WithModerationLabels(const Aws::Vector<ContentModerationDetection>& value) { SetModerationLabels(value); return *this;}

    /**
     * <p>The detected moderation labels and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& WithModerationLabels(Aws::Vector<ContentModerationDetection>&& value) { SetModerationLabels(std::move(value)); return *this;}

    /**
     * <p>The detected moderation labels and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& AddModerationLabels(const ContentModerationDetection& value) { m_moderationLabels.push_back(value); return *this; }

    /**
     * <p>The detected moderation labels and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& AddModerationLabels(ContentModerationDetection&& value) { m_moderationLabels.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * moderation labels. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * moderation labels. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * moderation labels. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * moderation labels. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetBillableDurationSeconds() const{ return m_billableDurationSeconds; }

    
    inline void SetBillableDurationSeconds(int value) { m_billableDurationSeconds = value; }

    
    inline GetContentModerationResult& WithBillableDurationSeconds(int value) { SetBillableDurationSeconds(value); return *this;}


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCode.assign(value); }

    
    inline GetContentModerationResult& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline GetContentModerationResult& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline GetContentModerationResult& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    
    inline GetContentModerationResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    
    inline GetContentModerationResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    
    inline GetContentModerationResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    
    inline GetContentModerationResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }

  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::Vector<ContentModerationDetection> m_moderationLabels;

    Aws::String m_nextToken;

    int m_billableDurationSeconds;

    Aws::String m_errorCode;

    Aws::Vector<Warning> m_warnings;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
