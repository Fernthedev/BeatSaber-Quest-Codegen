#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestQueue)
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
class WebRequestQueue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::WebRequestQueue);
// Type: UnityEngine.ResourceManagement::WebRequestQueue
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13960))
// CS Name: ::UnityEngine.ResourceManagement::WebRequestQueue*
class CORDL_TYPE WebRequestQueue : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_MaxRequest(int32_t  value) ;

static inline int32_t getStaticF_s_MaxRequest() ;

static inline void setStaticF_s_QueuedOperations(::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>*  value) ;

static inline ::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* getStaticF_s_QueuedOperations() ;

static inline void setStaticF_s_ActiveRequests(::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* getStaticF_s_ActiveRequests() ;

/// @brief Method SetMaxConcurrentRequests addr 0x2bcefa0 size 0xc4 virtual false final false
static inline void SetMaxConcurrentRequests(int32_t  maxRequests) ;

/// @brief Method QueueRequest addr 0x2bcf064 size 0x344 virtual false final false
static inline ::UnityEngine::ResourceManagement::WebRequestQueueOperation* QueueRequest(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method WaitForRequestToBeActive addr 0x2bcf608 size 0x48c virtual false final false
static inline void WaitForRequestToBeActive(::UnityEngine::ResourceManagement::WebRequestQueueOperation*  request, int32_t  millisecondsTimeout) ;

/// @brief Method OnWebAsyncOpComplete addr 0x2bcf3a8 size 0x260 virtual false final false
static inline void OnWebAsyncOpComplete(::UnityEngine::AsyncOperation*  operation) ;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestQueue(WebRequestQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestQueue(WebRequestQueue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebRequestQueue()  = default;
public:


// Fields

// Static field s_MaxRequest

// Static field s_QueuedOperations

// Static field s_ActiveRequests


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::WebRequestQueue, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement
NEED_NO_BOX(::UnityEngine::ResourceManagement::WebRequestQueue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::WebRequestQueue*, "UnityEngine.ResourceManagement", "WebRequestQueue");
