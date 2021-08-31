// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: TaskInfo because it is already included!
  // Skipping declaration: <>c because it is already included!
  // Skipping declaration: <>c__DisplayClass8_0 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.TaskUpdater`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  template<typename TTask>
  class TaskUpdater_1 : public ::Il2CppObject {
    public:
    // Nested type: Zenject::TaskUpdater_1::TaskInfo<TTask>
    class TaskInfo;
    // Nested type: Zenject::TaskUpdater_1::$$c<TTask>
    class $$c;
    // Nested type: Zenject::TaskUpdater_1::$$c__DisplayClass8_0<TTask>
    class $$c__DisplayClass8_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.TaskUpdater`1/Zenject.TaskInfo
    // [TokenAttribute] Offset: FFFFFFFF
    class TaskInfo : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TaskUpdater_1<TTask>*;
      static constexpr std::string_view NESTED_NAME = "TaskInfo";
      static constexpr bool IS_VALUE_TYPE = false;
      // public TTask Task
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TTask Task;
      // public System.Int32 Priority
      // Size: 0x4
      // Offset: 0x0
      int Priority;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Boolean IsRemoved
      // Size: 0x1
      // Offset: 0x0
      bool IsRemoved;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Creating value type constructor for type: TaskInfo
      TaskInfo(TTask Task_ = {}, int Priority_ = {}, bool IsRemoved_ = {}) noexcept : Task{Task_}, Priority{Priority_}, IsRemoved{IsRemoved_} {}
      // Autogenerated instance field getter
      // Get instance field: public TTask Task
      TTask& dyn_Task() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::TaskInfo::dyn_Task");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Task"))->offset;
        return *reinterpret_cast<TTask*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 Priority
      int& dyn_Priority() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::TaskInfo::dyn_Priority");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Priority"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Boolean IsRemoved
      bool& dyn_IsRemoved() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::TaskInfo::dyn_IsRemoved");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "IsRemoved"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(TTask task, System.Int32 priority)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TaskUpdater_1<TTask>::TaskInfo* New_ctor(TTask task, int priority) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::TaskInfo::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TaskUpdater_1<TTask>::TaskInfo*, creationType>(task, priority)));
      }
    }; // Zenject.TaskUpdater`1/Zenject.TaskInfo
    // Could not write size check! Type: Zenject.TaskUpdater`1/Zenject.TaskInfo is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.TaskUpdater`1/Zenject.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TaskUpdater_1<TTask>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Creating value type constructor for type: $$c
      $$c() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.TaskUpdater`1/Zenject.<>c<TTask> <>9
      static typename Zenject::TaskUpdater_1<TTask>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::TaskUpdater_1<TTask>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.TaskUpdater`1/Zenject.<>c<TTask> <>9
      static void _set_$$9(typename Zenject::TaskUpdater_1<TTask>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>,TTask> <>9__7_0
      static System::Func_2<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*, TTask>* _get_$$9__7_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c::_get_$$9__7_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*, TTask>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9__7_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>,TTask> <>9__7_0
      static void _set_$$9__7_0(System::Func_2<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*, TTask>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c::_set_$$9__7_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9__7_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // TTask <AddTaskInternal>b__7_0(Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask> x)
      // Offset: 0xFFFFFFFF
      TTask $AddTaskInternal$b__7_0(typename Zenject::TaskUpdater_1<TTask>::TaskInfo* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c::<AddTaskInternal>b__7_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddTaskInternal>b__7_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<TTask, false>(___instance_arg, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TaskUpdater_1<TTask>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TaskUpdater_1<TTask>::$$c*, creationType>()));
      }
    }; // Zenject.TaskUpdater`1/Zenject.<>c
    // Could not write size check! Type: Zenject.TaskUpdater`1/Zenject.<>c is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.TaskUpdater`1/Zenject.<>c__DisplayClass8_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass8_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TaskUpdater_1<TTask>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass8_0";
      static constexpr bool IS_VALUE_TYPE = false;
      // public TTask task
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TTask task;
      // Creating value type constructor for type: $$c__DisplayClass8_0
      $$c__DisplayClass8_0(TTask task_ = {}) noexcept : task{task_} {}
      // Autogenerated instance field getter
      // Get instance field: public TTask task
      TTask& dyn_task() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c__DisplayClass8_0::dyn_task");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "task"))->offset;
        return *reinterpret_cast<TTask*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // System.Boolean <RemoveTask>b__0(Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask> x)
      // Offset: 0xFFFFFFFF
      bool $RemoveTask$b__0(typename Zenject::TaskUpdater_1<TTask>::TaskInfo* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c__DisplayClass8_0::<RemoveTask>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RemoveTask>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TaskUpdater_1<TTask>::$$c__DisplayClass8_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::$$c__DisplayClass8_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TaskUpdater_1<TTask>::$$c__DisplayClass8_0*, creationType>()));
      }
    }; // Zenject.TaskUpdater`1/Zenject.<>c__DisplayClass8_0
    // Could not write size check! Type: Zenject.TaskUpdater`1/Zenject.<>c__DisplayClass8_0 is generic, or has no fields that are valid for size checks!
    // private readonly System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>> _tasks
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* tasks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>> _queuedTasks
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* queuedTasks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*) == 0x8);
    // Creating value type constructor for type: TaskUpdater_1
    TaskUpdater_1(System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* tasks_ = {}, System::Collections::Generic::List_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* queuedTasks_ = {}) noexcept : tasks{tasks_}, queuedTasks{queuedTasks_} {}
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>> _tasks
    System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*& dyn__tasks() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::dyn__tasks");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_tasks"))->offset;
      return *reinterpret_cast<System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>> _queuedTasks
    System::Collections::Generic::List_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*& dyn__queuedTasks() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::dyn__queuedTasks");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_queuedTasks"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Collections.Generic.IEnumerable`1<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>> get_AllTasks()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* get_AllTasks() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::get_AllTasks");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_AllTasks", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*, false>(___instance_arg, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerable`1<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>> get_ActiveTasks()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* get_ActiveTasks() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::get_ActiveTasks");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ActiveTasks", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*, false>(___instance_arg, ___internal__method);
    }
    // public System.Void AddTask(TTask task, System.Int32 priority)
    // Offset: 0xFFFFFFFF
    void AddTask(TTask task, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::AddTask");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddTask", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task), ::il2cpp_utils::ExtractType(priority)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, task, priority);
    }
    // private System.Void AddTaskInternal(TTask task, System.Int32 priority)
    // Offset: 0xFFFFFFFF
    void AddTaskInternal(TTask task, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::AddTaskInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddTaskInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task), ::il2cpp_utils::ExtractType(priority)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, task, priority);
    }
    // public System.Void RemoveTask(TTask task)
    // Offset: 0xFFFFFFFF
    void RemoveTask(TTask task) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::RemoveTask");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveTask", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, task);
    }
    // public System.Void OnFrameStart()
    // Offset: 0xFFFFFFFF
    void OnFrameStart() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::OnFrameStart");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnFrameStart", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public System.Void UpdateAll()
    // Offset: 0xFFFFFFFF
    void UpdateAll() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::UpdateAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateAll", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public System.Void UpdateRange(System.Int32 minPriority, System.Int32 maxPriority)
    // Offset: 0xFFFFFFFF
    void UpdateRange(int minPriority, int maxPriority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::UpdateRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateRange", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(minPriority), ::il2cpp_utils::ExtractType(maxPriority)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, minPriority, maxPriority);
    }
    // private System.Void ClearRemovedTasks(System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask>> tasks)
    // Offset: 0xFFFFFFFF
    void ClearRemovedTasks(System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* tasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::ClearRemovedTasks");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearRemovedTasks", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(tasks)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, tasks);
    }
    // private System.Void AddQueuedTasks()
    // Offset: 0xFFFFFFFF
    void AddQueuedTasks() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::AddQueuedTasks");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddQueuedTasks", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Void InsertTaskSorted(Zenject.TaskUpdater`1/Zenject.TaskInfo<TTask> task)
    // Offset: 0xFFFFFFFF
    void InsertTaskSorted(typename Zenject::TaskUpdater_1<TTask>::TaskInfo* task) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::InsertTaskSorted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InsertTaskSorted", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, task);
    }
    // protected System.Void UpdateItem(TTask task)
    // Offset: 0xFFFFFFFF
    void UpdateItem(TTask task) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::UpdateItem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, task);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskUpdater_1<TTask>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TaskUpdater_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskUpdater_1<TTask>*, creationType>()));
    }
  }; // Zenject.TaskUpdater`1
  // Could not write size check! Type: Zenject.TaskUpdater`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::TaskUpdater_1, "Zenject", "TaskUpdater`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
