// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassLight
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BloomPrePassLight : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BloomPrePassLight::LightsDataItem
    class LightsDataItem;
    // private BloomPrePassLightTypeSO _lightType
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassLightTypeSO* lightType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassLightTypeSO*) == 0x8);
    // private BloomPrePassLightTypeSO _registeredWithLightType
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomPrePassLightTypeSO* registeredWithLightType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassLightTypeSO*) == 0x8);
    // private System.Boolean _isRegistered
    // Size: 0x1
    // Offset: 0x28
    bool isRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isBeingDestroyed
    // Size: 0x1
    // Offset: 0x29
    bool isBeingDestroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BloomPrePassLight
    BloomPrePassLight(GlobalNamespace::BloomPrePassLightTypeSO* lightType_ = {}, GlobalNamespace::BloomPrePassLightTypeSO* registeredWithLightType_ = {}, bool isRegistered_ = {}, bool isBeingDestroyed_ = {}) noexcept : lightType{lightType_}, registeredWithLightType{registeredWithLightType_}, isRegistered{isRegistered_}, isBeingDestroyed{isBeingDestroyed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> _bloomLightsDict
    static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* _get__bloomLightsDict();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> _bloomLightsDict
    static void _set__bloomLightsDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> _lightsDataItems
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* _get__lightsDataItems();
    // Set static field: static private readonly System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> _lightsDataItems
    static void _set__lightsDataItems(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* value);
    // Get instance field reference: private BloomPrePassLightTypeSO _lightType
    GlobalNamespace::BloomPrePassLightTypeSO*& dyn__lightType();
    // Get instance field reference: private BloomPrePassLightTypeSO _registeredWithLightType
    GlobalNamespace::BloomPrePassLightTypeSO*& dyn__registeredWithLightType();
    // Get instance field reference: private System.Boolean _isRegistered
    bool& dyn__isRegistered();
    // Get instance field reference: private System.Boolean _isBeingDestroyed
    bool& dyn__isBeingDestroyed();
    // static public System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,System.Collections.Generic.HashSet`1<BloomPrePassLight>> get_bloomLightsDict()
    // Offset: 0x1E13D74
    static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* get_bloomLightsDict();
    // static public System.Collections.Generic.List`1<BloomPrePassLight/LightsDataItem> get_lightsDataItems()
    // Offset: 0x1E13DDC
    static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* get_lightsDataItems();
    // public System.Boolean get_isDirty()
    // Offset: 0xFFFFFFFF
    bool get_isDirty();
    // protected System.Void OnEnable()
    // Offset: 0x1E13E44
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1E140C4
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x1E1418C
    void OnDestroy();
    // private System.Void RegisterLight()
    // Offset: 0x1E13E48
    void RegisterLight();
    // private System.Void UnregisterLight()
    // Offset: 0x1E140C8
    void UnregisterLight();
    // protected System.Void DidRegisterLight()
    // Offset: 0xFFFFFFFF
    void DidRegisterLight();
    // public System.Void FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    // Offset: 0xFFFFFFFF
    void FillMeshData(int lightNum, ::Array<UnityEngine::Vector3>* vertices, ::Array<UnityEngine::Color>* colors, ::Array<UnityEngine::Vector4>* viewPos, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float lineWidth);
    // public System.Void Refresh()
    // Offset: 0xFFFFFFFF
    void Refresh();
    // protected System.Void .ctor()
    // Offset: 0x1E141D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassLight*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E141D8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassLight
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassLight), 41 + sizeof(bool)> __GlobalNamespace_BloomPrePassLightSizeCheck;
  static_assert(sizeof(BloomPrePassLight) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLight*, "", "BloomPrePassLight");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::get_bloomLightsDict
// Il2CppName: get_bloomLightsDict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>*>* (*)()>(&GlobalNamespace::BloomPrePassLight::get_bloomLightsDict)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "get_bloomLightsDict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::get_lightsDataItems
// Il2CppName: get_lightsDataItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassLight::LightsDataItem*>* (*)()>(&GlobalNamespace::BloomPrePassLight::get_lightsDataItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "get_lightsDataItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::get_isDirty
// Il2CppName: get_isDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::get_isDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "get_isDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::RegisterLight
// Il2CppName: RegisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::RegisterLight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "RegisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::UnregisterLight
// Il2CppName: UnregisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::UnregisterLight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "UnregisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::DidRegisterLight
// Il2CppName: DidRegisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::DidRegisterLight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "DidRegisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::FillMeshData
// Il2CppName: FillMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)(int, ::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Color>*, ::Array<UnityEngine::Vector4>*, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4, float)>(&GlobalNamespace::BloomPrePassLight::FillMeshData)> {
  static const MethodInfo* get() {
    static auto* lightNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* viewPos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* lineWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "FillMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightNum, vertices, colors, viewPos, viewMatrix, projectionMatrix, lineWidth});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassLight::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLight*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
