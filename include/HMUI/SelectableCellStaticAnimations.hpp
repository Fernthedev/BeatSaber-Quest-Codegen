// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SelectableCellStaticAnimations
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectableCellStaticAnimations : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.SelectableCell _selectableCell
    // Size: 0x8
    // Offset: 0x18
    HMUI::SelectableCell* selectableCell;
    // Field size check
    static_assert(sizeof(HMUI::SelectableCell*) == 0x8);
    // [SpaceAttribute] Offset: 0xE17C7C
    // private UnityEngine.AnimationClip _normalAnimationClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationClip* normalAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _highlightedAnimationClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationClip* highlightedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _selectedAnimationClip
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationClip* selectedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _selectedAndHighlightedAnimationClip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationClip* selectedAndHighlightedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // Creating value type constructor for type: SelectableCellStaticAnimations
    SelectableCellStaticAnimations(HMUI::SelectableCell* selectableCell_ = {}, UnityEngine::AnimationClip* normalAnimationClip_ = {}, UnityEngine::AnimationClip* highlightedAnimationClip_ = {}, UnityEngine::AnimationClip* selectedAnimationClip_ = {}, UnityEngine::AnimationClip* selectedAndHighlightedAnimationClip_ = {}) noexcept : selectableCell{selectableCell_}, normalAnimationClip{normalAnimationClip_}, highlightedAnimationClip{highlightedAnimationClip_}, selectedAnimationClip{selectedAnimationClip_}, selectedAndHighlightedAnimationClip{selectedAndHighlightedAnimationClip_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private HMUI.SelectableCell _selectableCell
    HMUI::SelectableCell* _get__selectableCell();
    // Set instance field: private HMUI.SelectableCell _selectableCell
    void _set__selectableCell(HMUI::SelectableCell* value);
    // Get instance field: private UnityEngine.AnimationClip _normalAnimationClip
    UnityEngine::AnimationClip* _get__normalAnimationClip();
    // Set instance field: private UnityEngine.AnimationClip _normalAnimationClip
    void _set__normalAnimationClip(UnityEngine::AnimationClip* value);
    // Get instance field: private UnityEngine.AnimationClip _highlightedAnimationClip
    UnityEngine::AnimationClip* _get__highlightedAnimationClip();
    // Set instance field: private UnityEngine.AnimationClip _highlightedAnimationClip
    void _set__highlightedAnimationClip(UnityEngine::AnimationClip* value);
    // Get instance field: private UnityEngine.AnimationClip _selectedAnimationClip
    UnityEngine::AnimationClip* _get__selectedAnimationClip();
    // Set instance field: private UnityEngine.AnimationClip _selectedAnimationClip
    void _set__selectedAnimationClip(UnityEngine::AnimationClip* value);
    // Get instance field: private UnityEngine.AnimationClip _selectedAndHighlightedAnimationClip
    UnityEngine::AnimationClip* _get__selectedAndHighlightedAnimationClip();
    // Set instance field: private UnityEngine.AnimationClip _selectedAndHighlightedAnimationClip
    void _set__selectedAndHighlightedAnimationClip(UnityEngine::AnimationClip* value);
    // protected System.Void Awake()
    // Offset: 0x130129C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1301374
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13013E8
    void OnDestroy();
    // private System.Void HandleSelectionDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/HMUI.TransitionType transitionType, System.Object changeOwner)
    // Offset: 0x13014C0
    void HandleSelectionDidChange(HMUI::SelectableCell* selectableCell, HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* changeOwner);
    // private System.Void HandleHighlightDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x13014C4
    void HandleHighlightDidChange(HMUI::SelectableCell* selectableCell, HMUI::SelectableCell::TransitionType transitionType);
    // private System.Void RefreshVisuals()
    // Offset: 0x1301378
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x13014C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectableCellStaticAnimations* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SelectableCellStaticAnimations::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectableCellStaticAnimations*, creationType>()));
    }
  }; // HMUI.SelectableCellStaticAnimations
  #pragma pack(pop)
  static check_size<sizeof(SelectableCellStaticAnimations), 56 + sizeof(UnityEngine::AnimationClip*)> __HMUI_SelectableCellStaticAnimationsSizeCheck;
  static_assert(sizeof(SelectableCellStaticAnimations) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCellStaticAnimations*, "HMUI", "SelectableCellStaticAnimations");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SelectableCellStaticAnimations::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCellStaticAnimations::*)()>(&HMUI::SelectableCellStaticAnimations::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCellStaticAnimations*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCellStaticAnimations::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCellStaticAnimations::*)()>(&HMUI::SelectableCellStaticAnimations::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCellStaticAnimations*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCellStaticAnimations::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCellStaticAnimations::*)()>(&HMUI::SelectableCellStaticAnimations::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCellStaticAnimations*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCellStaticAnimations::HandleSelectionDidChange
// Il2CppName: HandleSelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCellStaticAnimations::*)(HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*)>(&HMUI::SelectableCellStaticAnimations::HandleSelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* selectableCell = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* changeOwner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCellStaticAnimations*), "HandleSelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectableCell, transitionType, changeOwner});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCellStaticAnimations::HandleHighlightDidChange
// Il2CppName: HandleHighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCellStaticAnimations::*)(HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType)>(&HMUI::SelectableCellStaticAnimations::HandleHighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* selectableCell = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCellStaticAnimations*), "HandleHighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectableCell, transitionType});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCellStaticAnimations::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCellStaticAnimations::*)()>(&HMUI::SelectableCellStaticAnimations::RefreshVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCellStaticAnimations*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCellStaticAnimations::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
