// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Scrollbar
#include "UnityEngine/UI/Scrollbar.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.Scrollbar/UnityEngine.UI.ScrollEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Scrollbar::ScrollEvent : public UnityEngine::Events::UnityEvent_1<float> {
    public:
    // Creating value type constructor for type: ScrollEvent
    ScrollEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x19E2CC4
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Scrollbar::ScrollEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Scrollbar::ScrollEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Scrollbar::ScrollEvent*, creationType>()));
    }
  }; // UnityEngine.UI.Scrollbar/UnityEngine.UI.ScrollEvent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Scrollbar::ScrollEvent*, "UnityEngine.UI", "Scrollbar/ScrollEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Scrollbar::ScrollEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
