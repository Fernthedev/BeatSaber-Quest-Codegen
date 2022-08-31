// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CuttableBySaber
#include "GlobalNamespace/CuttableBySaber.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BoxCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoxCuttableBySaber*, "", "BoxCuttableBySaber");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BoxCuttableBySaber
  // [TokenAttribute] Offset: FFFFFFFF
  class BoxCuttableBySaber : public ::GlobalNamespace::CuttableBySaber {
    public:
    public:
    // private UnityEngine.BoxCollider _collider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::BoxCollider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::BoxCollider*) == 0x8);
    // private System.Boolean _canBeCut
    // Size: 0x1
    // Offset: 0x28
    bool canBeCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: canBeCut and: radius
    char __padding1[0x3] = {};
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.BoxCollider _collider
    [[deprecated("Use field access instead!")]] ::UnityEngine::BoxCollider*& dyn__collider();
    // Get instance field reference: private System.Boolean _canBeCut
    [[deprecated("Use field access instead!")]] bool& dyn__canBeCut();
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // public UnityEngine.Vector3 get_colliderSize()
    // Offset: 0x13584C4
    ::UnityEngine::Vector3 get_colliderSize();
    // public System.Void set_colliderSize(UnityEngine.Vector3 value)
    // Offset: 0x13583B0
    void set_colliderSize(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_colliderCenter()
    // Offset: 0x13584FC
    ::UnityEngine::Vector3 get_colliderCenter();
    // public System.Void set_colliderCenter(UnityEngine.Vector3 value)
    // Offset: 0x13584E0
    void set_colliderCenter(::UnityEngine::Vector3 value);
    // protected System.Void Awake()
    // Offset: 0x1358518
    void Awake();
    // public System.Void SetColliderCenterAndSize(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0x1358578
    void SetColliderCenterAndSize(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);
    // private System.Void RefreshRadius()
    // Offset: 0x13583E4
    void RefreshRadius();
    // public override System.Single get_radius()
    // Offset: 0x1358364
    // Implemented from: CuttableBySaber
    // Base method: System.Single CuttableBySaber::get_radius()
    float get_radius();
    // public override System.Boolean get_canBeCut()
    // Offset: 0x13583A8
    // Implemented from: CuttableBySaber
    // Base method: System.Boolean CuttableBySaber::get_canBeCut()
    bool get_canBeCut();
    // public override System.Void set_canBeCut(System.Boolean value)
    // Offset: 0x135836C
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::set_canBeCut(System.Boolean value)
    void set_canBeCut(bool value);
    // public System.Void .ctor()
    // Offset: 0x13585DC
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoxCuttableBySaber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BoxCuttableBySaber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoxCuttableBySaber*, creationType>()));
    }
    // public override System.Void Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x1358554
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
  }; // BoxCuttableBySaber
  #pragma pack(pop)
  static check_size<sizeof(BoxCuttableBySaber), 44 + sizeof(float)> __GlobalNamespace_BoxCuttableBySaberSizeCheck;
  static_assert(sizeof(BoxCuttableBySaber) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::get_colliderSize
// Il2CppName: get_colliderSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BoxCuttableBySaber::*)()>(&GlobalNamespace::BoxCuttableBySaber::get_colliderSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "get_colliderSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::set_colliderSize
// Il2CppName: set_colliderSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoxCuttableBySaber::*)(::UnityEngine::Vector3)>(&GlobalNamespace::BoxCuttableBySaber::set_colliderSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "set_colliderSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::get_colliderCenter
// Il2CppName: get_colliderCenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BoxCuttableBySaber::*)()>(&GlobalNamespace::BoxCuttableBySaber::get_colliderCenter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "get_colliderCenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::set_colliderCenter
// Il2CppName: set_colliderCenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoxCuttableBySaber::*)(::UnityEngine::Vector3)>(&GlobalNamespace::BoxCuttableBySaber::set_colliderCenter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "set_colliderCenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoxCuttableBySaber::*)()>(&GlobalNamespace::BoxCuttableBySaber::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::SetColliderCenterAndSize
// Il2CppName: SetColliderCenterAndSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoxCuttableBySaber::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::BoxCuttableBySaber::SetColliderCenterAndSize)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "SetColliderCenterAndSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::RefreshRadius
// Il2CppName: RefreshRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoxCuttableBySaber::*)()>(&GlobalNamespace::BoxCuttableBySaber::RefreshRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "RefreshRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BoxCuttableBySaber::*)()>(&GlobalNamespace::BoxCuttableBySaber::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::get_canBeCut
// Il2CppName: get_canBeCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BoxCuttableBySaber::*)()>(&GlobalNamespace::BoxCuttableBySaber::get_canBeCut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "get_canBeCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::set_canBeCut
// Il2CppName: set_canBeCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoxCuttableBySaber::*)(bool)>(&GlobalNamespace::BoxCuttableBySaber::set_canBeCut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "set_canBeCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BoxCuttableBySaber::Cut
// Il2CppName: Cut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoxCuttableBySaber::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::BoxCuttableBySaber::Cut)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoxCuttableBySaber*), "Cut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
