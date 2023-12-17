#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasePlatformInit)
namespace GlobalNamespace {
class IPlatformInit;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
struct __BasePlatformInit___Initialize_d__5;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __BasePlatformInit___InitializeAsync_d__7;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class BasePlatformInit;
}
namespace GlobalNamespace {
struct __BasePlatformInit___InitializeAsync_d__7;
}
namespace GlobalNamespace {
struct __BasePlatformInit___Initialize_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasePlatformInit);
MARK_VAL_T(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__BasePlatformInit___Initialize_d__5);
// Type: ::<Initialize>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15976))
// CS Name: ::BasePlatformInit::<Initialize>d__5
struct CORDL_TYPE __BasePlatformInit___Initialize_d__5 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BasePlatformInit*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::BasePlatformInit*  value) ;

constexpr ::GlobalNamespace::BasePlatformInit* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasePlatformInit*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x27fd860 size 0x284 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x27fdae4 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BasePlatformInit*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __BasePlatformInit___Initialize_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::BasePlatformInit*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BasePlatformInit___Initialize_d__5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BasePlatformInit___Initialize_d__5()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BasePlatformInit___Initialize_d__5, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<InitializeAsync>d__7
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15977))
// CS Name: ::BasePlatformInit::<InitializeAsync>d__7
struct CORDL_TYPE __BasePlatformInit___InitializeAsync_d__7 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BasePlatformInit*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::BasePlatformInit*  value) ;

constexpr ::GlobalNamespace::BasePlatformInit* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasePlatformInit*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x27fdaf0 size 0x220 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x27fdd10 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BasePlatformInit*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __BasePlatformInit___InitializeAsync_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::BasePlatformInit*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BasePlatformInit___InitializeAsync_d__7(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BasePlatformInit___InitializeAsync_d__7()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BasePlatformInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15978))
// CS Name: ::BasePlatformInit*
class CORDL_TYPE BasePlatformInit : public ::System::Object {
public:
// Declarations
using _InitializeAsync_d__7 = ::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7;

using _Initialize_d__5 = ::GlobalNamespace::__BasePlatformInit___Initialize_d__5;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <IsInitialized>k__BackingField offset 0x10
 __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field _initializationTask offset 0x18
 __declspec(property(get=__get__initializationTask, put=__set__initializationTask)) ::System::Threading::Tasks::Task_1<bool>*  _initializationTask;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

/// @brief Convert operator to "::GlobalNamespace::IPlatformInit"
constexpr operator  ::GlobalNamespace::IPlatformInit*() noexcept;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

constexpr void __set__IsInitialized_k__BackingField(bool  value) ;

constexpr bool& __get__IsInitialized_k__BackingField() ;

constexpr bool const& __get__IsInitialized_k__BackingField() const;

constexpr void __set__initializationTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<bool>* __get__initializationTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> __get__initializationTask() const;

/// @brief Method get_IsInitialized addr 0x27fd6b8 size 0x8 virtual true final true
inline bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x27fd6c0 size 0xc virtual false final false
inline void set_IsInitialized(bool  value) ;

/// @brief Method Initialize addr 0x27fd6cc size 0x94 virtual true final true
inline void Initialize() ;

/// @brief Method InitializeInternalAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync() ;

/// @brief Method InitializeAsync addr 0x27fd760 size 0xf8 virtual true final true
inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync() ;

static inline ::GlobalNamespace::BasePlatformInit* New_ctor() ;

/// @brief Method .ctor addr 0x27fd858 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BasePlatformInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasePlatformInit(BasePlatformInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasePlatformInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasePlatformInit(BasePlatformInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BasePlatformInit()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasePlatformInit, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasePlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasePlatformInit*, "", "BasePlatformInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, "", "BasePlatformInit/<InitializeAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, "", "BasePlatformInit/<Initialize>d__5");
