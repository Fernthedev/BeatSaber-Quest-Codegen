// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.InputFieldView
#include "HMUI/InputFieldView.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.InputFieldView/HMUI.InputFieldChanged
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFieldView::InputFieldChanged : public UnityEngine::Events::UnityEvent_1<HMUI::InputFieldView*> {
    public:
    // Creating value type constructor for type: InputFieldChanged
    InputFieldChanged() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x130E338
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldView::InputFieldChanged* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldView::InputFieldChanged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldView::InputFieldChanged*, creationType>()));
    }
  }; // HMUI.InputFieldView/HMUI.InputFieldChanged
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView::InputFieldChanged*, "HMUI", "InputFieldView/InputFieldChanged");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::InputFieldView::InputFieldChanged::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
