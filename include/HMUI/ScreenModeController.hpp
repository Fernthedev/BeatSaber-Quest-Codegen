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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettings
  class CurvedCanvasSettings;
  // Forward declaring type: ScreenModeData
  class ScreenModeData;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScreenModeController
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenModeController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.CurvedCanvasSettings[] _curvedCanvases
    // Size: 0x8
    // Offset: 0x18
    ::Array<HMUI::CurvedCanvasSettings*>* curvedCanvases;
    // Field size check
    static_assert(sizeof(::Array<HMUI::CurvedCanvasSettings*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE16F34
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private HMUI.ScreenModeData _defaultModeData
    // Size: 0x8
    // Offset: 0x28
    HMUI::ScreenModeData* defaultModeData;
    // Field size check
    static_assert(sizeof(HMUI::ScreenModeData*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: ScreenModeController
    ScreenModeController(::Array<HMUI::CurvedCanvasSettings*>* curvedCanvases_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, HMUI::ScreenModeData* defaultModeData_ = {}, UnityEngine::Transform* transform_ = {}) noexcept : curvedCanvases{curvedCanvases_}, vrPlatformHelper{vrPlatformHelper_}, defaultModeData{defaultModeData_}, transform{transform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.CurvedCanvasSettings[] _curvedCanvases
    ::Array<HMUI::CurvedCanvasSettings*>*& dyn__curvedCanvases();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private HMUI.ScreenModeData _defaultModeData
    HMUI::ScreenModeData*& dyn__defaultModeData();
    // Get instance field reference: private UnityEngine.Transform _transform
    UnityEngine::Transform*& dyn__transform();
    // protected System.Void Awake()
    // Offset: 0x12FB438
    void Awake();
    // public System.Void SetMode(HMUI.ScreenModeData screenModeData)
    // Offset: 0x12FB634
    void SetMode(HMUI::ScreenModeData* screenModeData);
    // public System.Void SetDefaultMode()
    // Offset: 0x12FB89C
    void SetDefaultMode();
    // public System.Void .ctor()
    // Offset: 0x12FB8A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenModeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScreenModeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenModeController*, creationType>()));
    }
  }; // HMUI.ScreenModeController
  #pragma pack(pop)
  static check_size<sizeof(ScreenModeController), 48 + sizeof(UnityEngine::Transform*)> __HMUI_ScreenModeControllerSizeCheck;
  static_assert(sizeof(ScreenModeController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScreenModeController*, "HMUI", "ScreenModeController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScreenModeController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeController::*)()>(&HMUI::ScreenModeController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenModeController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenModeController::SetMode
// Il2CppName: SetMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeController::*)(HMUI::ScreenModeData*)>(&HMUI::ScreenModeController::SetMode)> {
  static const MethodInfo* get() {
    static auto* screenModeData = &::il2cpp_utils::GetClassFromName("HMUI", "ScreenModeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenModeController*), "SetMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenModeData});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenModeController::SetDefaultMode
// Il2CppName: SetDefaultMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeController::*)()>(&HMUI::ScreenModeController::SetDefaultMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenModeController*), "SetDefaultMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenModeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
