// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRRaycaster
#include "GlobalNamespace/OVRRaycaster.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRRaycaster/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRRaycaster::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly OVRRaycaster/<>c <>9
    static GlobalNamespace::OVRRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly OVRRaycaster/<>c <>9
    static void _set_$$9(GlobalNamespace::OVRRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<OVRRaycaster/RaycastHit> <>9__16_0
    static System::Comparison_1<GlobalNamespace::OVRRaycaster::RaycastHit>* _get_$$9__16_0();
    // Set static field: static public System.Comparison`1<OVRRaycaster/RaycastHit> <>9__16_0
    static void _set_$$9__16_0(System::Comparison_1<GlobalNamespace::OVRRaycaster::RaycastHit>* value);
    // static private System.Void .cctor()
    // Offset: 0x16355B0
    static void _cctor();
    // System.Int32 <GraphicRaycast>b__16_0(OVRRaycaster/RaycastHit g1, OVRRaycaster/RaycastHit g2)
    // Offset: 0x163561C
    int $GraphicRaycast$b__16_0(GlobalNamespace::OVRRaycaster::RaycastHit g1, GlobalNamespace::OVRRaycaster::RaycastHit g2);
    // public System.Void .ctor()
    // Offset: 0x1635614
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRRaycaster::$$c*, creationType>()));
    }
  }; // OVRRaycaster/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster::$$c*, "", "OVRRaycaster/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRRaycaster::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::$$c::$GraphicRaycast$b__16_0
// Il2CppName: <GraphicRaycast>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRRaycaster::$$c::*)(GlobalNamespace::OVRRaycaster::RaycastHit, GlobalNamespace::OVRRaycaster::RaycastHit)>(&GlobalNamespace::OVRRaycaster::$$c::$GraphicRaycast$b__16_0)> {
  static const MethodInfo* get() {
    static auto* g1 = &::il2cpp_utils::GetClassFromName("", "OVRRaycaster/RaycastHit")->byval_arg;
    static auto* g2 = &::il2cpp_utils::GetClassFromName("", "OVRRaycaster/RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRaycaster::$$c*), "<GraphicRaycast>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g1, g2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRaycaster::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
