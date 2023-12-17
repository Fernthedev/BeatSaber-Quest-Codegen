#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncMethodBuilderCore)
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class ContextCallback;
}
namespace System {
class Object;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c__DisplayClass5_0;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore__MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore__ContinuationWrapper;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore__ContinuationWrapper;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore__MoveNextRunner;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c;
}
namespace System::Runtime::CompilerServices {
class __AsyncMethodBuilderCore____c__DisplayClass5_0;
}
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c);
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0);
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncMethodBuilderCore);
// Type: ::MoveNextRunner
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3404))
// CS Name: ::AsyncMethodBuilderCore::MoveNextRunner*
class CORDL_TYPE __AsyncMethodBuilderCore__MoveNextRunner : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_context offset 0x10
 __declspec(property(get=__get_m_context, put=__set_m_context)) ::System::Threading::ExecutionContext*  m_context;

/// @brief Field m_stateMachine offset 0x18
 __declspec(property(get=__get_m_stateMachine, put=__set_m_stateMachine)) ::System::Runtime::CompilerServices::IAsyncStateMachine*  m_stateMachine;

constexpr void __set_m_context(::System::Threading::ExecutionContext*  value) ;

constexpr ::System::Threading::ExecutionContext* __get_m_context() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> __get_m_context() const;

constexpr void __set_m_stateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  value) ;

constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* __get_m_stateMachine() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::IAsyncStateMachine*> __get_m_stateMachine() const;

static inline void setStaticF_s_invokeMoveNext(::System::Threading::ContextCallback*  value) ;

static inline ::System::Threading::ContextCallback* getStaticF_s_invokeMoveNext() ;

