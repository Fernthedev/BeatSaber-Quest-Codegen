#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredTaskAwaitable)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter);
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3395))
// CS Name: ::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
struct CORDL_TYPE __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_task offset 0x0
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task*  m_task;

/// @brief Field m_continueOnCapturedContext offset 0x8
 __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext)) bool  m_continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_m_task() const;

constexpr void __set_m_continueOnCapturedContext(bool  value) ;

constexpr bool& __get_m_continueOnCapturedContext() ;

constexpr bool const& __get_m_continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x24dc358 size 0x10 virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  task, bool  continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x24dc374 size 0x1c virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x24dad5c size 0x14 virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x24daf1c size 0x14 virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x24dc390 size 0x8 virtual false final false
inline void GetResult() ;

// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task*  m_task, bool  m_continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3396))
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable
struct CORDL_TYPE ConfiguredTaskAwaitable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter offset 0x0
 __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get_m_configuredTaskAwaiter() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get_m_configuredTaskAwaiter() const;

/// @brief Method .ctor addr 0x24dc340 size 0x18 virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  task, bool  continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x24dc368 size 0xc virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter GetAwaiter() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  m_configuredTaskAwaiter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredTaskAwaitable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredTaskAwaitable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable/ConfiguredTaskAwaiter");
