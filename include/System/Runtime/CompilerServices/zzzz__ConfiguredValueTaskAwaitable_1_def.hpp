#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfiguredValueTaskAwaitable_1)
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ConfiguredValueTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct ConfiguredValueTaskAwaitable_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct ConfiguredValueTaskAwaitable_1<int32_t>;
}
namespace System::Runtime::CompilerServices {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1);
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter);
// Type: ::ConfiguredValueTaskAwaiter
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1
// Type: ::ConfiguredValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3363))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3363), inst: 98 })
// CS Name: ::ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Threading::Tasks::ValueTask_1<int32_t>  _value;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set__value(::System::Threading::Tasks::ValueTask_1<int32_t>  value) ;

constexpr ::System::Threading::Tasks::ValueTask_1<int32_t>& __get__value() ;

constexpr ::System::Threading::Tasks::ValueTask_1<int32_t> const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::ValueTask_1<int32_t>  value) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetResult() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<int32_t>", modifiers: "", def_value: None }]
constexpr __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask_1<int32_t>  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3363))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3363), inst: 2 })
// CS Name: ::ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Threading::Tasks::ValueTask_1<TResult>  _value;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set__value(::System::Threading::Tasks::ValueTask_1<TResult>  value) ;

constexpr ::System::Threading::Tasks::ValueTask_1<TResult>& __get__value() ;

constexpr ::System::Threading::Tasks::ValueTask_1<TResult> const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::ValueTask_1<TResult>  value) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResult() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
constexpr __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask_1<TResult>  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3364))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3364), inst: 98 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredValueTaskAwaitable_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ConfiguredValueTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Threading::Tasks::ValueTask_1<int32_t>  _value;

constexpr void __set__value(::System::Threading::Tasks::ValueTask_1<int32_t>  value) ;

constexpr ::System::Threading::Tasks::ValueTask_1<int32_t>& __get__value() ;

constexpr ::System::Threading::Tasks::ValueTask_1<int32_t> const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::ValueTask_1<int32_t>  value) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<int32_t>", modifiers: "", def_value: None }]
constexpr ConfiguredValueTaskAwaitable_1(::System::Threading::Tasks::ValueTask_1<int32_t>  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredValueTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredValueTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3364))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3364), inst: 2 })
// CS Name: ::System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredValueTaskAwaitable_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using ConfiguredValueTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::Threading::Tasks::ValueTask_1<TResult>  _value;

constexpr void __set__value(::System::Threading::Tasks::ValueTask_1<TResult>  value) ;

constexpr ::System::Threading::Tasks::ValueTask_1<TResult>& __get__value() ;

constexpr ::System::Threading::Tasks::ValueTask_1<TResult> const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::ValueTask_1<TResult>  value) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> GetAwaiter() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
constexpr ConfiguredValueTaskAwaitable_1(::System::Threading::Tasks::ValueTask_1<TResult>  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfiguredValueTaskAwaitable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfiguredValueTaskAwaitable_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter");
