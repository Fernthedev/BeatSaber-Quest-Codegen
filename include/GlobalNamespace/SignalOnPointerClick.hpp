// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SignalOnPointerClick
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalOnPointerClick : public UnityEngine::MonoBehaviour/*, public UnityEngine::EventSystems::IPointerClickHandler*/ {
    public:
    // [SignalSenderAttribute] Offset: 0xE035A0
    // private Signal _inputFieldClickedSignal
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Signal* inputFieldClickedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // Creating value type constructor for type: SignalOnPointerClick
    SignalOnPointerClick(GlobalNamespace::Signal* inputFieldClickedSignal_ = {}) noexcept : inputFieldClickedSignal{inputFieldClickedSignal_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Signal _inputFieldClickedSignal
    GlobalNamespace::Signal*& dyn__inputFieldClickedSignal();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x239806C
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x239808C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalOnPointerClick* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SignalOnPointerClick::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalOnPointerClick*, creationType>()));
    }
  }; // SignalOnPointerClick
  #pragma pack(pop)
  static check_size<sizeof(SignalOnPointerClick), 24 + sizeof(GlobalNamespace::Signal*)> __GlobalNamespace_SignalOnPointerClickSizeCheck;
  static_assert(sizeof(SignalOnPointerClick) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SignalOnPointerClick*, "", "SignalOnPointerClick");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SignalOnPointerClick::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalOnPointerClick::*)(UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::SignalOnPointerClick::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SignalOnPointerClick*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SignalOnPointerClick::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
