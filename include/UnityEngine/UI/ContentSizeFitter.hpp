// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutSelfController
#include "UnityEngine/UI/ILayoutSelfController.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: FitMode because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.ContentSizeFitter
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DE4B0C
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: DE4B0C
  class ContentSizeFitter : public UnityEngine::EventSystems::UIBehaviour/*, public UnityEngine::UI::ILayoutSelfController*/ {
    public:
    // Nested type: UnityEngine::UI::ContentSizeFitter::FitMode
    struct FitMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct FitMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: FitMode
      constexpr FitMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode Unconstrained
      static constexpr const int Unconstrained = 0;
      // Get static field: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode Unconstrained
      static UnityEngine::UI::ContentSizeFitter::FitMode _get_Unconstrained();
      // Set static field: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode Unconstrained
      static void _set_Unconstrained(UnityEngine::UI::ContentSizeFitter::FitMode value);
      // static field const value: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode MinSize
      static constexpr const int MinSize = 1;
      // Get static field: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode MinSize
      static UnityEngine::UI::ContentSizeFitter::FitMode _get_MinSize();
      // Set static field: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode MinSize
      static void _set_MinSize(UnityEngine::UI::ContentSizeFitter::FitMode value);
      // static field const value: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode PreferredSize
      static constexpr const int PreferredSize = 2;
      // Get static field: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode PreferredSize
      static UnityEngine::UI::ContentSizeFitter::FitMode _get_PreferredSize();
      // Set static field: static public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode PreferredSize
      static void _set_PreferredSize(UnityEngine::UI::ContentSizeFitter::FitMode value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode
    #pragma pack(pop)
    static check_size<sizeof(ContentSizeFitter::FitMode), 0 + sizeof(int)> __UnityEngine_UI_ContentSizeFitter_FitModeSizeCheck;
    static_assert(sizeof(ContentSizeFitter::FitMode) == 0x4);
    // protected UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode m_HorizontalFit
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::UI::ContentSizeFitter::FitMode m_HorizontalFit;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ContentSizeFitter::FitMode) == 0x4);
    // protected UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode m_VerticalFit
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::UI::ContentSizeFitter::FitMode m_VerticalFit;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ContentSizeFitter::FitMode) == 0x4);
    // private UnityEngine.RectTransform m_Rect
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* m_Rect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Size: 0x1
    // Offset: 0x28
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // Field size check
    static_assert(sizeof(UnityEngine::DrivenRectTransformTracker) == 0x1);
    // Creating value type constructor for type: ContentSizeFitter
    ContentSizeFitter(UnityEngine::UI::ContentSizeFitter::FitMode m_HorizontalFit_ = {}, UnityEngine::UI::ContentSizeFitter::FitMode m_VerticalFit_ = {}, UnityEngine::RectTransform* m_Rect_ = {}, UnityEngine::DrivenRectTransformTracker m_Tracker_ = {}) noexcept : m_HorizontalFit{m_HorizontalFit_}, m_VerticalFit{m_VerticalFit_}, m_Rect{m_Rect_}, m_Tracker{m_Tracker_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutSelfController
    operator UnityEngine::UI::ILayoutSelfController() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutSelfController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: protected UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode m_HorizontalFit
    UnityEngine::UI::ContentSizeFitter::FitMode _get_m_HorizontalFit();
    // Set instance field: protected UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode m_HorizontalFit
    void _set_m_HorizontalFit(UnityEngine::UI::ContentSizeFitter::FitMode value);
    // Get instance field: protected UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode m_VerticalFit
    UnityEngine::UI::ContentSizeFitter::FitMode _get_m_VerticalFit();
    // Set instance field: protected UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode m_VerticalFit
    void _set_m_VerticalFit(UnityEngine::UI::ContentSizeFitter::FitMode value);
    // Get instance field: private UnityEngine.RectTransform m_Rect
    UnityEngine::RectTransform* _get_m_Rect();
    // Set instance field: private UnityEngine.RectTransform m_Rect
    void _set_m_Rect(UnityEngine::RectTransform* value);
    // Get instance field: private UnityEngine.DrivenRectTransformTracker m_Tracker
    UnityEngine::DrivenRectTransformTracker _get_m_Tracker();
    // Set instance field: private UnityEngine.DrivenRectTransformTracker m_Tracker
    void _set_m_Tracker(UnityEngine::DrivenRectTransformTracker value);
    // public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode get_horizontalFit()
    // Offset: 0x14747F0
    UnityEngine::UI::ContentSizeFitter::FitMode get_horizontalFit();
    // public System.Void set_horizontalFit(UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode value)
    // Offset: 0x14747F8
    void set_horizontalFit(UnityEngine::UI::ContentSizeFitter::FitMode value);
    // public UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode get_verticalFit()
    // Offset: 0x147490C
    UnityEngine::UI::ContentSizeFitter::FitMode get_verticalFit();
    // public System.Void set_verticalFit(UnityEngine.UI.ContentSizeFitter/UnityEngine.UI.FitMode value)
    // Offset: 0x1474914
    void set_verticalFit(UnityEngine::UI::ContentSizeFitter::FitMode value);
    // private UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x1474990
    UnityEngine::RectTransform* get_rectTransform();
    // private System.Void HandleSelfFittingAlongAxis(System.Int32 axis)
    // Offset: 0x1474ABC
    void HandleSelfFittingAlongAxis(int axis);
    // public System.Void SetLayoutHorizontal()
    // Offset: 0x1474B8C
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0x1474BBC
    void SetLayoutVertical();
    // protected System.Void SetDirty()
    // Offset: 0x1474874
    void SetDirty();
    // protected System.Void .ctor()
    // Offset: 0x1474A28
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentSizeFitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ContentSizeFitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentSizeFitter*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1474A30
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1474A34
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x1474AB8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
  }; // UnityEngine.UI.ContentSizeFitter
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ContentSizeFitter*, "UnityEngine.UI", "ContentSizeFitter");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ContentSizeFitter::FitMode, "UnityEngine.UI", "ContentSizeFitter/FitMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::get_horizontalFit
// Il2CppName: get_horizontalFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::ContentSizeFitter::FitMode (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::get_horizontalFit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "get_horizontalFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::set_horizontalFit
// Il2CppName: set_horizontalFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)(UnityEngine::UI::ContentSizeFitter::FitMode)>(&UnityEngine::UI::ContentSizeFitter::set_horizontalFit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ContentSizeFitter/FitMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "set_horizontalFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::get_verticalFit
// Il2CppName: get_verticalFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::ContentSizeFitter::FitMode (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::get_verticalFit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "get_verticalFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::set_verticalFit
// Il2CppName: set_verticalFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)(UnityEngine::UI::ContentSizeFitter::FitMode)>(&UnityEngine::UI::ContentSizeFitter::set_verticalFit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ContentSizeFitter/FitMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "set_verticalFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform* (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis
// Il2CppName: HandleSelfFittingAlongAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)(int)>(&UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "HandleSelfFittingAlongAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal
// Il2CppName: SetLayoutHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "SetLayoutHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::SetLayoutVertical
// Il2CppName: SetLayoutVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::SetLayoutVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "SetLayoutVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::SetDirty
// Il2CppName: SetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::SetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "SetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ContentSizeFitter::*)()>(&UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ContentSizeFitter*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
