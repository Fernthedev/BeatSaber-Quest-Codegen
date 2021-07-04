// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: HapticFeedbackController
  class HapticFeedbackController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::HapticFeedbackController::RumbleData
    class RumbleData;
    // private BoolSO _controllersRumbleEnabled
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BoolSO* controllersRumbleEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private Libraries.HM.HMLib.VR.HapticPresetSO _continuousRumblePreset
    // Size: 0x8
    // Offset: 0x20
    Libraries::HM::HMLib::VR::HapticPresetSO* continuousRumblePreset;
    // Field size check
    static_assert(sizeof(Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDE3CA0
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,System.Collections.Generic.Dictionary`2<System.Object,HapticFeedbackController/RumbleData>> _rumblesByNode
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode, System::Collections::Generic::Dictionary_2<::Il2CppObject*, GlobalNamespace::HapticFeedbackController::RumbleData*>*>* rumblesByNode;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode, System::Collections::Generic::Dictionary_2<::Il2CppObject*, GlobalNamespace::HapticFeedbackController::RumbleData*>*>*) == 0x8);
    // Creating value type constructor for type: HapticFeedbackController
    HapticFeedbackController(GlobalNamespace::BoolSO* controllersRumbleEnabled_ = {}, Libraries::HM::HMLib::VR::HapticPresetSO* continuousRumblePreset_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode, System::Collections::Generic::Dictionary_2<::Il2CppObject*, GlobalNamespace::HapticFeedbackController::RumbleData*>*>* rumblesByNode_ = {}) noexcept : controllersRumbleEnabled{controllersRumbleEnabled_}, continuousRumblePreset{continuousRumblePreset_}, vrPlatformHelper{vrPlatformHelper_}, rumblesByNode{rumblesByNode_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kContinuousRumbleFrameDuration
    static constexpr const float kContinuousRumbleFrameDuration = 0.016666668;
    // Get static field: static private System.Single kContinuousRumbleFrameDuration
    static float _get_kContinuousRumbleFrameDuration();
    // Set static field: static private System.Single kContinuousRumbleFrameDuration
    static void _set_kContinuousRumbleFrameDuration(float value);
    // public Libraries.HM.HMLib.VR.HapticPresetSO get_continuousRumblePreset()
    // Offset: 0x124B048
    Libraries::HM::HMLib::VR::HapticPresetSO* get_continuousRumblePreset();
    // protected System.Void Awake()
    // Offset: 0x124B050
    void Awake();
    // public System.Void PlayHapticFeedback(UnityEngine.XR.XRNode node, Libraries.HM.HMLib.VR.HapticPresetSO hapticPreset)
    // Offset: 0x124B118
    void PlayHapticFeedback(UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);
    // private System.Void Update()
    // Offset: 0x124B2FC
    void Update();
    // private System.Void UpdateRumbles()
    // Offset: 0x124B300
    void UpdateRumbles();
    // private HapticFeedbackController/RumbleData GetRumble(UnityEngine.XR.XRNode node, System.Object preset)
    // Offset: 0x124B200
    GlobalNamespace::HapticFeedbackController::RumbleData* GetRumble(UnityEngine::XR::XRNode node, ::Il2CppObject* preset);
    // public System.Void .ctor()
    // Offset: 0x124B70C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HapticFeedbackController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HapticFeedbackController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HapticFeedbackController*, creationType>()));
    }
  }; // HapticFeedbackController
  #pragma pack(pop)
  static check_size<sizeof(HapticFeedbackController), 48 + sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode, System::Collections::Generic::Dictionary_2<::Il2CppObject*, GlobalNamespace::HapticFeedbackController::RumbleData*>*>*)> __GlobalNamespace_HapticFeedbackControllerSizeCheck;
  static_assert(sizeof(HapticFeedbackController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HapticFeedbackController*, "", "HapticFeedbackController");
// Writing includes for template specializations
#include "Libraries/HM/HMLib/VR/HapticPresetSO.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset
// Il2CppName: get_continuousRumblePreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Libraries::HM::HMLib::VR::HapticPresetSO* (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "get_continuousRumblePreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::PlayHapticFeedback
// Il2CppName: PlayHapticFeedback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)(UnityEngine::XR::XRNode, Libraries::HM::HMLib::VR::HapticPresetSO*)>(&GlobalNamespace::HapticFeedbackController::PlayHapticFeedback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "PlayHapticFeedback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::XRNode>(), ::il2cpp_utils::ExtractIndependentType<Libraries::HM::HMLib::VR::HapticPresetSO*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::UpdateRumbles
// Il2CppName: UpdateRumbles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::UpdateRumbles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "UpdateRumbles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::GetRumble
// Il2CppName: GetRumble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HapticFeedbackController::RumbleData* (GlobalNamespace::HapticFeedbackController::*)(UnityEngine::XR::XRNode, ::Il2CppObject*)>(&GlobalNamespace::HapticFeedbackController::GetRumble)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "GetRumble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::XRNode>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
