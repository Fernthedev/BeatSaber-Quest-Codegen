// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Platform
  // [TokenAttribute] Offset: FFFFFFFF
  class Platform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Platform
    Platform() noexcept {}
    // Get static field: static private System.Boolean checkedOS
    static bool _get_checkedOS();
    // Set static field: static private System.Boolean checkedOS
    static void _set_checkedOS(bool value);
    // Get static field: static private System.Boolean isMacOS
    static bool _get_isMacOS();
    // Set static field: static private System.Boolean isMacOS
    static void _set_isMacOS(bool value);
    // Get static field: static private System.Boolean isFreeBSD
    static bool _get_isFreeBSD();
    // Set static field: static private System.Boolean isFreeBSD
    static void _set_isFreeBSD(bool value);
    // static public System.Boolean get_IsMacOS()
    // Offset: 0x15E61C0
    static bool get_IsMacOS();
    // static public System.Boolean get_IsFreeBSD()
    // Offset: 0x15E62A8
    static bool get_IsFreeBSD();
    // static private System.Int32 uname(System.IntPtr buf)
    // Offset: 0x15E5F74
    static int uname(System::IntPtr buf);
    // static private System.Void CheckOS()
    // Offset: 0x15E5FF4
    static void CheckOS();
  }; // System.Platform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Platform*, "System", "Platform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Platform::get_IsMacOS
// Il2CppName: get_IsMacOS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsMacOS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "get_IsMacOS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Platform::get_IsFreeBSD
// Il2CppName: get_IsFreeBSD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsFreeBSD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "get_IsFreeBSD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Platform::uname
// Il2CppName: uname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr)>(&System::Platform::uname)> {
  static const MethodInfo* get() {
    static auto* buf = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "uname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf});
  }
};
// Writing MetadataGetter for method: System::Platform::CheckOS
// Il2CppName: CheckOS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Platform::CheckOS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Platform*), "CheckOS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
