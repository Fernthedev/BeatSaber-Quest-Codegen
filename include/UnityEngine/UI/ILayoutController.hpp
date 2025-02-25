// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ILayoutController
  // [TokenAttribute] Offset: FFFFFFFF
  class ILayoutController {
    public:
    // Creating value type constructor for type: ILayoutController
    ILayoutController() noexcept {}
    // public System.Void SetLayoutHorizontal()
    // Offset: 0xFFFFFFFF
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0xFFFFFFFF
    void SetLayoutVertical();
  }; // UnityEngine.UI.ILayoutController
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ILayoutController*, "UnityEngine.UI", "ILayoutController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ILayoutController::SetLayoutHorizontal
// Il2CppName: SetLayoutHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ILayoutController::*)()>(&UnityEngine::UI::ILayoutController::SetLayoutHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ILayoutController*), "SetLayoutHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ILayoutController::SetLayoutVertical
// Il2CppName: SetLayoutVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ILayoutController::*)()>(&UnityEngine::UI::ILayoutController::SetLayoutVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ILayoutController*), "SetLayoutVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
