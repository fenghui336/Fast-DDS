/*
 * Copyright 2019, Proyectos y Sistemas de Mantenimiento SL (eProsima).
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
 *
*/

#ifndef EPROSIMA_DDS_TOPIC_DETAIL_TOPIC_HPP_
#define EPROSIMA_DDS_TOPIC_DETAIL_TOPIC_HPP_

/**
 * @file
 */

// Implementation

#include <dds/core/ref_traits.hpp>
#include <dds/core/status/Status.hpp>
#include <dds/core/status/State.hpp>
#include <dds/domain/DomainParticipant.hpp>
#include <dds/topic/qos/TopicQos.hpp>
#include <dds/topic/AnyTopic.hpp>

#include <fastdds/dds/topic/Topic.hpp>

/**
 * @cond
 * Ignore this file in the API
 */

namespace dds {
namespace topic {

template<typename T>
class TopicListener;

namespace detail {

using Topic = eprosima::fastdds::dds::Topic;

} //namespace detail
} //namespace topic
} //namespace dds

/** @endcond */

#endif //EPROSIMA_DDS_TOPIC_DETAIL_TOPIC_HPP_