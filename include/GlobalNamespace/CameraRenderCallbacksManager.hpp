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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CameraRenderCallbacksManager
  // [ExecuteInEditMode] Offset: DF58F0
  class CameraRenderCallbacksManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks
    class ICameraRenderCallbacks;
    // protected System.Collections.Generic.HashSet`1<CameraRenderCallbacksManager/ICameraRenderCallbacks> _observers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>* observers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // Creating value type constructor for type: CameraRenderCallbacksManager
    CameraRenderCallbacksManager(System::Collections::Generic::HashSet_1<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>* observers_ = {}, UnityEngine::Camera* camera_ = {}) noexcept : observers{observers_}, camera{camera_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CameraRenderCallbacksManager> _callbackManagers
    static System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CameraRenderCallbacksManager*>* _get__callbackManagers();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CameraRenderCallbacksManager> _callbackManagers
    static void _set__callbackManagers(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CameraRenderCallbacksManager*>* value);
    // static public System.Void RegisterForCameraCallbacks(UnityEngine.Camera camera, CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x1D88D0C
    static void RegisterForCameraCallbacks(UnityEngine::Camera* camera, GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // static public System.Void UnregisterFromCameraCallbacks(CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x1D88EFC
    static void UnregisterFromCameraCallbacks(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // private System.Void RegisterForCameraCallbacks(CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x1D88E94
    void RegisterForCameraCallbacks(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // private System.Void UnregisterFromCameraCallbacksInternal(CameraRenderCallbacksManager/ICameraRenderCallbacks observer)
    // Offset: 0x1D891BC
    void UnregisterFromCameraCallbacksInternal(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks* observer);
    // protected System.Void Awake()
    // Offset: 0x1D89270
    void Awake();
    // private System.Void OnPreRender()
    // Offset: 0x1D892E8
    void OnPreRender();
    // private System.Void OnPostRender()
    // Offset: 0x1D8945C
    void OnPostRender();
    // public System.Void .ctor()
    // Offset: 0x1D895CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CameraRenderCallbacksManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CameraRenderCallbacksManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CameraRenderCallbacksManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D8963C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // CameraRenderCallbacksManager
  #pragma pack(pop)
  static check_size<sizeof(CameraRenderCallbacksManager), 32 + sizeof(UnityEngine::Camera*)> __GlobalNamespace_CameraRenderCallbacksManagerSizeCheck;
  static_assert(sizeof(CameraRenderCallbacksManager) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CameraRenderCallbacksManager*, "", "CameraRenderCallbacksManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::RegisterForCameraCallbacks
// Il2CppName: RegisterForCameraCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Camera*, GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*)>(&GlobalNamespace::CameraRenderCallbacksManager::RegisterForCameraCallbacks)> {
  const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* observer = &::il2cpp_utils::GetClassFromName("", "CameraRenderCallbacksManager/ICameraRenderCallbacks")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), "RegisterForCameraCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, observer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::UnregisterFromCameraCallbacks
// Il2CppName: UnregisterFromCameraCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*)>(&GlobalNamespace::CameraRenderCallbacksManager::UnregisterFromCameraCallbacks)> {
  const MethodInfo* get() {
    static auto* observer = &::il2cpp_utils::GetClassFromName("", "CameraRenderCallbacksManager/ICameraRenderCallbacks")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), "UnregisterFromCameraCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{observer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::RegisterForCameraCallbacks
// Il2CppName: RegisterForCameraCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraRenderCallbacksManager::*)(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*)>(&GlobalNamespace::CameraRenderCallbacksManager::RegisterForCameraCallbacks)> {
  const MethodInfo* get() {
    static auto* observer = &::il2cpp_utils::GetClassFromName("", "CameraRenderCallbacksManager/ICameraRenderCallbacks")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), "RegisterForCameraCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{observer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::UnregisterFromCameraCallbacksInternal
// Il2CppName: UnregisterFromCameraCallbacksInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraRenderCallbacksManager::*)(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*)>(&GlobalNamespace::CameraRenderCallbacksManager::UnregisterFromCameraCallbacksInternal)> {
  const MethodInfo* get() {
    static auto* observer = &::il2cpp_utils::GetClassFromName("", "CameraRenderCallbacksManager/ICameraRenderCallbacks")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), "UnregisterFromCameraCallbacksInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{observer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraRenderCallbacksManager::*)()>(&GlobalNamespace::CameraRenderCallbacksManager::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::OnPreRender
// Il2CppName: OnPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraRenderCallbacksManager::*)()>(&GlobalNamespace::CameraRenderCallbacksManager::OnPreRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), "OnPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::OnPostRender
// Il2CppName: OnPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraRenderCallbacksManager::*)()>(&GlobalNamespace::CameraRenderCallbacksManager::OnPostRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), "OnPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CameraRenderCallbacksManager::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
