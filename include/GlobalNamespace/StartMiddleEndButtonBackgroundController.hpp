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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: StartMiddleEndButtonBackgroundController
  class StartMiddleEndButtonBackgroundController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Sprite _startSprite
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* startSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _middleSprite
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* middleSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _endSprite
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* endSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private HMUI.ImageView _image
    // Size: 0x8
    // Offset: 0x30
    HMUI::ImageView* image;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // Creating value type constructor for type: StartMiddleEndButtonBackgroundController
    StartMiddleEndButtonBackgroundController(UnityEngine::Sprite* startSprite_ = {}, UnityEngine::Sprite* middleSprite_ = {}, UnityEngine::Sprite* endSprite_ = {}, HMUI::ImageView* image_ = {}) noexcept : startSprite{startSprite_}, middleSprite{middleSprite_}, endSprite{endSprite_}, image{image_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetStartSprite()
    // Offset: 0x11624C4
    void SetStartSprite();
    // public System.Void SetMiddleSprite()
    // Offset: 0x11624E8
    void SetMiddleSprite();
    // public System.Void SetEndSprite()
    // Offset: 0x116250C
    void SetEndSprite();
    // public System.Void .ctor()
    // Offset: 0x1162530
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StartMiddleEndButtonBackgroundController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StartMiddleEndButtonBackgroundController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StartMiddleEndButtonBackgroundController*, creationType>()));
    }
  }; // StartMiddleEndButtonBackgroundController
  #pragma pack(pop)
  static check_size<sizeof(StartMiddleEndButtonBackgroundController), 48 + sizeof(HMUI::ImageView*)> __GlobalNamespace_StartMiddleEndButtonBackgroundControllerSizeCheck;
  static_assert(sizeof(StartMiddleEndButtonBackgroundController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StartMiddleEndButtonBackgroundController*, "", "StartMiddleEndButtonBackgroundController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StartMiddleEndButtonBackgroundController::SetStartSprite
// Il2CppName: SetStartSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StartMiddleEndButtonBackgroundController::*)()>(&GlobalNamespace::StartMiddleEndButtonBackgroundController::SetStartSprite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StartMiddleEndButtonBackgroundController*), "SetStartSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StartMiddleEndButtonBackgroundController::SetMiddleSprite
// Il2CppName: SetMiddleSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StartMiddleEndButtonBackgroundController::*)()>(&GlobalNamespace::StartMiddleEndButtonBackgroundController::SetMiddleSprite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StartMiddleEndButtonBackgroundController*), "SetMiddleSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StartMiddleEndButtonBackgroundController::SetEndSprite
// Il2CppName: SetEndSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StartMiddleEndButtonBackgroundController::*)()>(&GlobalNamespace::StartMiddleEndButtonBackgroundController::SetEndSprite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StartMiddleEndButtonBackgroundController*), "SetEndSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StartMiddleEndButtonBackgroundController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
