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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VRCenterAdjust
  // [TokenAttribute] Offset: FFFFFFFF
  class VRCenterAdjust : public UnityEngine::MonoBehaviour {
    public:
    // private Vector3SO _roomCenter
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Vector3SO* roomCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // private FloatSO _roomRotation
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FloatSO* roomRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // Creating value type constructor for type: VRCenterAdjust
    VRCenterAdjust(GlobalNamespace::Vector3SO* roomCenter_ = {}, GlobalNamespace::FloatSO* roomRotation_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}) noexcept : roomCenter{roomCenter_}, roomRotation{roomRotation_}, mainSettingsModel{mainSettingsModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private Vector3SO _roomCenter
    GlobalNamespace::Vector3SO* _get__roomCenter();
    // Set instance field: private Vector3SO _roomCenter
    void _set__roomCenter(GlobalNamespace::Vector3SO* value);
    // Get instance field: private FloatSO _roomRotation
    GlobalNamespace::FloatSO* _get__roomRotation();
    // Set instance field: private FloatSO _roomRotation
    void _set__roomRotation(GlobalNamespace::FloatSO* value);
    // Get instance field: private MainSettingsModelSO _mainSettingsModel
    GlobalNamespace::MainSettingsModelSO* _get__mainSettingsModel();
    // Set instance field: private MainSettingsModelSO _mainSettingsModel
    void _set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO* value);
    // protected System.Void Awake()
    // Offset: 0x1359778
    void Awake();
    // protected System.Void Start()
    // Offset: 0x13597DC
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x13599AC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1359A84
    void OnDisable();
    // private System.Void HandleRoomCenterDidChange()
    // Offset: 0x1359B5C
    void HandleRoomCenterDidChange();
    // private System.Void HandleRoomRotationDidChange()
    // Offset: 0x1359BD4
    void HandleRoomRotationDidChange();
    // protected System.Void Update()
    // Offset: 0x1359C80
    void Update();
    // public System.Void ResetRoom()
    // Offset: 0x1359900
    void ResetRoom();
    // public System.Void .ctor()
    // Offset: 0x1359CBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRCenterAdjust* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRCenterAdjust::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRCenterAdjust*, creationType>()));
    }
  }; // VRCenterAdjust
  #pragma pack(pop)
  static check_size<sizeof(VRCenterAdjust), 40 + sizeof(GlobalNamespace::MainSettingsModelSO*)> __GlobalNamespace_VRCenterAdjustSizeCheck;
  static_assert(sizeof(VRCenterAdjust) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRCenterAdjust*, "", "VRCenterAdjust");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::HandleRoomCenterDidChange
// Il2CppName: HandleRoomCenterDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::HandleRoomCenterDidChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "HandleRoomCenterDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::HandleRoomRotationDidChange
// Il2CppName: HandleRoomRotationDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::HandleRoomRotationDidChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "HandleRoomRotationDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::ResetRoom
// Il2CppName: ResetRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRCenterAdjust::*)()>(&GlobalNamespace::VRCenterAdjust::ResetRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRCenterAdjust*), "ResetRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRCenterAdjust::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
