// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Scrollbar
#include "UnityEngine/UI/Scrollbar.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Scrollbar::ScrollEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar::ScrollEvent*, "UnityEngine.UI", "Scrollbar/ScrollEvent");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.Scrollbar/UnityEngine.UI.ScrollEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Scrollbar::ScrollEvent : public ::UnityEngine::Events::UnityEvent_1<float> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1ED6958
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Scrollbar::ScrollEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Scrollbar::ScrollEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Scrollbar::ScrollEvent*, creationType>()));
    }
  }; // UnityEngine.UI.Scrollbar/UnityEngine.UI.ScrollEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Scrollbar::ScrollEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
