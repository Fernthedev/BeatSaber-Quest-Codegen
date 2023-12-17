#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebCompletionSource_1)
namespace System::Net {
template<typename T>
class __WebCompletionSource_1__Result;
}
namespace System {
class OperationCanceledException;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Net {
template<typename T>
struct __WebCompletionSource_1__Status;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
template<typename T>
struct __WebCompletionSource_1___WaitForCompletion_d__15;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Net {
template<typename T>
class WebCompletionSource_1;
}
namespace System::Net {
template<typename T>
class __WebCompletionSource_1__Result;
}
namespace System::Net {
template<typename T>
struct __WebCompletionSource_1__Status;
}
namespace System::Net {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Net {
template<::il2cpp_utils::il2cpp_reference_type T>
class WebCompletionSource_1<T>;
}
namespace System::Net {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
class __WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Net {
template<::il2cpp_utils::il2cpp_reference_type T>
class __WebCompletionSource_1__Result<T>;
}
namespace System::Net {
template<typename T>
struct __WebCompletionSource_1___WaitForCompletion_d__15;
}
namespace System::Net {
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
struct __WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>;
}
namespace System::Net {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __WebCompletionSource_1___WaitForCompletion_d__15<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::WebCompletionSource_1);
MARK_GEN_REF_PTR_T(::System::Net::__WebCompletionSource_1__Result);
MARK_GEN_VAL_T(::System::Net::__WebCompletionSource_1__Status);
MARK_GEN_VAL_T(::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15);
// Type: ::Status
namespace System::Net {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9209))
// CS Name: ::WebCompletionSource`1::Status<T>
struct CORDL_TYPE __WebCompletionSource_1__Status : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____WebCompletionSource_1__Status_Unwrapped
enum struct ____WebCompletionSource_1__Status_Unwrapped : int32_t {
__E_Running = static_cast<int32_t>(0x0),
__E_Completed = static_cast<int32_t>(0x1),
__E_Canceled = static_cast<int32_t>(0x2),
__E_Faulted = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Running value: static_cast<int32_t>(0x0)
static ::System::Net::__WebCompletionSource_1__Status<T> const Running;

/// @brief Field Completed value: static_cast<int32_t>(0x1)
static ::System::Net::__WebCompletionSource_1__Status<T> const Completed;

/// @brief Field Canceled value: static_cast<int32_t>(0x2)
static ::System::Net::__WebCompletionSource_1__Status<T> const Canceled;

/// @brief Field Faulted value: static_cast<int32_t>(0x3)
static ::System::Net::__WebCompletionSource_1__Status<T> const Faulted;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____WebCompletionSource_1__Status_Unwrapped () const noexcept {
return std::bit_cast<____WebCompletionSource_1__Status_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __WebCompletionSource_1__Status(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebCompletionSource_1__Status(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebCompletionSource_1__Status()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::Result
// Type: ::<WaitForCompletion>d__15
// Type: System.Net::WebCompletionSource`1
// Type: ::Result
namespace System::Net {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9210), inst: 102 })
// CS Name: ::WebCompletionSource`1::Result<T>*
class CORDL_TYPE __WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <Status>k__BackingField offset 0x10
 __declspec(property(get=__get__Status_k__BackingField, put=__set__Status_k__BackingField)) ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  _Status_k__BackingField;

/// @brief Field <Error>k__BackingField offset 0x18
 __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _Error_k__BackingField;

/// @brief Field <Argument>k__BackingField offset 0x20
 __declspec(property(get=__get__Argument_k__BackingField, put=__set__Argument_k__BackingField)) ::System::ValueTuple_2<bool,T2_cordlgen_0>  _Argument_k__BackingField;

 __declspec(property(get=get_Status)) ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  Status;

 __declspec(property(get=get_Success)) bool  Success;

 __declspec(property(get=get_Error)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  Error;

 __declspec(property(get=get_Argument)) ::System::ValueTuple_2<bool,T2_cordlgen_0>  Argument;

constexpr void __set__Status_k__BackingField(::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  value) ;

constexpr ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>& __get__Status_k__BackingField() ;

constexpr ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>> const& __get__Status_k__BackingField() const;

constexpr void __set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get__Error_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get__Error_k__BackingField() const;

constexpr void __set__Argument_k__BackingField(::System::ValueTuple_2<bool,T2_cordlgen_0>  value) ;

constexpr ::System::ValueTuple_2<bool,T2_cordlgen_0>& __get__Argument_k__BackingField() ;

constexpr ::System::ValueTuple_2<bool,T2_cordlgen_0> const& __get__Argument_k__BackingField() const;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>> get_Status() ;

/// @brief Method get_Success addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Success() ;

/// @brief Method get_Error addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error() ;

/// @brief Method get_Argument addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<bool,T2_cordlgen_0> get_Argument() ;

static inline ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::ValueTuple_2<bool,T2_cordlgen_0>  argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<bool,T2_cordlgen_0>  argument) ;

static inline ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error) ;

// Ctor Parameters [CppParam { name: "", ty: "__WebCompletionSource_1__Result", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__WebCompletionSource_1__Result(__WebCompletionSource_1__Result && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__WebCompletionSource_1__Result", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__WebCompletionSource_1__Result(__WebCompletionSource_1__Result const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __WebCompletionSource_1__Result()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::Result
namespace System::Net {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9210), inst: 2 })
// CS Name: ::WebCompletionSource`1::Result<T>*
class CORDL_TYPE __WebCompletionSource_1__Result<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <Status>k__BackingField offset 0x10
 __declspec(property(get=__get__Status_k__BackingField, put=__set__Status_k__BackingField)) ::System::Net::__WebCompletionSource_1__Status<T>  _Status_k__BackingField;

/// @brief Field <Error>k__BackingField offset 0x18
 __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _Error_k__BackingField;

/// @brief Field <Argument>k__BackingField offset 0x20
 __declspec(property(get=__get__Argument_k__BackingField, put=__set__Argument_k__BackingField)) T  _Argument_k__BackingField;

