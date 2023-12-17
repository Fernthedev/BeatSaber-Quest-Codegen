#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskExceptionHolder)
namespace System::Collections::Generic {
template<typename T>
class LowLevelListWithIList_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class AggregateException;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskExceptionHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskExceptionHolder);
// Type: System.Threading.Tasks::TaskExceptionHolder
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2808))
// CS Name: ::System.Threading.Tasks::TaskExceptionHolder*
class CORDL_TYPE TaskExceptionHolder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_task offset 0x10
 __declspec(property(get=__get_m_task, put=__set_m_task)) ::System::Threading::Tasks::Task*  m_task;

/// @brief Field m_faultExceptions offset 0x18
 __declspec(property(get=__get_m_faultExceptions, put=__set_m_faultExceptions)) ::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  m_faultExceptions;

/// @brief Field m_cancellationException offset 0x20
 __declspec(property(get=__get_m_cancellationException, put=__set_m_cancellationException)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  m_cancellationException;

/// @brief Field m_isHandled offset 0x28
 __declspec(property(get=__get_m_isHandled, put=__set_m_isHandled)) bool  m_isHandled;

 __declspec(property(get=get_ContainsFaultList)) bool  ContainsFaultList;

static inline void setStaticF_s_failFastOnUnobservedException(bool  value) ;

static inline bool getStaticF_s_failFastOnUnobservedException() ;

constexpr void __set_m_task(::System::Threading::Tasks::Task*  value) ;

constexpr ::System::Threading::Tasks::Task* __get_m_task() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> __get_m_task() const;

constexpr void __set_m_faultExceptions(::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  value) ;

constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* __get_m_faultExceptions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*> __get_m_faultExceptions() const;

constexpr void __set_m_cancellationException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get_m_cancellationException() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get_m_cancellationException() const;

constexpr void __set_m_isHandled(bool  value) ;

constexpr bool& __get_m_isHandled() ;

constexpr bool const& __get_m_isHandled() const;

static inline ::System::Threading::Tasks::TaskExceptionHolder* New_ctor(::System::Threading::Tasks::Task*  task) ;

/// @brief Method .ctor addr 0x2624af0 size 0x28 virtual false final false
inline void _ctor(::System::Threading::Tasks::Task*  task) ;

/// @brief Method ShouldFailFastOnUnobservedException addr 0x262c79c size 0x8 virtual false final false
static inline bool ShouldFailFastOnUnobservedException() ;

/// @brief Method Finalize addr 0x262c7a4 size 0x204 virtual true final false
inline void Finalize() ;

/// @brief Method get_ContainsFaultList addr 0x2624704 size 0x1c virtual false final false
inline bool get_ContainsFaultList() ;

/// @brief Method Add addr 0x2624b18 size 0xc virtual false final false
inline void Add(::System::Object*  exceptionObject, bool  representsCancellation) ;

/// @brief Method SetCancellationException addr 0x262cb48 size 0xbc virtual false final false
inline void SetCancellationException(::System::Object*  exceptionObject) ;

/// @brief Method AddFaultException addr 0x262cc04 size 0x50c virtual false final false
inline void AddFaultException(::System::Object*  exceptionObject) ;

/// @brief Method MarkAsUnhandled addr 0x262d110 size 0x70 virtual false final false
inline void MarkAsUnhandled() ;

/// @brief Method MarkAsHandled addr 0x26248dc size 0x7c virtual false final false
inline void MarkAsHandled(bool  calledFromFinalizer) ;

/// @brief Method CreateExceptionObject addr 0x2624b24 size 0x1b4 virtual false final false
inline ::System::AggregateException* CreateExceptionObject(bool  calledFromFinalizer, ::System::Exception*  includeThisException) ;

/// @brief Method GetExceptionDispatchInfos addr 0x2624de4 size 0x8c virtual false final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos() ;

/// @brief Method GetCancellationExceptionDispatchInfo addr 0x262d180 size 0x8 virtual false final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskExceptionHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExceptionHolder(TaskExceptionHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExceptionHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExceptionHolder(TaskExceptionHolder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskExceptionHolder()  = default;
public:


// Fields

// Static field s_failFastOnUnobservedException


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskExceptionHolder, 0x30>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskExceptionHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskExceptionHolder*, "System.Threading.Tasks", "TaskExceptionHolder");
