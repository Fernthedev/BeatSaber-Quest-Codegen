#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTask_1)
namespace System {
class Object;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
template<typename TResult>
class __ValueTask_1__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __ValueTask_1__ValueTaskSourceAsTask;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ValueTaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ConfiguredValueTaskAwaitable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
class __ValueTask_1__ValueTaskSourceAsTask____c;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __ValueTask_1__ValueTaskSourceAsTask;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __ValueTask_1__ValueTaskSourceAsTask____c<TResult>;
}
namespace GlobalNamespace {
template<>
class __ValueTask_1__ValueTaskSourceAsTask____c<int32_t>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __ValueTask_1__ValueTaskSourceAsTask<TResult>;
}
namespace System::Threading::Tasks {
template<>
class __ValueTask_1__ValueTaskSourceAsTask<int32_t>;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct ValueTask_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
struct ValueTask_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask);
MARK_GEN_VAL_T(::System::Threading::Tasks::ValueTask_1);
// Type: ::<>c
// Type: ::ValueTaskSourceAsTask
// Type: System.Threading.Tasks::ValueTask`1
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2765)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2765), inst: 98 })
// CS Name: ::ValueTask`1::ValueTaskSourceAsTask::<>c<TResult>*
class CORDL_TYPE __ValueTask_1__ValueTaskSourceAsTask____c<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<int32_t>*  value) ;

static inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<int32_t>* getStaticF___9() ;

static inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__4_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__4_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueTask_1__ValueTaskSourceAsTask____c(__ValueTask_1__ValueTaskSourceAsTask____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueTask_1__ValueTaskSourceAsTask____c(__ValueTask_1__ValueTaskSourceAsTask____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueTask_1__ValueTaskSourceAsTask____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2765)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2765), inst: 2 })
// CS Name: ::ValueTask`1::ValueTaskSourceAsTask::<>c<TResult>*
class CORDL_TYPE __ValueTask_1__ValueTaskSourceAsTask____c<TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>*  value) ;

static inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* getStaticF___9() ;

static inline ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__4_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__4_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueTask_1__ValueTaskSourceAsTask____c(__ValueTask_1__ValueTaskSourceAsTask____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueTask_1__ValueTaskSourceAsTask____c(__ValueTask_1__ValueTaskSourceAsTask____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueTask_1__ValueTaskSourceAsTask____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueTaskSourceAsTask
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2766)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 3850 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2766), inst: 98 })
// CS Name: ::ValueTask`1::ValueTaskSourceAsTask<TResult>*
class CORDL_TYPE __ValueTask_1__ValueTaskSourceAsTask<int32_t> : public ::System::Threading::Tasks::Task_1<int32_t> {
public:
// Declarations
using __c = ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<int32_t>)]{};

/// @brief Field _source offset 0x58
 __declspec(property(get=__get__source, put=__set__source)) ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*  _source;

/// @brief Field _token offset 0x60
 __declspec(property(get=__get__token, put=__set__token)) int16_t  _token;

static inline void setStaticF_s_completionAction(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_completionAction() ;

constexpr void __set__source(::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*  value) ;

constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>* __get__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*> __get__source() const;

constexpr void __set__token(int16_t  value) ;

constexpr int16_t& __get__token() ;

constexpr int16_t const& __get__token() const;

static inline ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<int32_t>* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*  source, int16_t  token) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*  source, int16_t  token) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueTask_1__ValueTaskSourceAsTask(__ValueTask_1__ValueTaskSourceAsTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueTask_1__ValueTaskSourceAsTask(__ValueTask_1__ValueTaskSourceAsTask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueTask_1__ValueTaskSourceAsTask()  = default;
public:


// Fields

// Static field s_completionAction


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::ValueTaskSourceAsTask
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 3850 }), TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2766), inst: 2 })
// CS Name: ::ValueTask`1::ValueTaskSourceAsTask<TResult>*
class CORDL_TYPE __ValueTask_1__ValueTaskSourceAsTask<TResult> : public ::System::Threading::Tasks::Task_1<TResult> {
public:
// Declarations
using __c = ::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c<TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Threading::Tasks::Task_1<TResult>)]{};

/// @brief Field _source offset 0x58
 __declspec(property(get=__get__source, put=__set__source)) ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*  _source;

/// @brief Field _token offset 0x60
 __declspec(property(get=__get__token, put=__set__token)) int16_t  _token;

static inline void setStaticF_s_completionAction(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_completionAction() ;

constexpr void __set__source(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*  value) ;

constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* __get__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*> __get__source() const;

constexpr void __set__token(int16_t  value) ;

constexpr int16_t& __get__token() ;

constexpr int16_t const& __get__token() const;

static inline ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>* New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*  source, int16_t  token) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*  source, int16_t  token) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueTask_1__ValueTaskSourceAsTask(__ValueTask_1__ValueTaskSourceAsTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueTask_1__ValueTaskSourceAsTask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueTask_1__ValueTaskSourceAsTask(__ValueTask_1__ValueTaskSourceAsTask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueTask_1__ValueTaskSourceAsTask()  = default;
public:


// Fields

// Static field s_completionAction


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ValueTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2767))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2767), inst: 98 })
// CS Name: ::System.Threading.Tasks::ValueTask`1<TResult>
struct CORDL_TYPE ValueTask_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using ValueTaskSourceAsTask = ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<int32_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _obj offset 0x0
 __declspec(property(get=__get__obj, put=__set__obj)) ::System::Object*  _obj;