static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner* New_ctor(::System::Threading::ExecutionContext*  context, ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method .ctor addr 0x24de1e4 size 0x2c virtual false final false
inline void _ctor(::System::Threading::ExecutionContext*  context, ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method Run addr 0x24de210 size 0x20c virtual false final false
inline void Run() ;

/// @brief Method InvokeMoveNext addr 0x24de41c size 0xe0 virtual false final false
static inline void InvokeMoveNext(::System::Object*  stateMachine) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__MoveNextRunner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncMethodBuilderCore__MoveNextRunner(__AsyncMethodBuilderCore__MoveNextRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__MoveNextRunner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncMethodBuilderCore__MoveNextRunner(__AsyncMethodBuilderCore__MoveNextRunner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncMethodBuilderCore__MoveNextRunner()  = default;
public:


// Fields

// Static field s_invokeMoveNext


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: ::ContinuationWrapper
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3405))
// CS Name: ::AsyncMethodBuilderCore::ContinuationWrapper*
class CORDL_TYPE __AsyncMethodBuilderCore__ContinuationWrapper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_continuation offset 0x10
 __declspec(property(get=__get_m_continuation, put=__set_m_continuation)) ::System::Action*  m_continuation;

/// @brief Field m_invokeAction offset 0x18
 __declspec(property(get=__get_m_invokeAction, put=__set_m_invokeAction)) ::System::Action*  m_invokeAction;

/// @brief Field m_innerTask offset 0x20
 __declspec(property(get=__get_m_innerTask, put=__set_m_innerTask)) ::System::Threading::Tasks::Task*  m_innerTask;

constexpr void __set_m_continuation(::System::Action*  value) ;

constexpr ::System::Action* __get_m_continuation() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_continuation() const;

constexpr void __set_m_invokeAction(::System::Action*  value) ;

constexpr ::System::Action* __get_m_invokeAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_invokeAction() const;

constexpr void __set_m_innerTask(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_m_innerTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_m_innerTask() const;

static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper* New_ctor(::System::Action*  continuation, ::System::Action*  invokeAction, ::System::Threading::Tasks::Task*  innerTask) ;

/// @brief Method .ctor addr 0x24de4fc size 0x50 virtual false final false
inline void _ctor(::System::Action*  continuation, ::System::Action*  invokeAction, ::System::Threading::Tasks::Task*  innerTask) ;

/// @brief Method Invoke addr 0x24de54c size 0x24 virtual false final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__ContinuationWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncMethodBuilderCore__ContinuationWrapper(__AsyncMethodBuilderCore__ContinuationWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore__ContinuationWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncMethodBuilderCore__ContinuationWrapper(__AsyncMethodBuilderCore__ContinuationWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncMethodBuilderCore__ContinuationWrapper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: ::<>c__DisplayClass5_0
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3406))
// CS Name: ::AsyncMethodBuilderCore::<>c__DisplayClass5_0*
class CORDL_TYPE __AsyncMethodBuilderCore____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field innerTask offset 0x10
 __declspec(property(get=__get_innerTask, put=__set_innerTask)) ::System::Threading::Tasks::Task*  innerTask;

/// @brief Field continuation offset 0x18
 __declspec(property(get=__get_continuation, put=__set_continuation)) ::System::Action*  continuation;

constexpr void __set_innerTask(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_innerTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_innerTask() const;

constexpr void __set_continuation(::System::Action*  value) ;

constexpr ::System::Action* __get_continuation() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_continuation() const;

static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x24de570 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <OutputAsyncCausalityEvents>b__0 addr 0x24de578 size 0x5c virtual false final false
inline void _OutputAsyncCausalityEvents_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncMethodBuilderCore____c__DisplayClass5_0(__AsyncMethodBuilderCore____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncMethodBuilderCore____c__DisplayClass5_0(__AsyncMethodBuilderCore____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncMethodBuilderCore____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: ::<>c
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3407))
// CS Name: ::AsyncMethodBuilderCore::<>c*
class CORDL_TYPE __AsyncMethodBuilderCore____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*  value) ;

static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* getStaticF___9() ;

static inline void setStaticF___9__7_0(::System::Threading::SendOrPostCallback*  value) ;

static inline ::System::Threading::SendOrPostCallback* getStaticF___9__7_0() ;

static inline void setStaticF___9__7_1(::System::Threading::WaitCallback*  value) ;

static inline ::System::Threading::WaitCallback* getStaticF___9__7_1() ;

static inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* New_ctor() ;

/// @brief Method .ctor addr 0x24de638 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ThrowAsync>b__7_0 addr 0x24de640 size 0x64 virtual false final false
inline void _ThrowAsync_b__7_0(::System::Object*  state) ;

/// @brief Method <ThrowAsync>b__7_1 addr 0x24de6a4 size 0x64 virtual false final false
inline void _ThrowAsync_b__7_1(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncMethodBuilderCore____c(__AsyncMethodBuilderCore____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncMethodBuilderCore____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncMethodBuilderCore____c(__AsyncMethodBuilderCore____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncMethodBuilderCore____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__7_0

// Static field <>9__7_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncMethodBuilderCore
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3408))
// CS Name: ::System.Runtime.CompilerServices::AsyncMethodBuilderCore
struct CORDL_TYPE AsyncMethodBuilderCore : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using __c = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c;

using __c__DisplayClass5_0 = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0;

using ContinuationWrapper = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper;

using MoveNextRunner = ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_stateMachine offset 0x0
 __declspec(property(get=__get_m_stateMachine, put=__set_m_stateMachine)) ::System::Runtime::CompilerServices::IAsyncStateMachine*  m_stateMachine;

/// @brief Field m_defaultContextAction offset 0x8
 __declspec(property(get=__get_m_defaultContextAction, put=__set_m_defaultContextAction)) ::System::Action*  m_defaultContextAction;

constexpr void __set_m_stateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  value) ;

constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* __get_m_stateMachine() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::IAsyncStateMachine*> __get_m_stateMachine() const;

constexpr void __set_m_defaultContextAction(::System::Action*  value) ;

constexpr ::System::Action* __get_m_defaultContextAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_defaultContextAction() const;

/// @brief Method SetStateMachine addr 0x24dc3e8 size 0xc8 virtual false final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method GetCompletionAction addr 0x24dcc58 size 0x1d4 virtual false final false
inline ::System::Action* GetCompletionAction(::System::Threading::Tasks::Task*  taskForTracing, ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>  runnerToInitialize) ;

/// @brief Method OutputAsyncCausalityEvents addr 0x24dce2c size 0xc0 virtual false final false
inline ::System::Action* OutputAsyncCausalityEvents(::System::Threading::Tasks::Task*  innerTask, ::System::Action*  continuation) ;

/// @brief Method PostBoxInitialization addr 0x24dcfb0 size 0x1a0 virtual false final false
inline void PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine, ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*  runner, ::System::Threading::Tasks::Task*  builtTask) ;

/// @brief Method ThrowAsync addr 0x24dc750 size 0x2ec virtual false final false
static inline void ThrowAsync(::System::Exception*  exception, ::System::Threading::SynchronizationContext*  targetContext) ;

/// @brief Method CreateContinuationWrapper addr 0x24dceec size 0xc4 virtual false final false
static inline ::System::Action* CreateContinuationWrapper(::System::Action*  continuation, ::System::Action*  invokeAction, ::System::Threading::Tasks::Task*  innerTask) ;

/// @brief Method TryGetContinuationTask addr 0x24dd150 size 0x1094 virtual false final false
static inline ::System::Threading::Tasks::Task* TryGetContinuationTask(::System::Action*  action) ;

// Ctor Parameters [CppParam { name: "m_stateMachine", ty: "::System::Runtime::CompilerServices::IAsyncStateMachine*", modifiers: "", def_value: None }, CppParam { name: "m_defaultContextAction", ty: "::System::Action*", modifiers: "", def_value: None }]
constexpr AsyncMethodBuilderCore(::System::Runtime::CompilerServices::IAsyncStateMachine*  m_stateMachine, ::System::Action*  m_defaultContextAction) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncMethodBuilderCore(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncMethodBuilderCore()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderCore, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/ContinuationWrapper");
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner");
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c");
NEED_NO_BOX(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
