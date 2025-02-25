// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeZoneInfo/System.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA00D0
  class TimeZoneInfo::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.TimeZoneInfo/System.<>c <>9
    static System::TimeZoneInfo::$$c* _get_$$9();
    // Set static field: static public readonly System.TimeZoneInfo/System.<>c <>9
    static void _set_$$9(System::TimeZoneInfo::$$c* value);
    // Get static field: static public System.Comparison`1<System.TimeZoneInfo/System.AdjustmentRule> <>9__19_0
    static System::Comparison_1<System::TimeZoneInfo::AdjustmentRule*>* _get_$$9__19_0();
    // Set static field: static public System.Comparison`1<System.TimeZoneInfo/System.AdjustmentRule> <>9__19_0
    static void _set_$$9__19_0(System::Comparison_1<System::TimeZoneInfo::AdjustmentRule*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1890170
    static void _cctor();
    // System.Int32 <CreateLocalUnity>b__19_0(System.TimeZoneInfo/System.AdjustmentRule rule1, System.TimeZoneInfo/System.AdjustmentRule rule2)
    // Offset: 0x18901DC
    int $CreateLocalUnity$b__19_0(System::TimeZoneInfo::AdjustmentRule* rule1, System::TimeZoneInfo::AdjustmentRule* rule2);
    // public System.Void .ctor()
    // Offset: 0x18901D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZoneInfo::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo::$$c*, creationType>()));
    }
  }; // System.TimeZoneInfo/System.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo::$$c*, "System", "TimeZoneInfo/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeZoneInfo::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::TimeZoneInfo::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::$$c::$CreateLocalUnity$b__19_0
// Il2CppName: <CreateLocalUnity>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeZoneInfo::$$c::*)(System::TimeZoneInfo::AdjustmentRule*, System::TimeZoneInfo::AdjustmentRule*)>(&System::TimeZoneInfo::$$c::$CreateLocalUnity$b__19_0)> {
  static const MethodInfo* get() {
    static auto* rule1 = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/AdjustmentRule")->byval_arg;
    static auto* rule2 = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/AdjustmentRule")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::$$c*), "<CreateLocalUnity>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rule1, rule2});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
