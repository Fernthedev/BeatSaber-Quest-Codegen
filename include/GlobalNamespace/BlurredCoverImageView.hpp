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
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BlurredCoverImageView
  // [TokenAttribute] Offset: FFFFFFFF
  class BlurredCoverImageView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BlurredCoverImageView::$SetTextureAsync$d__6
    struct $SetTextureAsync$d__6;
    // private HMUI.ImageView _coverImage
    // Size: 0x8
    // Offset: 0x18
    HMUI::ImageView* coverImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // [SpaceAttribute] Offset: 0xE43778
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    // private System.String _settingTextureForLevelId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* settingTextureForLevelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private UnityEngine.Texture2D _blurredCoverTexture
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Texture2D* blurredCoverTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // Creating value type constructor for type: BlurredCoverImageView
    BlurredCoverImageView(HMUI::ImageView* coverImage_ = {}, GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer_ = {}, ::Il2CppString* settingTextureForLevelId_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, UnityEngine::Texture2D* blurredCoverTexture_ = {}) noexcept : coverImage{coverImage_}, kawaseBlurRenderer{kawaseBlurRenderer_}, settingTextureForLevelId{settingTextureForLevelId_}, cancellationTokenSource{cancellationTokenSource_}, blurredCoverTexture{blurredCoverTexture_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private HMUI.ImageView _coverImage
    HMUI::ImageView* _get__coverImage();
    // Set instance field: private HMUI.ImageView _coverImage
    void _set__coverImage(HMUI::ImageView* value);
    // Get instance field: private KawaseBlurRendererSO _kawaseBlurRenderer
    GlobalNamespace::KawaseBlurRendererSO* _get__kawaseBlurRenderer();
    // Set instance field: private KawaseBlurRendererSO _kawaseBlurRenderer
    void _set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO* value);
    // Get instance field: private System.String _settingTextureForLevelId
    ::Il2CppString* _get__settingTextureForLevelId();
    // Set instance field: private System.String _settingTextureForLevelId
    void _set__settingTextureForLevelId(::Il2CppString* value);
    // Get instance field: private System.Threading.CancellationTokenSource _cancellationTokenSource
    System::Threading::CancellationTokenSource* _get__cancellationTokenSource();
    // Set instance field: private System.Threading.CancellationTokenSource _cancellationTokenSource
    void _set__cancellationTokenSource(System::Threading::CancellationTokenSource* value);
    // Get instance field: private UnityEngine.Texture2D _blurredCoverTexture
    UnityEngine::Texture2D* _get__blurredCoverTexture();
    // Set instance field: private UnityEngine.Texture2D _blurredCoverTexture
    void _set__blurredCoverTexture(UnityEngine::Texture2D* value);
    // protected System.Void OnDestroy()
    // Offset: 0x10D1AD4
    void OnDestroy();
    // public System.Void SetTextureAsync(IPreviewBeatmapLevel level)
    // Offset: 0x10D1B9C
    void SetTextureAsync(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void .ctor()
    // Offset: 0x10D1C60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlurredCoverImageView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BlurredCoverImageView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlurredCoverImageView*, creationType>()));
    }
  }; // BlurredCoverImageView
  #pragma pack(pop)
  static check_size<sizeof(BlurredCoverImageView), 56 + sizeof(UnityEngine::Texture2D*)> __GlobalNamespace_BlurredCoverImageViewSizeCheck;
  static_assert(sizeof(BlurredCoverImageView) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlurredCoverImageView*, "", "BlurredCoverImageView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BlurredCoverImageView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlurredCoverImageView::*)()>(&GlobalNamespace::BlurredCoverImageView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlurredCoverImageView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlurredCoverImageView::SetTextureAsync
// Il2CppName: SetTextureAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlurredCoverImageView::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::BlurredCoverImageView::SetTextureAsync)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlurredCoverImageView*), "SetTextureAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlurredCoverImageView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
