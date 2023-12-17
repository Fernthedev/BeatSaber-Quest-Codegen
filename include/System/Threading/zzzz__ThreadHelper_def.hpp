#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadHelper)
namespace System {
class Object;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace System::Threading {
class ThreadHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadHelper);
// Type: System.Threading::ThreadHelper
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2722))
// CS Name: ::System.Threading::ThreadHelper*
class CORDL_TYPE ThreadHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _start offset 0x10
 __declspec(property(get=__get__start, put=__set__start)) ::System::Delegate*  _start;

/// @brief Field _startArg offset 0x18
 __declspec(property(get=__get__startArg, put=__set__startArg)) ::System::Object*  _startArg;

/// @brief Field _executionContext offset 0x20
 __declspec(property(get=__get__executionContext, put=__set__executionContext)) ::System::Threading::ExecutionContext*  _executionContext;

constexpr void __set__start(::System::Delegate*  value) ;

constexpr ::System::Delegate* __get__start() ;

constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> __get__start() const;

constexpr void __set__startArg(::System::Object*  value) ;

constexpr ::System::Object* __get__startArg() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__startArg() const;

constexpr void __set__executionContext(::System::Threading::ExecutionContext*  value) ;

constexpr ::System::Threading::ExecutionContext* __get__executionContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> __get__executionContext() const;

static inline void setStaticF__ccb(::System::Threading::ContextCallback*  value) ;

static inline ::System::Threading::ContextCallback* getStaticF__ccb() ;

static inline ::System::Threading::ThreadHelper* New_ctor(::System::Delegate*  start) ;

/// @brief Method .ctor addr 0x26192a0 size 0x28 virtual false final false
inline void _ctor(::System::Delegate*  start) ;

/// @brief Method SetExecutionContextHelper addr 0x26192c8 size 0x8 virtual false final false
inline void SetExecutionContextHelper(::System::Threading::ExecutionContext*  ec) ;

/// @brief Method ThreadStart_Context addr 0x26192d0 size 0x10c virtual false final false
static inline void ThreadStart_Context(::System::Object*  state) ;

/// @brief Method ThreadStart addr 0x26193dc size 0x100 virtual false final false
inline void ThreadStart(::System::Object*  obj) ;

/// @brief Method ThreadStart addr 0x26194dc size 0xf4 virtual false final false
inline void ThreadStart() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadHelper(ThreadHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadHelper(ThreadHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadHelper()  = default;
public:


// Fields

// Static field _ccb


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadHelper, 0x28>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::ThreadHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadHelper*, "System.Threading", "ThreadHelper");
