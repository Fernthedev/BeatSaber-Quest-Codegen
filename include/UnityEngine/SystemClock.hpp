// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SystemClock
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class SystemClock : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SystemClock
    SystemClock() noexcept {}
    // Get static field: static private readonly System.DateTime s_Epoch
    static System::DateTime _get_s_Epoch();
    // Set static field: static private readonly System.DateTime s_Epoch
    static void _set_s_Epoch(System::DateTime value);
    // static public System.DateTime get_now()
    // Offset: 0x23569AC
    static System::DateTime get_now();
    // static private System.Void .cctor()
    // Offset: 0x2356A0C
    static void _cctor();
  }; // UnityEngine.SystemClock
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SystemClock*, "UnityEngine", "SystemClock");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SystemClock::get_now
// Il2CppName: get_now
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)()>(&UnityEngine::SystemClock::get_now)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemClock*), "get_now", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SystemClock::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SystemClock::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SystemClock*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
