#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
CORDL_MODULE_EXPORT(CancellationCallbackInfo_WithSyncContext)
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace System::Threading {
class __CancellationCallbackInfo__WithSyncContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationCallbackInfo__WithSyncContext);
// Type: ::WithSyncContext
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2691))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2690))
// CS Name: ::CancellationCallbackInfo::WithSyncContext*
class CORDL_TYPE __CancellationCallbackInfo__WithSyncContext : public ::System::Threading::CancellationCallbackInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Threading::CancellationCallbackInfo)]{};

/// @brief Field TargetSyncContext offset 0x30
 __declspec(property(get=__get_TargetSyncContext, put=__set_TargetSyncContext)) ::System::Threading::SynchronizationContext*  TargetSyncContext;

constexpr void __set_TargetSyncContext(::System::Threading::SynchronizationContext*  value) ;

constexpr ::System::Threading::SynchronizationContext* __get_TargetSyncContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> __get_TargetSyncContext() const;

static inline ::System::Threading::__CancellationCallbackInfo__WithSyncContext* New_ctor(::System::Action_1<::System::Object*>*  callback, ::System::Object*  stateForCallback, ::System::Threading::ExecutionContext*  targetExecutionContext, ::System::Threading::CancellationTokenSource*  cancellationTokenSource, ::System::Threading::SynchronizationContext*  targetSyncContext) ;

/// @brief Method .ctor addr 0x261304c size 0x50 virtual false final false
inline void _ctor(::System::Action_1<::System::Object*>*  callback, ::System::Object*  stateForCallback, ::System::Threading::ExecutionContext*  targetExecutionContext, ::System::Threading::CancellationTokenSource*  cancellationTokenSource, ::System::Threading::SynchronizationContext*  targetSyncContext) ;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationCallbackInfo__WithSyncContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CancellationCallbackInfo__WithSyncContext(__CancellationCallbackInfo__WithSyncContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationCallbackInfo__WithSyncContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CancellationCallbackInfo__WithSyncContext(__CancellationCallbackInfo__WithSyncContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CancellationCallbackInfo__WithSyncContext()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationCallbackInfo__WithSyncContext, 0x38>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::__CancellationCallbackInfo__WithSyncContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationCallbackInfo__WithSyncContext*, "System.Threading", "CancellationCallbackInfo/WithSyncContext");