 __declspec(property(get=get_Status)) ::System::Net::__WebCompletionSource_1__Status<T>  Status;

 __declspec(property(get=get_Success)) bool  Success;

 __declspec(property(get=get_Error)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  Error;

 __declspec(property(get=get_Argument)) T  Argument;

constexpr void __set__Status_k__BackingField(::System::Net::__WebCompletionSource_1__Status<T>  value) ;

constexpr ::System::Net::__WebCompletionSource_1__Status<T>& __get__Status_k__BackingField() ;

constexpr ::System::Net::__WebCompletionSource_1__Status<T> const& __get__Status_k__BackingField() const;

constexpr void __set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get__Error_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get__Error_k__BackingField() const;

constexpr void __set__Argument_k__BackingField(T  value) ;

constexpr T& __get__Argument_k__BackingField() ;

constexpr T const& __get__Argument_k__BackingField() const;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Net::__WebCompletionSource_1__Status<T> get_Status() ;

/// @brief Method get_Success addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Success() ;

/// @brief Method get_Error addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error() ;

/// @brief Method get_Argument addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Argument() ;

static inline ::System::Net::__WebCompletionSource_1__Result<T>* New_ctor(T  argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  argument) ;

static inline ::System::Net::__WebCompletionSource_1__Result<T>* New_ctor(::System::Net::__WebCompletionSource_1__Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Net::__WebCompletionSource_1__Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error) ;

// Ctor Parameters [CppParam { name: "", ty: "__WebCompletionSource_1__Result", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__WebCompletionSource_1__Result(__WebCompletionSource_1__Result && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__WebCompletionSource_1__Result", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__WebCompletionSource_1__Result(__WebCompletionSource_1__Result const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __WebCompletionSource_1__Result()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WaitForCompletion>d__15
namespace System::Net {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9211))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9211), inst: 102 })
// CS Name: ::WebCompletionSource`1::<WaitForCompletion>d__15<T>
struct CORDL_TYPE __WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>", modifiers: "", def_value: None }]
constexpr __WebCompletionSource_1___WaitForCompletion_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>  __t__builder, ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebCompletionSource_1___WaitForCompletion_d__15(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebCompletionSource_1___WaitForCompletion_d__15()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WaitForCompletion>d__15
namespace System::Net {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9211))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9211), inst: 2 })
// CS Name: ::WebCompletionSource`1::<WaitForCompletion>d__15<T>
struct CORDL_TYPE __WebCompletionSource_1___WaitForCompletion_d__15<T> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::WebCompletionSource_1<T>*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::WebCompletionSource_1<T>*  value) ;

