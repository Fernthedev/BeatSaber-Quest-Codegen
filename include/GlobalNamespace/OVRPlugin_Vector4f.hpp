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
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Vector4f
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Vector4f/*, public System::ValueType*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0xC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Vector4f
    constexpr Vector4f(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/Vector4f zero
    static GlobalNamespace::OVRPlugin::Vector4f _get_zero();
    // Set static field: static public readonly OVRPlugin/Vector4f zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Vector4f value);
    // Get instance field: public System.Single x
    float _get_x();
    // Set instance field: public System.Single x
    void _set_x(float value);
    // Get instance field: public System.Single y
    float _get_y();
    // Set instance field: public System.Single y
    void _set_y(float value);
    // Get instance field: public System.Single z
    float _get_z();
    // Set instance field: public System.Single z
    void _set_z(float value);
    // Get instance field: public System.Single w
    float _get_w();
    // Set instance field: public System.Single w
    void _set_w(float value);
    // static private System.Void .cctor()
    // Offset: 0x16330BC
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x1632EDC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/Vector4f
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Vector4f), 12 + sizeof(float)> __GlobalNamespace_OVRPlugin_Vector4fSizeCheck;
  static_assert(sizeof(OVRPlugin::Vector4f) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Vector4f, "", "OVRPlugin/Vector4f");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Vector4f::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::Vector4f::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Vector4f), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Vector4f::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OVRPlugin::Vector4f::*)()>(&GlobalNamespace::OVRPlugin::Vector4f::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Vector4f), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
