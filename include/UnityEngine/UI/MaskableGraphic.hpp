// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
// Including type: UnityEngine.UI.IMaterialModifier
#include "UnityEngine/UI/IMaterialModifier.hpp"
// Including type: UnityEngine.UI.IClippable
#include "UnityEngine/UI/IClippable.hpp"
// Including type: UnityEngine.UI.IMaskable
#include "UnityEngine/UI/IMaskable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectMask2D
  class RectMask2D;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector2 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.MaskableGraphic
  // [TokenAttribute] Offset: FFFFFFFF
  class MaskableGraphic : public UnityEngine::UI::Graphic/*, public UnityEngine::UI::IMaterialModifier, public UnityEngine::UI::IClippable, public UnityEngine::UI::IMaskable*/ {
    public:
    // Nested type: UnityEngine::UI::MaskableGraphic::CullStateChangedEvent
    class CullStateChangedEvent;
    // protected System.Boolean m_ShouldRecalculateStencil
    // Size: 0x1
    // Offset: 0x89
    bool m_ShouldRecalculateStencil;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShouldRecalculateStencil and: m_MaskMaterial
    char __padding0[0x6] = {};
    // protected UnityEngine.Material m_MaskMaterial
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Material* m_MaskMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.UI.RectMask2D m_ParentMask
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::RectMask2D* m_ParentMask;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::RectMask2D*) == 0x8);
    // private System.Boolean m_Maskable
    // Size: 0x1
    // Offset: 0xA0
    bool m_Maskable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsMaskingGraphic
    // Size: 0x1
    // Offset: 0xA1
    bool m_IsMaskingGraphic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [EditorBrowsableAttribute] Offset: 0xDECA38
    // [ObsoleteAttribute] Offset: 0xDECA38
    // protected System.Boolean m_IncludeForMasking
    // Size: 0x1
    // Offset: 0xA2
    bool m_IncludeForMasking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IncludeForMasking and: m_OnCullStateChanged
    char __padding5[0x5] = {};
    // private UnityEngine.UI.MaskableGraphic/UnityEngine.UI.CullStateChangedEvent m_OnCullStateChanged
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* m_OnCullStateChanged;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::MaskableGraphic::CullStateChangedEvent*) == 0x8);
    // [EditorBrowsableAttribute] Offset: 0xDECA9C
    // [ObsoleteAttribute] Offset: 0xDECA9C
    // protected System.Boolean m_ShouldRecalculate
    // Size: 0x1
    // Offset: 0xB0
    bool m_ShouldRecalculate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShouldRecalculate and: m_StencilValue
    char __padding7[0x3] = {};
    // protected System.Int32 m_StencilValue
    // Size: 0x4
    // Offset: 0xB4
    int m_StencilValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly UnityEngine.Vector3[] m_Corners
    // Size: 0x8
    // Offset: 0xB8
    ::Array<UnityEngine::Vector3>* m_Corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: MaskableGraphic
    MaskableGraphic(bool m_ShouldRecalculateStencil_ = {}, UnityEngine::Material* m_MaskMaterial_ = {}, UnityEngine::UI::RectMask2D* m_ParentMask_ = {}, bool m_Maskable_ = {}, bool m_IsMaskingGraphic_ = {}, bool m_IncludeForMasking_ = {}, UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* m_OnCullStateChanged_ = {}, bool m_ShouldRecalculate_ = {}, int m_StencilValue_ = {}, ::Array<UnityEngine::Vector3>* m_Corners_ = {}) noexcept : m_ShouldRecalculateStencil{m_ShouldRecalculateStencil_}, m_MaskMaterial{m_MaskMaterial_}, m_ParentMask{m_ParentMask_}, m_Maskable{m_Maskable_}, m_IsMaskingGraphic{m_IsMaskingGraphic_}, m_IncludeForMasking{m_IncludeForMasking_}, m_OnCullStateChanged{m_OnCullStateChanged_}, m_ShouldRecalculate{m_ShouldRecalculate_}, m_StencilValue{m_StencilValue_}, m_Corners{m_Corners_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::IMaterialModifier
    operator UnityEngine::UI::IMaterialModifier() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IMaterialModifier*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::IClippable
    operator UnityEngine::UI::IClippable() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IClippable*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::IMaskable
    operator UnityEngine::UI::IMaskable() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IMaskable*>(this);
    }
    // Get instance field reference: protected System.Boolean m_ShouldRecalculateStencil
    bool& dyn_m_ShouldRecalculateStencil();
    // Get instance field reference: protected UnityEngine.Material m_MaskMaterial
    UnityEngine::Material*& dyn_m_MaskMaterial();
    // Get instance field reference: private UnityEngine.UI.RectMask2D m_ParentMask
    UnityEngine::UI::RectMask2D*& dyn_m_ParentMask();
    // Get instance field reference: private System.Boolean m_Maskable
    bool& dyn_m_Maskable();
    // Get instance field reference: private System.Boolean m_IsMaskingGraphic
    bool& dyn_m_IsMaskingGraphic();
    // Get instance field reference: protected System.Boolean m_IncludeForMasking
    bool& dyn_m_IncludeForMasking();
    // Get instance field reference: private UnityEngine.UI.MaskableGraphic/UnityEngine.UI.CullStateChangedEvent m_OnCullStateChanged
    UnityEngine::UI::MaskableGraphic::CullStateChangedEvent*& dyn_m_OnCullStateChanged();
    // Get instance field reference: protected System.Boolean m_ShouldRecalculate
    bool& dyn_m_ShouldRecalculate();
    // Get instance field reference: protected System.Int32 m_StencilValue
    int& dyn_m_StencilValue();
    // Get instance field reference: private readonly UnityEngine.Vector3[] m_Corners
    ::Array<UnityEngine::Vector3>*& dyn_m_Corners();
    // public UnityEngine.UI.MaskableGraphic/UnityEngine.UI.CullStateChangedEvent get_onCullStateChanged()
    // Offset: 0x19D88BC
    UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* get_onCullStateChanged();
    // public System.Void set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/UnityEngine.UI.CullStateChangedEvent value)
    // Offset: 0x19D88C4
    void set_onCullStateChanged(UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* value);
    // public System.Boolean get_maskable()
    // Offset: 0x19D88CC
    bool get_maskable();
    // public System.Void set_maskable(System.Boolean value)
    // Offset: 0x19D88D4
    void set_maskable(bool value);
    // public System.Boolean get_isMaskingGraphic()
    // Offset: 0x19D890C
    bool get_isMaskingGraphic();
    // public System.Void set_isMaskingGraphic(System.Boolean value)
    // Offset: 0x19D7258
    void set_isMaskingGraphic(bool value);
    // private UnityEngine.Rect get_rootCanvasRect()
    // Offset: 0x19D8A8C
    UnityEngine::Rect get_rootCanvasRect();
    // private UnityEngine.GameObject UnityEngine.UI.IClippable.get_gameObject()
    // Offset: 0x19D96E8
    UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject();
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x19D8914
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
    // public System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x19D8A2C
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // private System.Void UpdateCull(System.Boolean cull)
    // Offset: 0x19D8DDC
    void UpdateCull(bool cull);
    // public System.Void SetClipRect(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x19D8EC0
    void SetClipRect(UnityEngine::Rect clipRect, bool validRect);
    // public System.Void SetClipSoftness(UnityEngine.Vector2 clipSoftness)
    // Offset: 0x19D8F3C
    void SetClipSoftness(UnityEngine::Vector2 clipSoftness);
    // public System.Void ParentMaskStateChanged()
    // Offset: 0x19D9260
    void ParentMaskStateChanged();
    // private System.Void UpdateClipParent()
    // Offset: 0x19D8FD8
    void UpdateClipParent();
    // public System.Void RecalculateClipping()
    // Offset: 0x19D9554
    void RecalculateClipping();
    // public System.Void RecalculateMasking()
    // Offset: 0x19D9558
    void RecalculateMasking();
    // protected System.Void .ctor()
    // Offset: 0x19D95E4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaskableGraphic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::MaskableGraphic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaskableGraphic*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x19D8F78
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x19D9144
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x19D9200
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x19D9264
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
  }; // UnityEngine.UI.MaskableGraphic
  #pragma pack(pop)
  static check_size<sizeof(MaskableGraphic), 184 + sizeof(::Array<UnityEngine::Vector3>*)> __UnityEngine_UI_MaskableGraphicSizeCheck;
  static_assert(sizeof(MaskableGraphic) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::MaskableGraphic*, "UnityEngine.UI", "MaskableGraphic");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::get_onCullStateChanged
