// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: MainEffectController
  class MainEffectController;
  // Forward declaring type: ScreenCaptureCache
  class ScreenCaptureCache;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ScreenCaptureAfterDelay
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenCaptureAfterDelay : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ScreenCaptureAfterDelay::InitData
    class InitData;
    // Nested type: GlobalNamespace::ScreenCaptureAfterDelay::$Start$d__6
    class $Start$d__6;
    // [InjectAttribute] Offset: 0xE1F4C8
    // private MainEffectController _mainEffectController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MainEffectController* mainEffectController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1F4D8
    // private ScreenCaptureCache _screenCaptureCache
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScreenCaptureCache* screenCaptureCache;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScreenCaptureCache*) == 0x8);
    // [InjectAttribute] Offset: 0xE1F4E8
    // private ScreenCaptureAfterDelay/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ScreenCaptureAfterDelay::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScreenCaptureAfterDelay::InitData*) == 0x8);
    // private UnityEngine.Texture2D _captureTexture
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Texture2D* captureTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.RenderTexture _captureRenderTexture
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::RenderTexture* captureRenderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // Creating value type constructor for type: ScreenCaptureAfterDelay
    ScreenCaptureAfterDelay(GlobalNamespace::MainEffectController* mainEffectController_ = {}, GlobalNamespace::ScreenCaptureCache* screenCaptureCache_ = {}, GlobalNamespace::ScreenCaptureAfterDelay::InitData* initData_ = {}, UnityEngine::Texture2D* captureTexture_ = {}, UnityEngine::RenderTexture* captureRenderTexture_ = {}) noexcept : mainEffectController{mainEffectController_}, screenCaptureCache{screenCaptureCache_}, initData{initData_}, captureTexture{captureTexture_}, captureRenderTexture{captureRenderTexture_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private MainEffectController _mainEffectController
    GlobalNamespace::MainEffectController* _get__mainEffectController();
    // Set instance field: private MainEffectController _mainEffectController
    void _set__mainEffectController(GlobalNamespace::MainEffectController* value);
    // Get instance field: private ScreenCaptureCache _screenCaptureCache
    GlobalNamespace::ScreenCaptureCache* _get__screenCaptureCache();
    // Set instance field: private ScreenCaptureCache _screenCaptureCache
    void _set__screenCaptureCache(GlobalNamespace::ScreenCaptureCache* value);
    // Get instance field: private ScreenCaptureAfterDelay/InitData _initData
    GlobalNamespace::ScreenCaptureAfterDelay::InitData* _get__initData();
    // Set instance field: private ScreenCaptureAfterDelay/InitData _initData
    void _set__initData(GlobalNamespace::ScreenCaptureAfterDelay::InitData* value);
    // Get instance field: private UnityEngine.Texture2D _captureTexture
    UnityEngine::Texture2D* _get__captureTexture();
    // Set instance field: private UnityEngine.Texture2D _captureTexture
    void _set__captureTexture(UnityEngine::Texture2D* value);
    // Get instance field: private UnityEngine.RenderTexture _captureRenderTexture
    UnityEngine::RenderTexture* _get__captureRenderTexture();
    // Set instance field: private UnityEngine.RenderTexture _captureRenderTexture
    void _set__captureRenderTexture(UnityEngine::RenderTexture* value);
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x2394784
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0x2394820
    void OnDestroy();
    // private System.Void HandleMainEffectControllerAfterImageEffectEvent(UnityEngine.RenderTexture renderTexture)
    // Offset: 0x2394904
    void HandleMainEffectControllerAfterImageEffectEvent(UnityEngine::RenderTexture* renderTexture);
    // public System.Void .ctor()
    // Offset: 0x2394BFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenCaptureAfterDelay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScreenCaptureAfterDelay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenCaptureAfterDelay*, creationType>()));
    }
  }; // ScreenCaptureAfterDelay
  #pragma pack(pop)
  static check_size<sizeof(ScreenCaptureAfterDelay), 56 + sizeof(UnityEngine::RenderTexture*)> __GlobalNamespace_ScreenCaptureAfterDelaySizeCheck;
  static_assert(sizeof(ScreenCaptureAfterDelay) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureAfterDelay*, "", "ScreenCaptureAfterDelay");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureAfterDelay::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::ScreenCaptureAfterDelay::*)()>(&GlobalNamespace::ScreenCaptureAfterDelay::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenCaptureAfterDelay*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureAfterDelay::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenCaptureAfterDelay::*)()>(&GlobalNamespace::ScreenCaptureAfterDelay::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenCaptureAfterDelay*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureAfterDelay::HandleMainEffectControllerAfterImageEffectEvent
// Il2CppName: HandleMainEffectControllerAfterImageEffectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenCaptureAfterDelay::*)(UnityEngine::RenderTexture*)>(&GlobalNamespace::ScreenCaptureAfterDelay::HandleMainEffectControllerAfterImageEffectEvent)> {
  static const MethodInfo* get() {
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenCaptureAfterDelay*), "HandleMainEffectControllerAfterImageEffectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderTexture});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureAfterDelay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
