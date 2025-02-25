// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Vector4s
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Vector4s/*, public System::ValueType*/ {
    public:
    // public System.Int16 x
    // Size: 0x2
    // Offset: 0x0
    int16_t x;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 y
    // Size: 0x2
    // Offset: 0x2
    int16_t y;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 z
    // Size: 0x2
    // Offset: 0x4
    int16_t z;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 w
    // Size: 0x2
    // Offset: 0x6
    int16_t w;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: Vector4s
    constexpr Vector4s(int16_t x_ = {}, int16_t y_ = {}, int16_t z_ = {}, int16_t w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/Vector4s zero
    static GlobalNamespace::OVRPlugin::Vector4s _get_zero();
    // Set static field: static public readonly OVRPlugin/Vector4s zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Vector4s value);
    // Get instance field reference: public System.Int16 x
    int16_t& dyn_x();
    // Get instance field reference: public System.Int16 y
    int16_t& dyn_y();
    // Get instance field reference: public System.Int16 z
    int16_t& dyn_z();
    // Get instance field reference: public System.Int16 w
    int16_t& dyn_w();
    // static private System.Void .cctor()
    // Offset: 0x163AB20
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x163A940
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/Vector4s
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Vector4s), 6 + sizeof(int16_t)> __GlobalNamespace_OVRPlugin_Vector4sSizeCheck;
  static_assert(sizeof(OVRPlugin::Vector4s) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Vector4s, "", "OVRPlugin/Vector4s");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Vector4s::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::Vector4s::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Vector4s), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Vector4s::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OVRPlugin::Vector4s::*)()>(&GlobalNamespace::OVRPlugin::Vector4s::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Vector4s), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
