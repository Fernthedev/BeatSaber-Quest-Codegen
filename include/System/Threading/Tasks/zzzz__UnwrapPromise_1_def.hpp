#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnwrapPromise_1)
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __UnwrapPromise_1____c;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class UnwrapPromise_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class __UnwrapPromise_1____c;
}
namespace System::Threading::Tasks {
template<>
class UnwrapPromise_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class UnwrapPromise_1<TResult>;
}
namespace System::Threading::Tasks {
template<>
class __UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __UnwrapPromise_1____c<TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::UnwrapPromise_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__UnwrapPromise_1____c);
// Type: ::<>c
// Type: System.Threading.Tasks::UnwrapPromise`1
// Type: ::<>c
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2796))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2796), inst: 900 })
// CS Name: ::UnwrapPromise`1::<>c<TResult>*
class CORDL_TYPE __UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Threading::Tasks::__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult>*  value) ;

static inline ::System::Threading::Tasks::__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult>* getStaticF___9() ;

static inline void setStaticF___9__8_0(::System::Threading::WaitCallback*  value) ;

static inline ::System::Threading::WaitCallback* getStaticF___9__8_0() ;

static inline ::System::Threading::Tasks::__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <InvokeCoreAsync>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _InvokeCoreAsync_b__8_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__UnwrapPromise_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnwrapPromise_1____c(__UnwrapPromise_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnwrapPromise_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnwrapPromise_1____c(__UnwrapPromise_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UnwrapPromise_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__8_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2796)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2796), inst: 2 })
// CS Name: ::UnwrapPromise`1::<>c<TResult>*
class CORDL_TYPE __UnwrapPromise_1____c<TResult> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*  value) ;

static inline ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* getStaticF___9() ;

static inline void setStaticF___9__8_0(::System::Threading::WaitCallback*  value) ;

static inline ::System::Threading::WaitCallback* getStaticF___9__8_0() ;

static inline ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <InvokeCoreAsync>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _InvokeCoreAsync_b__8_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__UnwrapPromise_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnwrapPromise_1____c(__UnwrapPromise_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnwrapPromise_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnwrapPromise_1____c(__UnwrapPromise_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UnwrapPromise_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__8_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::UnwrapPromise`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5111 }), TypeDefinitionIndex(TypeDefinitionIndex(2797)), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2797), inst: 900 })
// CS Name: ::System.Threading.Tasks::UnwrapPromise`1<TResult>*
class CORDL_TYPE UnwrapPromise_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
// Declarations
using __c = ::System::Threading::Tasks::__UnwrapPromise_1____c<::System::Threading::Tasks::VoidTaskResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>)]{};

/// @brief Field _state offset 0x51
 __declspec(property(get=__get__state, put=__set__state)) uint8_t  _state;

/// @brief Field _lookForOce offset 0x52
 __declspec(property(get=__get__lookForOce, put=__set__lookForOce)) bool  _lookForOce;

 __declspec(property(get=get_InvokeMayRunArbitraryCode)) bool  InvokeMayRunArbitraryCode;

/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

constexpr void __set__state(uint8_t  value) ;

constexpr uint8_t& __get__state() ;

constexpr uint8_t const& __get__state() const;

constexpr void __set__lookForOce(bool  value) ;

constexpr bool& __get__lookForOce() ;

constexpr bool const& __get__lookForOce() const;

static inline ::System::Threading::Tasks::UnwrapPromise_1<::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Threading::Tasks::Task*  outerTask, bool  lookForOce) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  outerTask, bool  lookForOce) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invoke(::System::Threading::Tasks::Task*  completingTask) ;

/// @brief Method InvokeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCore(::System::Threading::Tasks::Task*  completingTask) ;

/// @brief Method InvokeCoreAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCoreAsync(::System::Threading::Tasks::Task*  completingTask) ;

/// @brief Method ProcessCompletedOuterTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessCompletedOuterTask(::System::Threading::Tasks::Task*  task) ;

/// @brief Method TrySetFromTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetFromTask(::System::Threading::Tasks::Task*  task, bool  lookForOce) ;

/// @brief Method ProcessInnerTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessInnerTask(::System::Threading::Tasks::Task*  task) ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_InvokeMayRunArbitraryCode() ;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnwrapPromise_1(UnwrapPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnwrapPromise_1(UnwrapPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnwrapPromise_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::UnwrapPromise`1
namespace System::Threading::Tasks {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5111 }), TypeDefinitionIndex(TypeDefinitionIndex(2773)), TypeDefinitionIndex(TypeDefinitionIndex(2797))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2797), inst: 2 })
// CS Name: ::System.Threading.Tasks::UnwrapPromise`1<TResult>*
class CORDL_TYPE UnwrapPromise_1<TResult> : public ::System::Threading::Tasks::Task_1<TResult> {
public:
// Declarations
using __c = ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Threading::Tasks::Task_1<TResult>)]{};

/// @brief Field _state offset 0x58
 __declspec(property(get=__get__state, put=__set__state)) uint8_t  _state;

/// @brief Field _lookForOce offset 0x59
 __declspec(property(get=__get__lookForOce, put=__set__lookForOce)) bool  _lookForOce;

 __declspec(property(get=get_InvokeMayRunArbitraryCode)) bool  InvokeMayRunArbitraryCode;

/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr operator  ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

constexpr void __set__state(uint8_t  value) ;

constexpr uint8_t& __get__state() ;

constexpr uint8_t const& __get__state() const;

constexpr void __set__lookForOce(bool  value) ;

constexpr bool& __get__lookForOce() ;

constexpr bool const& __get__lookForOce() const;

static inline ::System::Threading::Tasks::UnwrapPromise_1<TResult>* New_ctor(::System::Threading::Tasks::Task*  outerTask, bool  lookForOce) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  outerTask, bool  lookForOce) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Invoke(::System::Threading::Tasks::Task*  completingTask) ;

/// @brief Method InvokeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCore(::System::Threading::Tasks::Task*  completingTask) ;

/// @brief Method InvokeCoreAsync addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCoreAsync(::System::Threading::Tasks::Task*  completingTask) ;

/// @brief Method ProcessCompletedOuterTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessCompletedOuterTask(::System::Threading::Tasks::Task*  task) ;

/// @brief Method TrySetFromTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TrySetFromTask(::System::Threading::Tasks::Task*  task, bool  lookForOce) ;

/// @brief Method ProcessInnerTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ProcessInnerTask(::System::Threading::Tasks::Task*  task) ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_InvokeMayRunArbitraryCode() ;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnwrapPromise_1(UnwrapPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnwrapPromise_1(UnwrapPromise_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnwrapPromise_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::UnwrapPromise_1, "System.Threading.Tasks", "UnwrapPromise`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__UnwrapPromise_1____c, "System.Threading.Tasks", "UnwrapPromise`1/<>c");
