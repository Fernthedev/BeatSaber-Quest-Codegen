// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
#include "System/Threading/Tasks/SynchronizationContextAwaitTaskContinuation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c
  // [CompilerGeneratedAttribute] Offset: D7D3D8
  class SynchronizationContextAwaitTaskContinuation::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c <>9
    static System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c <>9
    static void _set_$$9(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x18B4598
    static void _cctor();
    // System.Void <.cctor>b__7_0(System.Object state)
    // Offset: 0x18B4604
    void $_cctor$b__7_0(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x18B45FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizationContextAwaitTaskContinuation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizationContextAwaitTaskContinuation::$$c*, creationType>()));
    }
  }; // System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::$_cctor$b__7_0
// Il2CppName: <.cctor>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::*)(::Il2CppObject*)>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::$_cctor$b__7_0)> {
  const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c*), "<.cctor>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
