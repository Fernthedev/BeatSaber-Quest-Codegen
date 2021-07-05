// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: TimerCallback
  class TimerCallback;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.Task/<>c
  // [CompilerGeneratedAttribute] Offset: D7D388
  class Task::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Threading.Tasks.Task/<>c <>9
    static System::Threading::Tasks::Task::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.Task/<>c <>9
    static void _set_$$9(System::Threading::Tasks::Task::$$c* value);
    // Get static field: static public System.Action`1<System.Object> <>9__276_0
    static System::Action_1<::Il2CppObject*>* _get_$$9__276_0();
    // Set static field: static public System.Action`1<System.Object> <>9__276_0
    static void _set_$$9__276_0(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Threading.TimerCallback <>9__276_1
    static System::Threading::TimerCallback* _get_$$9__276_1();
    // Set static field: static public System.Threading.TimerCallback <>9__276_1
    static void _set_$$9__276_1(System::Threading::TimerCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x188CE14
    static void _cctor();
    // System.Void <Delay>b__276_0(System.Object state)
    // Offset: 0x188CE80
    void $Delay$b__276_0(::Il2CppObject* state);
    // System.Void <Delay>b__276_1(System.Object state)
    // Offset: 0x188D030
    void $Delay$b__276_1(::Il2CppObject* state);
    // System.Threading.Tasks.Task/ContingentProperties <.cctor>b__295_0()
    // Offset: 0x188D098
    System::Threading::Tasks::Task::ContingentProperties* $_cctor$b__295_0();
    // System.Boolean <.cctor>b__295_1(System.Threading.Tasks.Task t)
    // Offset: 0x188D134
    bool $_cctor$b__295_1(System::Threading::Tasks::Task* t);
    // System.Boolean <.cctor>b__295_2(System.Object tc)
    // Offset: 0x188D150
    bool $_cctor$b__295_2(::Il2CppObject* tc);
    // public System.Void .ctor()
    // Offset: 0x188CE78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Task::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::$$c*, creationType>()));
    }
  }; // System.Threading.Tasks.Task/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::$$c*, "System.Threading.Tasks", "Task/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::Task::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c::$Delay$b__276_0
// Il2CppName: <Delay>b__276_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::$$c::*)(::Il2CppObject*)>(&System::Threading::Tasks::Task::$$c::$Delay$b__276_0)> {
  const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::$$c*), "<Delay>b__276_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c::$Delay$b__276_1
// Il2CppName: <Delay>b__276_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::$$c::*)(::Il2CppObject*)>(&System::Threading::Tasks::Task::$$c::$Delay$b__276_1)> {
  const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::$$c*), "<Delay>b__276_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c::$_cctor$b__295_0
// Il2CppName: <.cctor>b__295_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task::ContingentProperties* (System::Threading::Tasks::Task::$$c::*)()>(&System::Threading::Tasks::Task::$$c::$_cctor$b__295_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::$$c*), "<.cctor>b__295_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c::$_cctor$b__295_1
// Il2CppName: <.cctor>b__295_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::$$c::*)(System::Threading::Tasks::Task*)>(&System::Threading::Tasks::Task::$$c::$_cctor$b__295_1)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::$$c*), "<.cctor>b__295_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c::$_cctor$b__295_2
// Il2CppName: <.cctor>b__295_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::$$c::*)(::Il2CppObject*)>(&System::Threading::Tasks::Task::$$c::$_cctor$b__295_2)> {
  const MethodInfo* get() {
    static auto* tc = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::$$c*), "<.cctor>b__295_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tc});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
