#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(YieldAwaitable)
namespace System::Runtime::CompilerServices {
struct __YieldAwaitable__YieldAwaiter;
}
namespace System {
class Object;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading {
class SendOrPostCallback;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct YieldAwaitable;
}
namespace System::Runtime::CompilerServices {
struct __YieldAwaitable__YieldAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::YieldAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter);
// Type: ::YieldAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3409))
// CS Name: ::YieldAwaitable::YieldAwaiter
struct CORDL_TYPE __YieldAwaitable__YieldAwaiter : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

static inline void setStaticF_s_waitCallbackRunAction(::System::Threading::WaitCallback*  value) ;

static inline ::System::Threading::WaitCallback* getStaticF_s_waitCallbackRunAction() ;

static inline void setStaticF_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback*  value) ;

static inline ::System::Threading::SendOrPostCallback* getStaticF_s_sendOrPostCallbackRunAction() ;

/// @brief Method get_IsCompleted addr 0x24de710 size 0x8 virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x24de718 size 0x58 virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x24dea10 size 0x58 virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method QueueContinuation addr 0x24de770 size 0x2a0 virtual false final false
static inline void QueueContinuation(::System::Action*  continuation, bool  flowContext) ;

/// @brief Method RunAction addr 0x24dea68 size 0x6c virtual false final false
static inline void RunAction(::System::Object*  state) ;

/// @brief Method GetResult addr 0x24dead4 size 0x4 virtual false final false
inline void GetResult() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __YieldAwaitable__YieldAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __YieldAwaitable__YieldAwaiter()  = default;


// Fields

// Static field s_waitCallbackRunAction

// Static field s_sendOrPostCallbackRunAction


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter, 0x1>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::YieldAwaitable
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3410))
// CS Name: ::System.Runtime.CompilerServices::YieldAwaitable
struct CORDL_TYPE YieldAwaitable : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using YieldAwaiter = ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Method GetAwaiter addr 0x24de708 size 0x8 virtual false final false
inline ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter GetAwaiter() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit YieldAwaitable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 YieldAwaitable()  = default;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::YieldAwaitable, 0x1>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::YieldAwaitable, "System.Runtime.CompilerServices", "YieldAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
