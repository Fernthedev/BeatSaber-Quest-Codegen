// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HeadBodyOffsetSO
  class HeadBodyOffsetSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::AvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseController*, "", "AvatarPoseController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseController
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPoseController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate
    class PositionsWillBeSetDelegate;
    // Nested type: GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate
    class LatePositionsWillBeSetDelegate;
    // Nested type: GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate
    class RotationsWillBeSetDelegate;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // protected UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Transform _leftHandTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Transform _rightHandTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Transform _bodyTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* bodyTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected HeadBodyOffsetSO _headBodyOffset
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::HeadBodyOffsetSO* headBodyOffset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HeadBodyOffsetSO*) == 0x8);
    // private AvatarPoseController/PositionsWillBeSetDelegate <earlyPositionsWillBeSetCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* earlyPositionsWillBeSetCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*) == 0x8);
    // private AvatarPoseController/LatePositionsWillBeSetDelegate <latePositionsWillBeSetCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* latePositionsWillBeSetCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate*) == 0x8);
    // private AvatarPoseController/RotationsWillBeSetDelegate <earlyRotationsWillBeSetCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* earlyRotationsWillBeSetCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*) == 0x8);
    // private System.Action`1<UnityEngine.Vector3> didUpdatePoseEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<UnityEngine::Vector3>* didUpdatePoseEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Vector3>*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected UnityEngine.Transform _headTransform
    UnityEngine::Transform*& dyn__headTransform();
    // Get instance field reference: protected UnityEngine.Transform _leftHandTransform
    UnityEngine::Transform*& dyn__leftHandTransform();
    // Get instance field reference: protected UnityEngine.Transform _rightHandTransform
    UnityEngine::Transform*& dyn__rightHandTransform();
    // Get instance field reference: protected UnityEngine.Transform _bodyTransform
    UnityEngine::Transform*& dyn__bodyTransform();
    // Get instance field reference: protected HeadBodyOffsetSO _headBodyOffset
    GlobalNamespace::HeadBodyOffsetSO*& dyn__headBodyOffset();
    // Get instance field reference: private AvatarPoseController/PositionsWillBeSetDelegate <earlyPositionsWillBeSetCallback>k__BackingField
    GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*& dyn_$earlyPositionsWillBeSetCallback$k__BackingField();
    // Get instance field reference: private AvatarPoseController/LatePositionsWillBeSetDelegate <latePositionsWillBeSetCallback>k__BackingField
    GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate*& dyn_$latePositionsWillBeSetCallback$k__BackingField();
    // Get instance field reference: private AvatarPoseController/RotationsWillBeSetDelegate <earlyRotationsWillBeSetCallback>k__BackingField
    GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*& dyn_$earlyRotationsWillBeSetCallback$k__BackingField();
    // Get instance field reference: private System.Action`1<UnityEngine.Vector3> didUpdatePoseEvent
    System::Action_1<UnityEngine::Vector3>*& dyn_didUpdatePoseEvent();
    // public AvatarPoseController/PositionsWillBeSetDelegate get_earlyPositionsWillBeSetCallback()
    // Offset: 0x1494024
    GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* get_earlyPositionsWillBeSetCallback();
    // public System.Void set_earlyPositionsWillBeSetCallback(AvatarPoseController/PositionsWillBeSetDelegate value)
    // Offset: 0x149402C
    void set_earlyPositionsWillBeSetCallback(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* value);
    // public AvatarPoseController/LatePositionsWillBeSetDelegate get_latePositionsWillBeSetCallback()
    // Offset: 0x1494034
    GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* get_latePositionsWillBeSetCallback();
    // public System.Void set_latePositionsWillBeSetCallback(AvatarPoseController/LatePositionsWillBeSetDelegate value)
    // Offset: 0x149403C
    void set_latePositionsWillBeSetCallback(GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* value);
    // public AvatarPoseController/RotationsWillBeSetDelegate get_earlyRotationsWillBeSetCallback()
    // Offset: 0x1494044
    GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* get_earlyRotationsWillBeSetCallback();
    // public System.Void set_earlyRotationsWillBeSetCallback(AvatarPoseController/RotationsWillBeSetDelegate value)
    // Offset: 0x149404C
    void set_earlyRotationsWillBeSetCallback(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* value);
    // public System.Void add_didUpdatePoseEvent(System.Action`1<UnityEngine.Vector3> value)
    // Offset: 0x14938DC
    void add_didUpdatePoseEvent(System::Action_1<UnityEngine::Vector3>* value);
    // public System.Void remove_didUpdatePoseEvent(System.Action`1<UnityEngine.Vector3> value)
    // Offset: 0x1493A58
    void remove_didUpdatePoseEvent(System::Action_1<UnityEngine::Vector3>* value);
    // public System.Void UpdateTransforms(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation)
    // Offset: 0x1494054
    void UpdateTransforms(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation);
    // public System.Void UpdateBodyPosition()
    // Offset: 0x1487F74
    void UpdateBodyPosition();
    // public System.Void .ctor()
    // Offset: 0x1494DD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPoseController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseController*, creationType>()));
    }
  }; // AvatarPoseController
  #pragma pack(pop)
  static check_size<sizeof(AvatarPoseController), 88 + sizeof(System::Action_1<UnityEngine::Vector3>*)> __GlobalNamespace_AvatarPoseControllerSizeCheck;
  static_assert(sizeof(AvatarPoseController) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::get_earlyPositionsWillBeSetCallback
// Il2CppName: get_earlyPositionsWillBeSetCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* (GlobalNamespace::AvatarPoseController::*)()>(&GlobalNamespace::AvatarPoseController::get_earlyPositionsWillBeSetCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "get_earlyPositionsWillBeSetCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::set_earlyPositionsWillBeSetCallback
// Il2CppName: set_earlyPositionsWillBeSetCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::*)(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*)>(&GlobalNamespace::AvatarPoseController::set_earlyPositionsWillBeSetCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "AvatarPoseController/PositionsWillBeSetDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "set_earlyPositionsWillBeSetCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::get_latePositionsWillBeSetCallback
// Il2CppName: get_latePositionsWillBeSetCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* (GlobalNamespace::AvatarPoseController::*)()>(&GlobalNamespace::AvatarPoseController::get_latePositionsWillBeSetCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "get_latePositionsWillBeSetCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::set_latePositionsWillBeSetCallback
// Il2CppName: set_latePositionsWillBeSetCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::*)(GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate*)>(&GlobalNamespace::AvatarPoseController::set_latePositionsWillBeSetCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "AvatarPoseController/LatePositionsWillBeSetDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "set_latePositionsWillBeSetCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::get_earlyRotationsWillBeSetCallback
// Il2CppName: get_earlyRotationsWillBeSetCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* (GlobalNamespace::AvatarPoseController::*)()>(&GlobalNamespace::AvatarPoseController::get_earlyRotationsWillBeSetCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "get_earlyRotationsWillBeSetCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::set_earlyRotationsWillBeSetCallback
// Il2CppName: set_earlyRotationsWillBeSetCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::*)(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*)>(&GlobalNamespace::AvatarPoseController::set_earlyRotationsWillBeSetCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "AvatarPoseController/RotationsWillBeSetDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "set_earlyRotationsWillBeSetCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::add_didUpdatePoseEvent
// Il2CppName: add_didUpdatePoseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::*)(System::Action_1<UnityEngine::Vector3>*)>(&GlobalNamespace::AvatarPoseController::add_didUpdatePoseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "add_didUpdatePoseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::remove_didUpdatePoseEvent
// Il2CppName: remove_didUpdatePoseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::*)(System::Action_1<UnityEngine::Vector3>*)>(&GlobalNamespace::AvatarPoseController::remove_didUpdatePoseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "remove_didUpdatePoseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::UpdateTransforms
// Il2CppName: UpdateTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Quaternion, UnityEngine::Quaternion)>(&GlobalNamespace::AvatarPoseController::UpdateTransforms)> {
  static const MethodInfo* get() {
    static auto* headPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* leftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* headRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* leftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "UpdateTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headPosition, leftHandPosition, rightHandPosition, headRotation, leftHandRotation, rightHandRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::UpdateBodyPosition
// Il2CppName: UpdateBodyPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::*)()>(&GlobalNamespace::AvatarPoseController::UpdateBodyPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController*), "UpdateBodyPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
