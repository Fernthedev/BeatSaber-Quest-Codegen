// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.UIBehaviour
  class UIBehaviour : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: UIBehaviour
    UIBehaviour() noexcept {}
    // protected System.Void Awake()
    // Offset: 0x1437E30
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x142D4F0
    void OnEnable();
    // protected System.Void Start()
    // Offset: 0x1437E34
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x142D658
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x1437E38
    void OnDestroy();
    // public System.Boolean IsActive()
    // Offset: 0x1437E3C
    bool IsActive();
    // protected System.Void OnRectTransformDimensionsChange()
    // Offset: 0x1437E44
    void OnRectTransformDimensionsChange();
    // protected System.Void OnBeforeTransformParentChanged()
    // Offset: 0x1437E48
    void OnBeforeTransformParentChanged();
    // protected System.Void OnTransformParentChanged()
    // Offset: 0x142E808
    void OnTransformParentChanged();
    // protected System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1437E4C
    void OnDidApplyAnimationProperties();
    // protected System.Void OnCanvasGroupChanged()
    // Offset: 0x1437E50
    void OnCanvasGroupChanged();
    // protected System.Void OnCanvasHierarchyChanged()
    // Offset: 0x142E7FC
    void OnCanvasHierarchyChanged();
    // public System.Boolean IsDestroyed()
    // Offset: 0x1437E54
    bool IsDestroyed();
    // protected System.Void .ctor()
    // Offset: 0x142D250
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::UIBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIBehaviour*, creationType>()));
    }
  }; // UnityEngine.EventSystems.UIBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UIBehaviour*, "UnityEngine.EventSystems", "UIBehaviour");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::IsActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnRectTransformDimensionsChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnBeforeTransformParentChanged
// Il2CppName: OnBeforeTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnBeforeTransformParentChanged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnBeforeTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnTransformParentChanged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnDidApplyAnimationProperties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnDidApplyAnimationProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnCanvasGroupChanged
// Il2CppName: OnCanvasGroupChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnCanvasGroupChanged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnCanvasGroupChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnCanvasHierarchyChanged
// Il2CppName: OnCanvasHierarchyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnCanvasHierarchyChanged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnCanvasHierarchyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::IsDestroyed
// Il2CppName: IsDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::IsDestroyed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "IsDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
