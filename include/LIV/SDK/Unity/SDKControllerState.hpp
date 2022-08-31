// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.SDKVector3
#include "LIV/SDK/Unity/SDKVector3.hpp"
// Including type: LIV.SDK.Unity.SDKQuaternion
#include "LIV/SDK/Unity/SDKQuaternion.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKControllerState
  struct SDKControllerState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKControllerState, "LIV.SDK.Unity", "SDKControllerState");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x8C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKControllerState
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKControllerState/*, public ::System::ValueType*/ {
    public:
    public:
    // public LIV.SDK.Unity.SDKVector3 hmdposition
    // Size: 0xC
    // Offset: 0x0
    ::LIV::SDK::Unity::SDKVector3 hmdposition;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKQuaternion hmdrotation
    // Size: 0x10
    // Offset: 0xC
    ::LIV::SDK::Unity::SDKQuaternion hmdrotation;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKQuaternion) == 0x10);
    // public LIV.SDK.Unity.SDKVector3 calibrationcameraposition
    // Size: 0xC
    // Offset: 0x1C
    ::LIV::SDK::Unity::SDKVector3 calibrationcameraposition;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKQuaternion calibrationcamerarotation
    // Size: 0x10
    // Offset: 0x28
    ::LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKQuaternion) == 0x10);
    // public LIV.SDK.Unity.SDKVector3 cameraposition
    // Size: 0xC
    // Offset: 0x38
    ::LIV::SDK::Unity::SDKVector3 cameraposition;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKQuaternion camerarotation
    // Size: 0x10
    // Offset: 0x44
    ::LIV::SDK::Unity::SDKQuaternion camerarotation;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKQuaternion) == 0x10);
    // public LIV.SDK.Unity.SDKVector3 leftposition
    // Size: 0xC
    // Offset: 0x54
    ::LIV::SDK::Unity::SDKVector3 leftposition;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKQuaternion leftrotation
    // Size: 0x10
    // Offset: 0x60
    ::LIV::SDK::Unity::SDKQuaternion leftrotation;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKQuaternion) == 0x10);
    // public LIV.SDK.Unity.SDKVector3 rightposition
    // Size: 0xC
    // Offset: 0x70
    ::LIV::SDK::Unity::SDKVector3 rightposition;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKQuaternion rightrotation
    // Size: 0x10
    // Offset: 0x7C
    ::LIV::SDK::Unity::SDKQuaternion rightrotation;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKQuaternion) == 0x10);
    public:
    // Creating value type constructor for type: SDKControllerState
    constexpr SDKControllerState(::LIV::SDK::Unity::SDKVector3 hmdposition_ = {}, ::LIV::SDK::Unity::SDKQuaternion hmdrotation_ = {}, ::LIV::SDK::Unity::SDKVector3 calibrationcameraposition_ = {}, ::LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation_ = {}, ::LIV::SDK::Unity::SDKVector3 cameraposition_ = {}, ::LIV::SDK::Unity::SDKQuaternion camerarotation_ = {}, ::LIV::SDK::Unity::SDKVector3 leftposition_ = {}, ::LIV::SDK::Unity::SDKQuaternion leftrotation_ = {}, ::LIV::SDK::Unity::SDKVector3 rightposition_ = {}, ::LIV::SDK::Unity::SDKQuaternion rightrotation_ = {}) noexcept : hmdposition{hmdposition_}, hmdrotation{hmdrotation_}, calibrationcameraposition{calibrationcameraposition_}, calibrationcamerarotation{calibrationcamerarotation_}, cameraposition{cameraposition_}, camerarotation{camerarotation_}, leftposition{leftposition_}, leftrotation{leftrotation_}, rightposition{rightposition_}, rightrotation{rightrotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 hmdposition
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_hmdposition();
    // Get instance field reference: public LIV.SDK.Unity.SDKQuaternion hmdrotation
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKQuaternion& dyn_hmdrotation();
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 calibrationcameraposition
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_calibrationcameraposition();
    // Get instance field reference: public LIV.SDK.Unity.SDKQuaternion calibrationcamerarotation
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKQuaternion& dyn_calibrationcamerarotation();
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 cameraposition
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_cameraposition();
    // Get instance field reference: public LIV.SDK.Unity.SDKQuaternion camerarotation
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKQuaternion& dyn_camerarotation();
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 leftposition
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_leftposition();
    // Get instance field reference: public LIV.SDK.Unity.SDKQuaternion leftrotation
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKQuaternion& dyn_leftrotation();
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 rightposition
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_rightposition();
    // Get instance field reference: public LIV.SDK.Unity.SDKQuaternion rightrotation
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKQuaternion& dyn_rightrotation();
    // static public LIV.SDK.Unity.SDKControllerState get_empty()
    // Offset: 0x2A89900
    static ::LIV::SDK::Unity::SDKControllerState get_empty();
    // public override System.String ToString()
    // Offset: 0x2A89970
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKControllerState
  #pragma pack(pop)
  static check_size<sizeof(SDKControllerState), 124 + sizeof(::LIV::SDK::Unity::SDKQuaternion)> __LIV_SDK_Unity_SDKControllerStateSizeCheck;
  static_assert(sizeof(SDKControllerState) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKControllerState::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKControllerState (*)()>(&LIV::SDK::Unity::SDKControllerState::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKControllerState), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKControllerState::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKControllerState::*)()>(&LIV::SDK::Unity::SDKControllerState::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKControllerState), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
