#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPoolGlobals)
namespace System::Threading {
class ThreadPoolWorkQueue;
}
// Forward declare root types
namespace System::Threading {
class ThreadPoolGlobals;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadPoolGlobals);
// Type: System.Threading::ThreadPoolGlobals
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2730))
// CS Name: ::System.Threading::ThreadPoolGlobals*
class CORDL_TYPE ThreadPoolGlobals : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_processorCount(int32_t  value) ;

static inline int32_t getStaticF_processorCount() ;

static inline void setStaticF_vmTpInitialized(bool  value) ;

static inline bool getStaticF_vmTpInitialized() ;

static inline void setStaticF_enableWorkerTracking(bool  value) ;

static inline bool getStaticF_enableWorkerTracking() ;

static inline void setStaticF_workQueue(::System::Threading::ThreadPoolWorkQueue*  value) ;

static inline ::System::Threading::ThreadPoolWorkQueue* getStaticF_workQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolGlobals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadPoolGlobals(ThreadPoolGlobals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolGlobals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadPoolGlobals(ThreadPoolGlobals const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadPoolGlobals()  = default;
public:


// Fields

// Static field processorCount

// Static field vmTpInitialized

// Static field enableWorkerTracking

// Static field workQueue


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolGlobals, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::ThreadPoolGlobals);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolGlobals*, "System.Threading", "ThreadPoolGlobals");
