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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHintPanel
  class HoverHintPanel;
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHintController
  class HoverHintController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::HoverHintController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintController*, "HMUI", "HoverHintController");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverHintController
  // [TokenAttribute] Offset: FFFFFFFF
  class HoverHintController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::HMUI::HoverHintController::$ShowHintAfterDelay$d__10
    class $ShowHintAfterDelay$d__10;
    // Nested type: ::HMUI::HoverHintController::$HideHintAfterDelay$d__11
    class $HideHintAfterDelay$d__11;
    public:
    // private HMUI.HoverHintPanel _hoverHintPanelPrefab
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::HoverHintPanel* hoverHintPanelPrefab;
    // Field size check
    static_assert(sizeof(::HMUI::HoverHintPanel*) == 0x8);
    // private HMUI.HoverHintPanel _hoverHintPanel
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::HoverHintPanel* hoverHintPanel;
    // Field size check
    static_assert(sizeof(::HMUI::HoverHintPanel*) == 0x8);
    // private System.Boolean _isHiding
    // Size: 0x1
    // Offset: 0x28
    bool isHiding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kShowHintDelay
    static constexpr const float kShowHintDelay = 0.6;
    // Get static field: static private System.Single kShowHintDelay
    static float _get_kShowHintDelay();
    // Set static field: static private System.Single kShowHintDelay
    static void _set_kShowHintDelay(float value);
    // static field const value: static private System.Single kHideHintDelay
    static constexpr const float kHideHintDelay = 0.3;
    // Get static field: static private System.Single kHideHintDelay
    static float _get_kHideHintDelay();
    // Set static field: static private System.Single kHideHintDelay
    static void _set_kHideHintDelay(float value);
    // Get instance field reference: private HMUI.HoverHintPanel _hoverHintPanelPrefab
    [[deprecated("Use field access instead!")]] ::HMUI::HoverHintPanel*& dyn__hoverHintPanelPrefab();
    // Get instance field reference: private HMUI.HoverHintPanel _hoverHintPanel
    [[deprecated("Use field access instead!")]] ::HMUI::HoverHintPanel*& dyn__hoverHintPanel();
    // Get instance field reference: private System.Boolean _isHiding
    [[deprecated("Use field access instead!")]] bool& dyn__isHiding();
    // public System.Void .ctor()
    // Offset: 0x170C324
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverHintController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::HoverHintController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverHintController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x170BB28
    void Awake();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x170BBF8
    void OnApplicationFocus(bool hasFocus);
    // public System.Void ShowHint(HMUI.HoverHint hoverHint)
    // Offset: 0x170B838
    void ShowHint(::HMUI::HoverHint* hoverHint);
    // public System.Void HideHint()
    // Offset: 0x170B9EC
    void HideHint();
    // public System.Void HideHintInstant()
    // Offset: 0x170B9A8
    void HideHintInstant();
    // private System.Collections.IEnumerator ShowHintAfterDelay(HMUI.HoverHint hoverHint, System.Single delay)
    // Offset: 0x170BDD4
    ::System::Collections::IEnumerator* ShowHintAfterDelay(::HMUI::HoverHint* hoverHint, float delay);
    // private System.Collections.IEnumerator HideHintAfterDelay(System.Single delay)
    // Offset: 0x170BE60
    ::System::Collections::IEnumerator* HideHintAfterDelay(float delay);
    // private System.Void SetupAndShowHintPanel(HMUI.HoverHint hoverHint)
    // Offset: 0x170BC20
    void SetupAndShowHintPanel(::HMUI::HoverHint* hoverHint);
    // static private UnityEngine.Transform GetScreenTransformForHoverHint(HMUI.HoverHint hoverHint)
    // Offset: 0x170BF38
    static ::UnityEngine::Transform* GetScreenTransformForHoverHint(::HMUI::HoverHint* hoverHint);
  }; // HMUI.HoverHintController
  #pragma pack(pop)
  static check_size<sizeof(HoverHintController), 40 + sizeof(bool)> __HMUI_HoverHintControllerSizeCheck;
  static_assert(sizeof(HoverHintController) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HoverHintController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::HoverHintController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::*)()>(&HMUI::HoverHintController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::*)(bool)>(&HMUI::HoverHintController::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::ShowHint
// Il2CppName: ShowHint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::*)(::HMUI::HoverHint*)>(&HMUI::HoverHintController::ShowHint)> {
  static const MethodInfo* get() {
    static auto* hoverHint = &::il2cpp_utils::GetClassFromName("HMUI", "HoverHint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "ShowHint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hoverHint});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::HideHint
// Il2CppName: HideHint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::*)()>(&HMUI::HoverHintController::HideHint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "HideHint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::HideHintInstant
// Il2CppName: HideHintInstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::*)()>(&HMUI::HoverHintController::HideHintInstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "HideHintInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::ShowHintAfterDelay
// Il2CppName: ShowHintAfterDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (HMUI::HoverHintController::*)(::HMUI::HoverHint*, float)>(&HMUI::HoverHintController::ShowHintAfterDelay)> {
  static const MethodInfo* get() {
    static auto* hoverHint = &::il2cpp_utils::GetClassFromName("HMUI", "HoverHint")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "ShowHintAfterDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hoverHint, delay});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::HideHintAfterDelay
// Il2CppName: HideHintAfterDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (HMUI::HoverHintController::*)(float)>(&HMUI::HoverHintController::HideHintAfterDelay)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "HideHintAfterDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::SetupAndShowHintPanel
// Il2CppName: SetupAndShowHintPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::*)(::HMUI::HoverHint*)>(&HMUI::HoverHintController::SetupAndShowHintPanel)> {
  static const MethodInfo* get() {
    static auto* hoverHint = &::il2cpp_utils::GetClassFromName("HMUI", "HoverHint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "SetupAndShowHintPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hoverHint});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::GetScreenTransformForHoverHint
// Il2CppName: GetScreenTransformForHoverHint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::HMUI::HoverHint*)>(&HMUI::HoverHintController::GetScreenTransformForHoverHint)> {
  static const MethodInfo* get() {
    static auto* hoverHint = &::il2cpp_utils::GetClassFromName("HMUI", "HoverHint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController*), "GetScreenTransformForHoverHint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hoverHint});
  }
};