constexpr ::System::Net::WebCompletionSource_1<T>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<T>*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>", modifiers: "", def_value: None }]
constexpr __WebCompletionSource_1___WaitForCompletion_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::System::Net::WebCompletionSource_1<T>*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __WebCompletionSource_1___WaitForCompletion_d__15(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __WebCompletionSource_1___WaitForCompletion_d__15()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebCompletionSource`1
namespace System::Net {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9212))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9212), inst: 102 })
// CS Name: ::System.Net::WebCompletionSource`1<T>*
class CORDL_TYPE WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> : public ::System::Object {
public:
// Declarations
using _WaitForCompletion_d__15 = ::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>;

using Result = ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>;

using Status = ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field completion offset 0x10
 __declspec(property(get=__get_completion, put=__set_completion)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*  completion;

/// @brief Field currentResult offset 0x18
 __declspec(property(get=__get_currentResult, put=__set_currentResult)) ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  currentResult;

 __declspec(property(get=get_CurrentResult)) ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  CurrentResult;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task*  Task;

constexpr void __set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>* __get_completion() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*> __get_completion() const;

constexpr void __set_currentResult(::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value) ;

constexpr ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* __get_currentResult() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> __get_currentResult() const;

static inline ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* New_ctor(bool  runAsync) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  runAsync) ;

/// @brief Method get_CurrentResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* get_CurrentResult() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* get_Task() ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCompleted(::System::ValueTuple_2<bool,T2_cordlgen_0>  argument) ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCompleted() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::OperationCanceledException*  error) ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  error) ;

/// @brief Method ThrowOnError addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowOnError() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* WaitForCompletion() ;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebCompletionSource_1(WebCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebCompletionSource_1(WebCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebCompletionSource`1
namespace System::Net {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9212)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9212), inst: 2 })
// CS Name: ::System.Net::WebCompletionSource`1<T>*
class CORDL_TYPE WebCompletionSource_1<T> : public ::System::Object {
public:
// Declarations
using _WaitForCompletion_d__15 = ::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>;

using Result = ::System::Net::__WebCompletionSource_1__Result<T>;

using Status = ::System::Net::__WebCompletionSource_1__Status<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field completion offset 0x10
 __declspec(property(get=__get_completion, put=__set_completion)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*  completion;

/// @brief Field currentResult offset 0x18
 __declspec(property(get=__get_currentResult, put=__set_currentResult)) ::System::Net::__WebCompletionSource_1__Result<T>*  currentResult;

 __declspec(property(get=get_CurrentResult)) ::System::Net::__WebCompletionSource_1__Result<T>*  CurrentResult;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task*  Task;

constexpr void __set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>* __get_completion() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*> __get_completion() const;

constexpr void __set_currentResult(::System::Net::__WebCompletionSource_1__Result<T>*  value) ;

constexpr ::System::Net::__WebCompletionSource_1__Result<T>* __get_currentResult() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::__WebCompletionSource_1__Result<T>*> __get_currentResult() const;

static inline ::System::Net::WebCompletionSource_1<T>* New_ctor(bool  runAsync) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  runAsync) ;

/// @brief Method get_CurrentResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Net::__WebCompletionSource_1__Result<T>* get_CurrentResult() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task* get_Task() ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCompleted(T  argument) ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCompleted() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetCanceled(::System::OperationCanceledException*  error) ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetException(::System::Exception*  error) ;

/// @brief Method ThrowOnError addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowOnError() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<T>* WaitForCompletion() ;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebCompletionSource_1(WebCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebCompletionSource_1(WebCompletionSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebCompletionSource_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::WebCompletionSource_1, "System.Net", "WebCompletionSource`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::__WebCompletionSource_1__Result, "System.Net", "WebCompletionSource`1/Result");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::__WebCompletionSource_1__Status, "System.Net", "WebCompletionSource`1/Status");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15, "System.Net", "WebCompletionSource`1/<WaitForCompletion>d__15");
