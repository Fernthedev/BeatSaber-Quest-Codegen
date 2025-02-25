// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState
#include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.MouseButtonEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class MouseButtonEventData : public ::Il2CppObject {
    public:
    // public UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState buttonState
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::EventSystems::PointerEventData::FramePressState buttonState;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData::FramePressState) == 0x4);
    // Padding between fields: buttonState and: buttonData
    char __padding0[0x4] = {};
    // public UnityEngine.EventSystems.PointerEventData buttonData
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::EventSystems::PointerEventData* buttonData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // Creating value type constructor for type: MouseButtonEventData
    MouseButtonEventData(UnityEngine::EventSystems::PointerEventData::FramePressState buttonState_ = {}, UnityEngine::EventSystems::PointerEventData* buttonData_ = {}) noexcept : buttonState{buttonState_}, buttonData{buttonData_} {}
    // Get instance field reference: public UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState buttonState
    UnityEngine::EventSystems::PointerEventData::FramePressState& dyn_buttonState();
    // Get instance field reference: public UnityEngine.EventSystems.PointerEventData buttonData
    UnityEngine::EventSystems::PointerEventData*& dyn_buttonData();
    // public System.Boolean PressedThisFrame()
    // Offset: 0x2399C80
    bool PressedThisFrame();
    // public System.Boolean ReleasedThisFrame()
    // Offset: 0x2399C94
    bool ReleasedThisFrame();
    // public System.Void .ctor()
    // Offset: 0x2399CA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseButtonEventData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("VRUIControls::MouseButtonEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseButtonEventData*, creationType>()));
    }
  }; // VRUIControls.MouseButtonEventData
  #pragma pack(pop)
  static check_size<sizeof(MouseButtonEventData), 24 + sizeof(UnityEngine::EventSystems::PointerEventData*)> __VRUIControls_MouseButtonEventDataSizeCheck;
  static_assert(sizeof(MouseButtonEventData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::MouseButtonEventData*, "VRUIControls", "MouseButtonEventData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::MouseButtonEventData::PressedThisFrame
// Il2CppName: PressedThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::MouseButtonEventData::*)()>(&VRUIControls::MouseButtonEventData::PressedThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::MouseButtonEventData*), "PressedThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::MouseButtonEventData::ReleasedThisFrame
// Il2CppName: ReleasedThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::MouseButtonEventData::*)()>(&VRUIControls::MouseButtonEventData::ReleasedThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::MouseButtonEventData*), "ReleasedThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::MouseButtonEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
