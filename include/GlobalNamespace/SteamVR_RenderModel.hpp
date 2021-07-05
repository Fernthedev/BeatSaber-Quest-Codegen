// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_TrackedObject/EIndex
#include "GlobalNamespace/SteamVR_TrackedObject.hpp"
// Including type: Valve.VR.RenderModel_ControllerMode_State_t
#include "Valve/VR/RenderModel_ControllerMode_State_t.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: VREvent_t because it is already included!
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
  // Forward declaring type: RenderModel_t
  struct RenderModel_t;
  // Forward declaring type: RenderModel_TextureMap_t
  struct RenderModel_TextureMap_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_RenderModel
  // [ExecuteInEditMode] Offset: DD3158
  class SteamVR_RenderModel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_RenderModel::RenderModel
    class RenderModel;
    // Nested type: GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder
    class RenderModelInterfaceHolder;
    // Nested type: GlobalNamespace::SteamVR_RenderModel::$SetModelAsync$d__21
    class $SetModelAsync$d__21;
    // Nested type: GlobalNamespace::SteamVR_RenderModel::$FreeRenderModel$d__24
    class $FreeRenderModel$d__24;
    // public SteamVR_TrackedObject/EIndex index
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::SteamVR_TrackedObject::EIndex index;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_TrackedObject::EIndex) == 0x4);
    // Padding between fields: index and: modelOverride
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xDD4BA4
    // public System.String modelOverride
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* modelOverride;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [TooltipAttribute] Offset: 0xDD4BDC
    // public UnityEngine.Shader shader
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // [TooltipAttribute] Offset: 0xDD4C14
    // public System.Boolean verbose
    // Size: 0x1
    // Offset: 0x30
    bool verbose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xDD4C4C
    // public System.Boolean createComponents
    // Size: 0x1
    // Offset: 0x31
    bool createComponents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xDD4C84
    // public System.Boolean updateDynamically
    // Size: 0x1
    // Offset: 0x32
    bool updateDynamically;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public Valve.VR.RenderModel_ControllerMode_State_t controllerModeState
    // Size: 0x1
    // Offset: 0x33
    Valve::VR::RenderModel_ControllerMode_State_t controllerModeState;
    // Field size check
    static_assert(sizeof(Valve::VR::RenderModel_ControllerMode_State_t) == 0x1);
    // Padding between fields: controllerModeState and: renderModelName
    char __padding6[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD4CBC
    // private System.String <renderModelName>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* renderModelName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private SteamVR_Events/Action deviceConnectedAction
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action hideRenderModelsAction
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::SteamVR_Events::Action* hideRenderModelsAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action modelSkinSettingsHaveChangedAction
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SteamVR_Events::Action* modelSkinSettingsHaveChangedAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> nameCache
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* nameCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: SteamVR_RenderModel
    SteamVR_RenderModel(GlobalNamespace::SteamVR_TrackedObject::EIndex index_ = {}, ::Il2CppString* modelOverride_ = {}, UnityEngine::Shader* shader_ = {}, bool verbose_ = {}, bool createComponents_ = {}, bool updateDynamically_ = {}, Valve::VR::RenderModel_ControllerMode_State_t controllerModeState_ = {}, ::Il2CppString* renderModelName_ = {}, GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction_ = {}, GlobalNamespace::SteamVR_Events::Action* hideRenderModelsAction_ = {}, GlobalNamespace::SteamVR_Events::Action* modelSkinSettingsHaveChangedAction_ = {}, System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* nameCache_ = {}) noexcept : index{index_}, modelOverride{modelOverride_}, shader{shader_}, verbose{verbose_}, createComponents{createComponents_}, updateDynamically{updateDynamically_}, controllerModeState{controllerModeState_}, renderModelName{renderModelName_}, deviceConnectedAction{deviceConnectedAction_}, hideRenderModelsAction{hideRenderModelsAction_}, modelSkinSettingsHaveChangedAction{modelSkinSettingsHaveChangedAction_}, nameCache{nameCache_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.String modelOverrideWarning
    static constexpr const char* modelOverrideWarning = "Model override is really only meant to be used in the scene view for lining things up; using it at runtime is discouraged.  Use tracked device index instead to ensure the correct model is displayed for all users.";
    // Get static field: static public System.String modelOverrideWarning
    static ::Il2CppString* _get_modelOverrideWarning();
    // Set static field: static public System.String modelOverrideWarning
    static void _set_modelOverrideWarning(::Il2CppString* value);
    // static field const value: static public System.String k_localTransformName
    static constexpr const char* k_localTransformName = "attach";
    // Get static field: static public System.String k_localTransformName
    static ::Il2CppString* _get_k_localTransformName();
    // Set static field: static public System.String k_localTransformName
    static void _set_k_localTransformName(::Il2CppString* value);
    // Get static field: static public System.Collections.Hashtable models
    static System::Collections::Hashtable* _get_models();
    // Set static field: static public System.Collections.Hashtable models
    static void _set_models(System::Collections::Hashtable* value);
    // Get static field: static public System.Collections.Hashtable materials
    static System::Collections::Hashtable* _get_materials();
    // Set static field: static public System.Collections.Hashtable materials
    static void _set_materials(System::Collections::Hashtable* value);
    // public System.String get_renderModelName()
    // Offset: 0x13DA660
    ::Il2CppString* get_renderModelName();
    // private System.Void set_renderModelName(System.String value)
    // Offset: 0x13DA668
    void set_renderModelName(::Il2CppString* value);
    // private System.Void OnModelSkinSettingsHaveChanged(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x13DA670
    void OnModelSkinSettingsHaveChanged(Valve::VR::VREvent_t vrEvent);
    // private System.Void OnHideRenderModels(System.Boolean hidden)
    // Offset: 0x13DA894
    void OnHideRenderModels(bool hidden);
    // private System.Void OnDeviceConnected(System.Int32 i, System.Boolean connected)
    // Offset: 0x13DA9C8
    void OnDeviceConnected(int i, bool connected);
    // public System.Void UpdateModel()
    // Offset: 0x13DA6E0
    void UpdateModel();
    // private System.Collections.IEnumerator SetModelAsync(System.String renderModelName)
    // Offset: 0x13DA9E0
    System::Collections::IEnumerator* SetModelAsync(::Il2CppString* renderModelName);
    // private System.Boolean SetModel(System.String renderModelName)
    // Offset: 0x13DAA88
    bool SetModel(::Il2CppString* renderModelName);
    // private SteamVR_RenderModel/RenderModel LoadRenderModel(Valve.VR.CVRRenderModels renderModels, System.String renderModelName, System.String baseName)
    // Offset: 0x13DBCDC
    GlobalNamespace::SteamVR_RenderModel::RenderModel* LoadRenderModel(Valve::VR::CVRRenderModels* renderModels, ::Il2CppString* renderModelName, ::Il2CppString* baseName);
    // private System.Collections.IEnumerator FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x13DCBC4
    System::Collections::IEnumerator* FreeRenderModel(System::IntPtr pRenderModel);
    // public UnityEngine.Transform FindComponent(System.String componentName)
    // Offset: 0x13DCC98
    UnityEngine::Transform* FindComponent(::Il2CppString* componentName);
    // private System.Void StripMesh(UnityEngine.GameObject go)
    // Offset: 0x13DAF40
    void StripMesh(UnityEngine::GameObject* go);
    // private System.Boolean LoadComponents(SteamVR_RenderModel/RenderModelInterfaceHolder holder, System.String renderModelName)
    // Offset: 0x13DB084
    bool LoadComponents(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder* holder, ::Il2CppString* renderModelName);
    // private System.Void OnEnable()
    // Offset: 0x13DCE74
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13DCF9C
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x13DD000
    void Update();
    // public System.Void UpdateComponents(Valve.VR.CVRRenderModels renderModels)
    // Offset: 0x13DB898
    void UpdateComponents(Valve::VR::CVRRenderModels* renderModels);
    // public System.Void SetDeviceIndex(System.Int32 index)
    // Offset: 0x13DD084
    void SetDeviceIndex(int index);
    // static private System.Void Sleep()
    // Offset: 0x13DC7C0
    static void Sleep();
    // private Valve.VR.RenderModel_t MarshalRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x13DC7CC
    Valve::VR::RenderModel_t MarshalRenderModel(System::IntPtr pRenderModel);
    // private Valve.VR.RenderModel_TextureMap_t MarshalRenderModel_TextureMap(System.IntPtr pRenderModel)
    // Offset: 0x13DC9D4
    Valve::VR::RenderModel_TextureMap_t MarshalRenderModel_TextureMap(System::IntPtr pRenderModel);
    // private System.Void .ctor()
    // Offset: 0x13DCD34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_RenderModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_RenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_RenderModel*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x13DD108
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_RenderModel
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_RenderModel), 88 + sizeof(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>*)> __GlobalNamespace_SteamVR_RenderModelSizeCheck;
  static_assert(sizeof(SteamVR_RenderModel) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_RenderModel*, "", "SteamVR_RenderModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::get_renderModelName
// Il2CppName: get_renderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::get_renderModelName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "get_renderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::set_renderModelName
// Il2CppName: set_renderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(::Il2CppString*)>(&GlobalNamespace::SteamVR_RenderModel::set_renderModelName)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "set_renderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnModelSkinSettingsHaveChanged
// Il2CppName: OnModelSkinSettingsHaveChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(Valve::VR::VREvent_t)>(&GlobalNamespace::SteamVR_RenderModel::OnModelSkinSettingsHaveChanged)> {
  const MethodInfo* get() {
    static auto* vrEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnModelSkinSettingsHaveChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnHideRenderModels
// Il2CppName: OnHideRenderModels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(bool)>(&GlobalNamespace::SteamVR_RenderModel::OnHideRenderModels)> {
  const MethodInfo* get() {
    static auto* hidden = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnHideRenderModels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hidden});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnDeviceConnected
// Il2CppName: OnDeviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(int, bool)>(&GlobalNamespace::SteamVR_RenderModel::OnDeviceConnected)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnDeviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, connected});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::UpdateModel
// Il2CppName: UpdateModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::UpdateModel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "UpdateModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::SetModelAsync
// Il2CppName: SetModelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SteamVR_RenderModel::*)(::Il2CppString*)>(&GlobalNamespace::SteamVR_RenderModel::SetModelAsync)> {
  const MethodInfo* get() {
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "SetModelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModelName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::SetModel
// Il2CppName: SetModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_RenderModel::*)(::Il2CppString*)>(&GlobalNamespace::SteamVR_RenderModel::SetModel)> {
  const MethodInfo* get() {
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "SetModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModelName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::LoadRenderModel
// Il2CppName: LoadRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_RenderModel::RenderModel* (GlobalNamespace::SteamVR_RenderModel::*)(Valve::VR::CVRRenderModels*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::SteamVR_RenderModel::LoadRenderModel)> {
  const MethodInfo* get() {
    static auto* renderModels = &::il2cpp_utils::GetClassFromName("Valve.VR", "CVRRenderModels")->byval_arg;
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* baseName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "LoadRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModels, renderModelName, baseName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::FreeRenderModel
// Il2CppName: FreeRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SteamVR_RenderModel::*)(System::IntPtr)>(&GlobalNamespace::SteamVR_RenderModel::FreeRenderModel)> {
  const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "FreeRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::FindComponent
// Il2CppName: FindComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::SteamVR_RenderModel::*)(::Il2CppString*)>(&GlobalNamespace::SteamVR_RenderModel::FindComponent)> {
  const MethodInfo* get() {
    static auto* componentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "FindComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{componentName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::StripMesh
// Il2CppName: StripMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(UnityEngine::GameObject*)>(&GlobalNamespace::SteamVR_RenderModel::StripMesh)> {
  const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "StripMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::LoadComponents
// Il2CppName: LoadComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_RenderModel::*)(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder*, ::Il2CppString*)>(&GlobalNamespace::SteamVR_RenderModel::LoadComponents)> {
  const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("", "SteamVR_RenderModel/RenderModelInterfaceHolder")->byval_arg;
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "LoadComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder, renderModelName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::UpdateComponents
// Il2CppName: UpdateComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(Valve::VR::CVRRenderModels*)>(&GlobalNamespace::SteamVR_RenderModel::UpdateComponents)> {
  const MethodInfo* get() {
    static auto* renderModels = &::il2cpp_utils::GetClassFromName("Valve.VR", "CVRRenderModels")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "UpdateComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::SetDeviceIndex
// Il2CppName: SetDeviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(int)>(&GlobalNamespace::SteamVR_RenderModel::SetDeviceIndex)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "SetDeviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::Sleep
// Il2CppName: Sleep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_RenderModel::Sleep)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "Sleep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel
// Il2CppName: MarshalRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::RenderModel_t (GlobalNamespace::SteamVR_RenderModel::*)(System::IntPtr)>(&GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel)> {
  const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "MarshalRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel_TextureMap
// Il2CppName: MarshalRenderModel_TextureMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::RenderModel_TextureMap_t (GlobalNamespace::SteamVR_RenderModel::*)(System::IntPtr)>(&GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel_TextureMap)> {
  const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "MarshalRenderModel_TextureMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_RenderModel::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
