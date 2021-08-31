// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FlexyFollow
  // [TokenAttribute] Offset: FFFFFFFF
  class FlexyFollow : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject _followObject
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* followObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public System.Single _followSpeed
    // Size: 0x4
    // Offset: 0x20
    float followSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Boolean _fixedXOffset
    // Size: 0x1
    // Offset: 0x30
    bool fixedXOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _fixedYOffset
    // Size: 0x1
    // Offset: 0x31
    bool fixedYOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _fixedZOffset
    // Size: 0x1
    // Offset: 0x32
    bool fixedZOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _useLocalPosition
    // Size: 0x1
    // Offset: 0x33
    bool useLocalPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLocalPosition and: followTransform
    char __padding6[0x4] = {};
    // private UnityEngine.Transform _followTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* followTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: FlexyFollow
    FlexyFollow(UnityEngine::GameObject* followObject_ = {}, float followSpeed_ = {}, UnityEngine::Vector3 offset_ = {}, bool fixedXOffset_ = {}, bool fixedYOffset_ = {}, bool fixedZOffset_ = {}, bool useLocalPosition_ = {}, UnityEngine::Transform* followTransform_ = {}, UnityEngine::Transform* transform_ = {}) noexcept : followObject{followObject_}, followSpeed{followSpeed_}, offset{offset_}, fixedXOffset{fixedXOffset_}, fixedYOffset{fixedYOffset_}, fixedZOffset{fixedZOffset_}, useLocalPosition{useLocalPosition_}, followTransform{followTransform_}, transform{transform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject _followObject
    UnityEngine::GameObject*& dyn__followObject();
    // Get instance field reference: public System.Single _followSpeed
    float& dyn__followSpeed();
    // Get instance field reference: public UnityEngine.Vector3 _offset
    UnityEngine::Vector3& dyn__offset();
    // Get instance field reference: public System.Boolean _fixedXOffset
    bool& dyn__fixedXOffset();
    // Get instance field reference: public System.Boolean _fixedYOffset
    bool& dyn__fixedYOffset();
    // Get instance field reference: public System.Boolean _fixedZOffset
    bool& dyn__fixedZOffset();
    // Get instance field reference: public System.Boolean _useLocalPosition
    bool& dyn__useLocalPosition();
    // Get instance field reference: private UnityEngine.Transform _followTransform
    UnityEngine::Transform*& dyn__followTransform();
    // Get instance field reference: private UnityEngine.Transform _transform
    UnityEngine::Transform*& dyn__transform();
    // protected System.Void Start()
    // Offset: 0x125FC68
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x125FDC4
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x125FF58
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlexyFollow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlexyFollow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlexyFollow*, creationType>()));
    }
  }; // FlexyFollow
  #pragma pack(pop)
  static check_size<sizeof(FlexyFollow), 64 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_FlexyFollowSizeCheck;
  static_assert(sizeof(FlexyFollow) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlexyFollow*, "", "FlexyFollow");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlexyFollow::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlexyFollow::*)()>(&GlobalNamespace::FlexyFollow::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlexyFollow*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlexyFollow::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlexyFollow::*)()>(&GlobalNamespace::FlexyFollow::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlexyFollow*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlexyFollow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