// Il2CppName: get_onCullStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::get_onCullStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "get_onCullStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::set_onCullStateChanged
// Il2CppName: set_onCullStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)(UnityEngine::UI::MaskableGraphic::CullStateChangedEvent*)>(&UnityEngine::UI::MaskableGraphic::set_onCullStateChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "MaskableGraphic/CullStateChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "set_onCullStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::get_maskable
// Il2CppName: get_maskable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::get_maskable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "get_maskable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::set_maskable
// Il2CppName: set_maskable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)(bool)>(&UnityEngine::UI::MaskableGraphic::set_maskable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "set_maskable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::get_isMaskingGraphic
// Il2CppName: get_isMaskingGraphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::get_isMaskingGraphic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "get_isMaskingGraphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::set_isMaskingGraphic
// Il2CppName: set_isMaskingGraphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)(bool)>(&UnityEngine::UI::MaskableGraphic::set_isMaskingGraphic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "set_isMaskingGraphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::get_rootCanvasRect
// Il2CppName: get_rootCanvasRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::get_rootCanvasRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "get_rootCanvasRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::UnityEngine_UI_IClippable_get_gameObject
// Il2CppName: UnityEngine.UI.IClippable.get_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::UnityEngine_UI_IClippable_get_gameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "UnityEngine.UI.IClippable.get_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::GetModifiedMaterial
// Il2CppName: GetModifiedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::UI::MaskableGraphic::*)(UnityEngine::Material*)>(&UnityEngine::UI::MaskableGraphic::GetModifiedMaterial)> {
  static const MethodInfo* get() {
    static auto* baseMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "GetModifiedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMaterial});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::Cull
// Il2CppName: Cull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)(UnityEngine::Rect, bool)>(&UnityEngine::UI::MaskableGraphic::Cull)> {
  static const MethodInfo* get() {
    static auto* clipRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* validRect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "Cull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipRect, validRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::UpdateCull
// Il2CppName: UpdateCull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)(bool)>(&UnityEngine::UI::MaskableGraphic::UpdateCull)> {
  static const MethodInfo* get() {
    static auto* cull = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "UpdateCull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cull});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::SetClipRect
// Il2CppName: SetClipRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)(UnityEngine::Rect, bool)>(&UnityEngine::UI::MaskableGraphic::SetClipRect)> {
  static const MethodInfo* get() {
    static auto* clipRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* validRect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "SetClipRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipRect, validRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::SetClipSoftness
// Il2CppName: SetClipSoftness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)(UnityEngine::Vector2)>(&UnityEngine::UI::MaskableGraphic::SetClipSoftness)> {
  static const MethodInfo* get() {
    static auto* clipSoftness = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "SetClipSoftness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipSoftness});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::ParentMaskStateChanged
// Il2CppName: ParentMaskStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::ParentMaskStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "ParentMaskStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::UpdateClipParent
// Il2CppName: UpdateClipParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::UpdateClipParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "UpdateClipParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::RecalculateClipping
// Il2CppName: RecalculateClipping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::RecalculateClipping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "RecalculateClipping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::RecalculateMasking
// Il2CppName: RecalculateMasking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::RecalculateMasking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "RecalculateMasking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::OnTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::MaskableGraphic::OnCanvasHierarchyChanged
// Il2CppName: OnCanvasHierarchyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::MaskableGraphic::*)()>(&UnityEngine::UI::MaskableGraphic::OnCanvasHierarchyChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::MaskableGraphic*), "OnCanvasHierarchyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
