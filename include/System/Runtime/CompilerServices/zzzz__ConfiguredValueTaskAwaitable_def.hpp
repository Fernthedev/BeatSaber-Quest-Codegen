#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredValueTaskAwaitable)
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
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
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter);
// Type: ::ConfiguredValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3361))
// CS Name: ::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter
struct CORDL_TYPE __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Threading::Tasks::ValueTask  _value;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set__value(::System::Threading::Tasks::ValueTask  value) ;

constexpr ::System::Threading::Tasks::ValueTask& __get__value() ;

constexpr ::System::Threading::Tasks::ValueTask const& __get__value() const;

/// @brief Method .ctor addr 0x24da99c size 0x8 virtual false final false
inline void _ctor(::System::Threading::Tasks::ValueTask  value) ;

/// @brief Method get_IsCompleted addr 0x24da9a4 size 0x108 virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x24daaac size 0x100 virtual false final false
inline void GetResult() ;

/// @brief Method OnCompleted addr 0x24dabac size 0x1b0 virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x24dad70 size 0x1ac virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
constexpr __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3362))
// CS Name: ::System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable
struct CORDL_TYPE ConfiguredValueTaskAwaitable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredValueTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Threading::Tasks::ValueTask  _value;

constexpr void __set__value(::System::Threading::Tasks::ValueTask  value) ;

constexpr ::System::Threading::Tasks::ValueTask& __get__value() ;

constexpr ::System::Threading::Tasks::ValueTask const& __get__value() const;

/// @brief Method .ctor addr 0x24da988 size 0x8 virtual false final false
inline void _ctor(::System::Threading::Tasks::ValueTask  value) ;

/// @brief Method GetAwaiter addr 0x24da990 size 0xc virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter GetAwaiter() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
constexpr ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredValueTaskAwaitable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredValueTaskAwaitable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter");