/// @brief Field _result offset 0x8
 __declspec(property(get=__get__result, put=__set__result)) int32_t  _result;

/// @brief Field _token offset 0xc
 __declspec(property(get=__get__token, put=__set__token)) int16_t  _token;

/// @brief Field _continueOnCapturedContext offset 0xe
 __declspec(property(get=__get__continueOnCapturedContext, put=__set__continueOnCapturedContext)) bool  _continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsCompletedSuccessfully)) bool  IsCompletedSuccessfully;

 __declspec(property(get=get_Result)) int32_t  Result;

/// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<int32_t>>"
constexpr operator  ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<int32_t>>*() ;

static inline void setStaticF_s_canceledTask(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

static inline ::System::Threading::Tasks::Task_1<int32_t>* getStaticF_s_canceledTask() ;

constexpr void __set__obj(::System::Object*  value) ;

constexpr ::System::Object* __get__obj() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__obj() const;

constexpr void __set__result(int32_t  value) ;

constexpr int32_t& __get__result() ;

constexpr int32_t const& __get__result() const;

constexpr void __set__token(int16_t  value) ;

constexpr int16_t& __get__token() ;

constexpr int16_t const& __get__token() const;

constexpr void __set__continueOnCapturedContext(bool  value) ;

constexpr bool& __get__continueOnCapturedContext() ;

constexpr bool const& __get__continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<int32_t>*  task) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*  source, int16_t  token) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  obj, int32_t  result, int16_t  token, bool  continueOnCapturedContext) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::Threading::Tasks::ValueTask_1<int32_t>  other) ;

/// @brief Method AsTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* AsTask() ;

/// @brief Method GetTaskForValueTaskSource addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int32_t>* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*  t) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsCompletedSuccessfully addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompletedSuccessfully() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Result() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<int32_t> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr ValueTask_1(::System::Object*  _obj, int32_t  _result, int16_t  _token, bool  _continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTask_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTask_1()  = default;


// Fields

// Static field s_canceledTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ValueTask`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2767))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2767), inst: 2 })
// CS Name: ::System.Threading.Tasks::ValueTask`1<TResult>
struct CORDL_TYPE ValueTask_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using ValueTaskSourceAsTask = ::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask<TResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _obj offset 0x0
 __declspec(property(get=__get__obj, put=__set__obj)) ::System::Object*  _obj;

/// @brief Field _result offset 0x8
 __declspec(property(get=__get__result, put=__set__result)) TResult  _result;

/// @brief Field _token offset 0x10
 __declspec(property(get=__get__token, put=__set__token)) int16_t  _token;

/// @brief Field _continueOnCapturedContext offset 0x12
 __declspec(property(get=__get__continueOnCapturedContext, put=__set__continueOnCapturedContext)) bool  _continueOnCapturedContext;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsCompletedSuccessfully)) bool  IsCompletedSuccessfully;

 __declspec(property(get=get_Result)) TResult  Result;

/// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>"
constexpr operator  ::System::IEquatable_1<::System::Threading::Tasks::ValueTask_1<TResult>>*() ;

static inline void setStaticF_s_canceledTask(::System::Threading::Tasks::Task_1<TResult>*  value) ;

static inline ::System::Threading::Tasks::Task_1<TResult>* getStaticF_s_canceledTask() ;

constexpr void __set__obj(::System::Object*  value) ;

constexpr ::System::Object* __get__obj() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__obj() const;

constexpr void __set__result(TResult  value) ;

constexpr TResult& __get__result() ;

constexpr TResult const& __get__result() const;

constexpr void __set__token(int16_t  value) ;

constexpr int16_t& __get__token() ;

constexpr int16_t const& __get__token() const;

constexpr void __set__continueOnCapturedContext(bool  value) ;

constexpr bool& __get__continueOnCapturedContext() ;

constexpr bool const& __get__continueOnCapturedContext() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task_1<TResult>*  task) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*  source, int16_t  token) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  obj, TResult  result, int16_t  token, bool  continueOnCapturedContext) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::Threading::Tasks::ValueTask_1<TResult>  other) ;

/// @brief Method AsTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* AsTask() ;

/// @brief Method GetTaskForValueTaskSource addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TResult>* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*  t) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsCompletedSuccessfully addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompletedSuccessfully() ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult get_Result() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult> GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult> ConfigureAwait(bool  continueOnCapturedContext) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: None }, CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr ValueTask_1(::System::Object*  _obj, TResult  _result, int16_t  _token, bool  _continueOnCapturedContext) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTask_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTask_1()  = default;


// Fields

// Static field s_canceledTask


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ValueTask_1__ValueTaskSourceAsTask____c, "System.Threading.Tasks", "ValueTask`1/ValueTaskSourceAsTask/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__ValueTask_1__ValueTaskSourceAsTask, "System.Threading.Tasks", "ValueTask`1/ValueTaskSourceAsTask");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::Tasks::ValueTask_1, "System.Threading.Tasks", "ValueTask`1");
