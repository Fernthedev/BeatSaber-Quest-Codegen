// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.IClipper
#include "UnityEngine/UI/IClipper.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectangularVertexClipper
  class RectangularVertexClipper;
  // Forward declaring type: MaskableGraphic
  class MaskableGraphic;
  // Forward declaring type: IClippable
  class IClippable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Canvas
  class Canvas;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.RectMask2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DEADE4
  // [ExecuteAlways] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: DEADE4
  class RectMask2D : public UnityEngine::EventSystems::UIBehaviour/*, public UnityEngine::UI::IClipper, public UnityEngine::ICanvasRaycastFilter*/ {
    public:
    // private readonly UnityEngine.UI.RectangularVertexClipper m_VertexClipper
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::RectangularVertexClipper* m_VertexClipper;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::RectangularVertexClipper*) == 0x8);
    // private UnityEngine.RectTransform m_RectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* m_RectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> m_MaskableTargets
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic*>* m_MaskableTargets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> m_ClipTargets
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable*>* m_ClipTargets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable*>*) == 0x8);
    // private System.Boolean m_ShouldRecalculateClipRects
    // Size: 0x1
    // Offset: 0x38
    bool m_ShouldRecalculateClipRects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShouldRecalculateClipRects and: m_Clippers
    char __padding4[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> m_Clippers
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D*>* m_Clippers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D*>*) == 0x8);
    // private UnityEngine.Rect m_LastClipRectCanvasSpace
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Rect m_LastClipRectCanvasSpace;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private System.Boolean m_ForceClip
    // Size: 0x1
    // Offset: 0x58
    bool m_ForceClip;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ForceClip and: m_Padding
    char __padding7[0x3] = {};
    // private UnityEngine.Vector4 m_Padding
    // Size: 0x10
    // Offset: 0x5C
    UnityEngine::Vector4 m_Padding;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // private UnityEngine.Vector2Int m_Softness
    // Size: 0x8
    // Offset: 0x6C
    UnityEngine::Vector2Int m_Softness;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2Int) == 0x8);
    // Padding between fields: m_Softness and: m_Canvas
    char __padding9[0x4] = {};
    // private UnityEngine.Canvas m_Canvas
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Canvas* m_Canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private UnityEngine.Vector3[] m_Corners
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::Vector3>* m_Corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: RectMask2D
    RectMask2D(UnityEngine::UI::RectangularVertexClipper* m_VertexClipper_ = {}, UnityEngine::RectTransform* m_RectTransform_ = {}, System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic*>* m_MaskableTargets_ = {}, System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable*>* m_ClipTargets_ = {}, bool m_ShouldRecalculateClipRects_ = {}, System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D*>* m_Clippers_ = {}, UnityEngine::Rect m_LastClipRectCanvasSpace_ = {}, bool m_ForceClip_ = {}, UnityEngine::Vector4 m_Padding_ = {}, UnityEngine::Vector2Int m_Softness_ = {}, UnityEngine::Canvas* m_Canvas_ = {}, ::Array<UnityEngine::Vector3>* m_Corners_ = {}) noexcept : m_VertexClipper{m_VertexClipper_}, m_RectTransform{m_RectTransform_}, m_MaskableTargets{m_MaskableTargets_}, m_ClipTargets{m_ClipTargets_}, m_ShouldRecalculateClipRects{m_ShouldRecalculateClipRects_}, m_Clippers{m_Clippers_}, m_LastClipRectCanvasSpace{m_LastClipRectCanvasSpace_}, m_ForceClip{m_ForceClip_}, m_Padding{m_Padding_}, m_Softness{m_Softness_}, m_Canvas{m_Canvas_}, m_Corners{m_Corners_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::IClipper
    operator UnityEngine::UI::IClipper() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IClipper*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ICanvasRaycastFilter
    operator UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly UnityEngine.UI.RectangularVertexClipper m_VertexClipper
    UnityEngine::UI::RectangularVertexClipper*& dyn_m_VertexClipper();
    // Get instance field reference: private UnityEngine.RectTransform m_RectTransform
    UnityEngine::RectTransform*& dyn_m_RectTransform();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> m_MaskableTargets
    System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic*>*& dyn_m_MaskableTargets();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> m_ClipTargets
    System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable*>*& dyn_m_ClipTargets();
    // Get instance field reference: private System.Boolean m_ShouldRecalculateClipRects
    bool& dyn_m_ShouldRecalculateClipRects();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> m_Clippers
    System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D*>*& dyn_m_Clippers();
    // Get instance field reference: private UnityEngine.Rect m_LastClipRectCanvasSpace
    UnityEngine::Rect& dyn_m_LastClipRectCanvasSpace();
    // Get instance field reference: private System.Boolean m_ForceClip
    bool& dyn_m_ForceClip();
    // Get instance field reference: private UnityEngine.Vector4 m_Padding
    UnityEngine::Vector4& dyn_m_Padding();
    // Get instance field reference: private UnityEngine.Vector2Int m_Softness
    UnityEngine::Vector2Int& dyn_m_Softness();
    // Get instance field reference: private UnityEngine.Canvas m_Canvas
    UnityEngine::Canvas*& dyn_m_Canvas();
    // Get instance field reference: private UnityEngine.Vector3[] m_Corners
    ::Array<UnityEngine::Vector3>*& dyn_m_Corners();
    // public UnityEngine.Vector4 get_padding()
    // Offset: 0x19DAB98
    UnityEngine::Vector4 get_padding();
    // public System.Void set_padding(UnityEngine.Vector4 value)
    // Offset: 0x19DABA4
    void set_padding(UnityEngine::Vector4 value);
    // public UnityEngine.Vector2Int get_softness()
    // Offset: 0x19DABB0
    UnityEngine::Vector2Int get_softness();
    // public System.Void set_softness(UnityEngine.Vector2Int value)
    // Offset: 0x19DABB8
    void set_softness(UnityEngine::Vector2Int value);
    // private UnityEngine.Canvas get_Canvas()
    // Offset: 0x19DAC90
    UnityEngine::Canvas* get_Canvas();
    // public UnityEngine.Rect get_canvasRect()
    // Offset: 0x19DADC8
    UnityEngine::Rect get_canvasRect();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x19DAE14
    UnityEngine::RectTransform* get_rectTransform();
    // private UnityEngine.Rect get_rootCanvasRect()
    // Offset: 0x19DB33C
    UnityEngine::Rect get_rootCanvasRect();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x19DB244
    bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
    // public System.Void PerformClipping()
    // Offset: 0x19DB470
    void PerformClipping();
    // public System.Void UpdateClipSoftness()
    // Offset: 0x19DBBB0
    void UpdateClipSoftness();
    // public System.Void AddClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x19D944C
    void AddClippable(UnityEngine::UI::IClippable* clippable);
    // public System.Void RemoveClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x19D92C4
    void RemoveClippable(UnityEngine::UI::IClippable* clippable);
    // protected System.Void .ctor()
    // Offset: 0x19DAFFC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectMask2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::RectMask2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectMask2D*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x19DB160
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x19DB19C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x19DBE64
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x19DBE90
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
  }; // UnityEngine.UI.RectMask2D
  #pragma pack(pop)
  static check_size<sizeof(RectMask2D), 128 + sizeof(::Array<UnityEngine::Vector3>*)> __UnityEngine_UI_RectMask2DSizeCheck;
  static_assert(sizeof(RectMask2D) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RectMask2D*, "UnityEngine.UI", "RectMask2D");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_padding
