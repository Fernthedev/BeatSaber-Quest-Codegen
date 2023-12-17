#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskUpdater_1)
namespace Zenject {
template<typename TTask>
class __TaskUpdater_1__TaskInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
template<typename TTask>
class __TaskUpdater_1____c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
template<typename TTask>
class __TaskUpdater_1____c;
}
namespace System {
class Object;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
template<typename TTask>
class TaskUpdater_1;
}
namespace Zenject {
template<typename TTask>
class __TaskUpdater_1__TaskInfo;
}
namespace Zenject {
template<typename TTask>
class __TaskUpdater_1____c;
}
namespace Zenject {
template<typename TTask>
class __TaskUpdater_1____c__DisplayClass8_0;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TTask>
class TaskUpdater_1<TTask>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TTask>
class __TaskUpdater_1__TaskInfo<TTask>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TTask>
class __TaskUpdater_1____c<TTask>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TTask>
class __TaskUpdater_1____c__DisplayClass8_0<TTask>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::TaskUpdater_1);
MARK_GEN_REF_PTR_T(::Zenject::__TaskUpdater_1__TaskInfo);
MARK_GEN_REF_PTR_T(::Zenject::__TaskUpdater_1____c);
MARK_GEN_REF_PTR_T(::Zenject::__TaskUpdater_1____c__DisplayClass8_0);
// Type: ::TaskInfo
// Type: ::<>c
// Type: ::<>c__DisplayClass8_0
// Type: Zenject::TaskUpdater`1
// Type: ::TaskInfo
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11334), inst: 2 })
// CS Name: ::TaskUpdater`1::TaskInfo<TTask>*
class CORDL_TYPE __TaskUpdater_1__TaskInfo<TTask> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Task offset 0x10
 __declspec(property(get=__get_Task, put=__set_Task)) TTask  Task;

/// @brief Field Priority offset 0x18
 __declspec(property(get=__get_Priority, put=__set_Priority)) int32_t  Priority;

/// @brief Field IsRemoved offset 0x1c
 __declspec(property(get=__get_IsRemoved, put=__set_IsRemoved)) bool  IsRemoved;

constexpr void __set_Task(TTask  value) ;

constexpr TTask& __get_Task() ;

constexpr TTask const& __get_Task() const;

constexpr void __set_Priority(int32_t  value) ;

constexpr int32_t& __get_Priority() ;

constexpr int32_t const& __get_Priority() const;

constexpr void __set_IsRemoved(bool  value) ;

constexpr bool& __get_IsRemoved() ;

constexpr bool const& __get_IsRemoved() const;

static inline ::Zenject::__TaskUpdater_1__TaskInfo<TTask>* New_ctor(TTask  task, int32_t  priority) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TTask  task, int32_t  priority) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1__TaskInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskUpdater_1__TaskInfo(__TaskUpdater_1__TaskInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1__TaskInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskUpdater_1__TaskInfo(__TaskUpdater_1__TaskInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskUpdater_1__TaskInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11335))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11335), inst: 2 })
// CS Name: ::TaskUpdater`1::<>c<TTask>*
class CORDL_TYPE __TaskUpdater_1____c<TTask> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__TaskUpdater_1____c<TTask>*  value) ;

static inline ::Zenject::__TaskUpdater_1____c<TTask>* getStaticF___9() ;

static inline void setStaticF___9__7_0(::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*,TTask>*  value) ;

static inline ::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*,TTask>* getStaticF___9__7_0() ;

static inline ::Zenject::__TaskUpdater_1____c<TTask>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <AddTaskInternal>b__7_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TTask _AddTaskInternal_b__7_0(::Zenject::__TaskUpdater_1__TaskInfo<TTask>*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskUpdater_1____c(__TaskUpdater_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskUpdater_1____c(__TaskUpdater_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskUpdater_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__7_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11336)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11336), inst: 2 })
// CS Name: ::TaskUpdater`1::<>c__DisplayClass8_0<TTask>*
class CORDL_TYPE __TaskUpdater_1____c__DisplayClass8_0<TTask> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field task offset 0x10
 __declspec(property(get=__get_task, put=__set_task)) TTask  task;

constexpr void __set_task(TTask  value) ;

constexpr TTask& __get_task() ;

constexpr TTask const& __get_task() const;

static inline ::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <RemoveTask>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _RemoveTask_b__0(::Zenject::__TaskUpdater_1__TaskInfo<TTask>*  x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TaskUpdater_1____c__DisplayClass8_0(__TaskUpdater_1____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TaskUpdater_1____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TaskUpdater_1____c__DisplayClass8_0(__TaskUpdater_1____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TaskUpdater_1____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::TaskUpdater`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TTask>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11337)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11337), inst: 2 })
// CS Name: ::Zenject::TaskUpdater`1<TTask>*
class CORDL_TYPE TaskUpdater_1<TTask> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass8_0 = ::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>;

using __c = ::Zenject::__TaskUpdater_1____c<TTask>;

using TaskInfo = ::Zenject::__TaskUpdater_1__TaskInfo<TTask>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _tasks offset 0x10
 __declspec(property(get=__get__tasks, put=__set__tasks)) ::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  _tasks;

/// @brief Field _queuedTasks offset 0x18
 __declspec(property(get=__get__queuedTasks, put=__set__queuedTasks)) ::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  _queuedTasks;

 __declspec(property(get=get_AllTasks)) ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  AllTasks;

 __declspec(property(get=get_ActiveTasks)) ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  ActiveTasks;

constexpr void __set__tasks(::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* __get__tasks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*> __get__tasks() const;

constexpr void __set__queuedTasks(::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* __get__queuedTasks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*> __get__queuedTasks() const;

/// @brief Method get_AllTasks addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* get_AllTasks() ;

/// @brief Method get_ActiveTasks addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* get_ActiveTasks() ;

/// @brief Method AddTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddTask(TTask  task, int32_t  priority) ;

/// @brief Method AddTaskInternal addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddTaskInternal(TTask  task, int32_t  priority) ;

/// @brief Method RemoveTask addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveTask(TTask  task) ;

/// @brief Method OnFrameStart addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnFrameStart() ;

/// @brief Method UpdateAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateAll() ;

/// @brief Method UpdateRange addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateRange(int32_t  minPriority, int32_t  maxPriority) ;

/// @brief Method ClearRemovedTasks addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ClearRemovedTasks(::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  tasks) ;

/// @brief Method AddQueuedTasks addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddQueuedTasks() ;

/// @brief Method InsertTaskSorted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InsertTaskSorted(::Zenject::__TaskUpdater_1__TaskInfo<TTask>*  task) ;

/// @brief Method UpdateItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateItem(TTask  task) ;

static inline ::Zenject::TaskUpdater_1<TTask>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "TaskUpdater_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskUpdater_1(TaskUpdater_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskUpdater_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskUpdater_1(TaskUpdater_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TaskUpdater_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::TaskUpdater_1, "Zenject", "TaskUpdater`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__TaskUpdater_1__TaskInfo, "Zenject", "TaskUpdater`1/TaskInfo");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__TaskUpdater_1____c, "Zenject", "TaskUpdater`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__TaskUpdater_1____c__DisplayClass8_0, "Zenject", "TaskUpdater`1/<>c__DisplayClass8_0");
