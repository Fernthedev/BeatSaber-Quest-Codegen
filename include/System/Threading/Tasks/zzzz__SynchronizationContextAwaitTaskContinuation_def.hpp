#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SynchronizationContextAwaitTaskContinuation)
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading::Tasks {
class __SynchronizationContextAwaitTaskContinuation____c;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
class Action;
}
namespace System::Threading {
class ContextCallback;
}
// Forward declare root types
namespace System::Threading::Tasks {
class SynchronizationContextAwaitTaskContinuation;
}
namespace System::Threading::Tasks {
class __SynchronizationContextAwaitTaskContinuation____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation);
MARK_REF_PTR_T(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c);
// Type: ::<>c
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2803))
// CS Name: ::SynchronizationContextAwaitTaskContinuation::<>c*
class CORDL_TYPE __SynchronizationContextAwaitTaskContinuation____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c*  value) ;

static inline ::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c* getStaticF___9() ;

static inline ::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c* New_ctor() ;

/// @brief Method .ctor addr 0x262be10 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__7_0 addr 0x262be18 size 0x6c virtual false final false
inline void __cctor_b__7_0(::System::Object*  state) ;

// Ctor Parameters [CppParam { name: "", ty: "__SynchronizationContextAwaitTaskContinuation____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SynchronizationContextAwaitTaskContinuation____c(__SynchronizationContextAwaitTaskContinuation____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SynchronizationContextAwaitTaskContinuation____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SynchronizationContextAwaitTaskContinuation____c(__SynchronizationContextAwaitTaskContinuation____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SynchronizationContextAwaitTaskContinuation____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c, 0x10>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::SynchronizationContextAwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2807))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2804))
// CS Name: ::System.Threading.Tasks::SynchronizationContextAwaitTaskContinuation*
class CORDL_TYPE SynchronizationContextAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
public:
// Declarations
using __c = ::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Threading::Tasks::AwaitTaskContinuation)]{};

/// @brief Field m_syncContext offset 0x20
 __declspec(property(get=__get_m_syncContext, put=__set_m_syncContext)) ::System::Threading::SynchronizationContext*  m_syncContext;

static inline void setStaticF_s_postCallback(::System::Threading::SendOrPostCallback*  value) ;

static inline ::System::Threading::SendOrPostCallback* getStaticF_s_postCallback() ;

static inline void setStaticF_s_postActionCallback(::System::Threading::ContextCallback*  value) ;

static inline ::System::Threading::ContextCallback* getStaticF_s_postActionCallback() ;

constexpr void __set_m_syncContext(::System::Threading::SynchronizationContext*  value) ;

constexpr ::System::Threading::SynchronizationContext* __get_m_syncContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> __get_m_syncContext() const;

static inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation* New_ctor(::System::Threading::SynchronizationContext*  context, ::System::Action*  action, bool  flowExecutionContext) ;

/// @brief Method .ctor addr 0x2626898 size 0x30 virtual false final false
inline void _ctor(::System::Threading::SynchronizationContext*  context, ::System::Action*  action, bool  flowExecutionContext) ;

/// @brief Method Run addr 0x262b824 size 0x1ec virtual true final true
inline void Run(::System::Threading::Tasks::Task*  ignored, bool  canInlineContinuationTask) ;

/// @brief Method PostAction addr 0x262bb8c size 0x94 virtual false final false
static inline void PostAction(::System::Object*  state) ;

/// @brief Method GetPostActionCallback addr 0x262bc20 size 0xc8 virtual false final false
static inline ::System::Threading::ContextCallback* GetPostActionCallback() ;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SynchronizationContextAwaitTaskContinuation()  = default;
public:


// Fields

// Static field s_postCallback

// Static field s_postActionCallback


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation, 0x28>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
NEED_NO_BOX(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation/<>c");