// Il2CppName: get_padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_padding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::set_padding
// Il2CppName: set_padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(UnityEngine::Vector4)>(&UnityEngine::UI::RectMask2D::set_padding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "set_padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_softness
// Il2CppName: get_softness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2Int (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_softness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_softness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::set_softness
// Il2CppName: set_softness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(UnityEngine::Vector2Int)>(&UnityEngine::UI::RectMask2D::set_softness)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "set_softness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_Canvas
// Il2CppName: get_Canvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Canvas* (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_Canvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_Canvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_canvasRect
// Il2CppName: get_canvasRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_canvasRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_canvasRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform* (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_rootCanvasRect
// Il2CppName: get_rootCanvasRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_rootCanvasRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_rootCanvasRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::IsRaycastLocationValid
// Il2CppName: IsRaycastLocationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::RectMask2D::*)(UnityEngine::Vector2, UnityEngine::Camera*)>(&UnityEngine::UI::RectMask2D::IsRaycastLocationValid)> {
  static const MethodInfo* get() {
    static auto* sp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "IsRaycastLocationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sp, eventCamera});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::PerformClipping
// Il2CppName: PerformClipping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::PerformClipping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "PerformClipping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::UpdateClipSoftness
// Il2CppName: UpdateClipSoftness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::UpdateClipSoftness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "UpdateClipSoftness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::AddClippable
// Il2CppName: AddClippable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(UnityEngine::UI::IClippable*)>(&UnityEngine::UI::RectMask2D::AddClippable)> {
  static const MethodInfo* get() {
    static auto* clippable = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "IClippable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "AddClippable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clippable});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::RemoveClippable
// Il2CppName: RemoveClippable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(UnityEngine::UI::IClippable*)>(&UnityEngine::UI::RectMask2D::RemoveClippable)> {
  static const MethodInfo* get() {
    static auto* clippable = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "IClippable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "RemoveClippable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clippable});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnCanvasHierarchyChanged
// Il2CppName: OnCanvasHierarchyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnCanvasHierarchyChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnCanvasHierarchyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
