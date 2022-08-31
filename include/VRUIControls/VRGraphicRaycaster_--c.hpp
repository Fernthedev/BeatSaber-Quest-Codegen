// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRUIControls.VRGraphicRaycaster
#include "VRUIControls/VRGraphicRaycaster.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRUIControls::VRGraphicRaycaster::$$c);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster::$$c*, "VRUIControls", "VRGraphicRaycaster/<>c");
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.VRGraphicRaycaster/VRUIControls.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VRGraphicRaycaster::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VRUIControls.VRGraphicRaycaster/VRUIControls.<>c <>9
    static ::VRUIControls::VRGraphicRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly VRUIControls.VRGraphicRaycaster/VRUIControls.<>c <>9
    static void _set_$$9(::VRUIControls::VRGraphicRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult> <>9__12_0
    static ::System::Comparison_1<::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* _get_$$9__12_0();
    // Set static field: static public System.Comparison`1<VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult> <>9__12_0
    static void _set_$$9__12_0(::System::Comparison_1<::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* value);
    // static private System.Void .cctor()
    // Offset: 0x2A93400
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2A93464
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRGraphicRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRUIControls::VRGraphicRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRGraphicRaycaster::$$c*, creationType>()));
    }
    // System.Int32 <RaycastCanvas>b__12_0(VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult g1, VRUIControls.VRGraphicRaycaster/VRUIControls.VRGraphicRaycastResult g2)
    // Offset: 0x2A9346C
    int $RaycastCanvas$b__12_0(::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult g1, ::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult g2);
  }; // VRUIControls.VRGraphicRaycaster/VRUIControls.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VRUIControls::VRGraphicRaycaster::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRGraphicRaycaster::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::$$c::$RaycastCanvas$b__12_0
// Il2CppName: <RaycastCanvas>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VRUIControls::VRGraphicRaycaster::$$c::*)(::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult, ::VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult)>(&VRUIControls::VRGraphicRaycaster::$$c::$RaycastCanvas$b__12_0)> {
  static const MethodInfo* get() {
    static auto* g1 = &::il2cpp_utils::GetClassFromName("VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult")->byval_arg;
    static auto* g2 = &::il2cpp_utils::GetClassFromName("VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRGraphicRaycaster::$$c*), "<RaycastCanvas>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g1, g2});
  }
};
