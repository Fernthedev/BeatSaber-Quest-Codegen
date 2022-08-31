// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlaybackRenderer
  class PlaybackRenderer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlaybackScreenshotRecorder
  class PlaybackScreenshotRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlaybackScreenshotRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackScreenshotRecorder*, "", "PlaybackScreenshotRecorder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PlaybackScreenshotRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class PlaybackScreenshotRecorder : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.String _directory
    // Size: 0x8
    // Offset: 0x18
    ::StringW directory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private PlaybackRenderer _playbackRenderer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PlaybackRenderer* playbackRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlaybackRenderer*) == 0x8);
    // private System.Int32 _frameNumber
    // Size: 0x4
    // Offset: 0x28
    int frameNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _directory
    [[deprecated("Use field access instead!")]] ::StringW& dyn__directory();
    // Get instance field reference: private PlaybackRenderer _playbackRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlaybackRenderer*& dyn__playbackRenderer();
    // Get instance field reference: private System.Int32 _frameNumber
    [[deprecated("Use field access instead!")]] int& dyn__frameNumber();
    // public System.String get_directory()
    // Offset: 0x134CCD4
    ::StringW get_directory();
    // public System.Void .ctor()
    // Offset: 0x134D1CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaybackScreenshotRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlaybackScreenshotRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaybackScreenshotRecorder*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x134CCDC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x134CD64
    void OnDisable();
    // public System.Void Init(System.String directory, System.Int32 framerate, PlaybackRenderer playbackRenderer)
    // Offset: 0x134CDEC
    void Init(::StringW directory, int framerate, ::GlobalNamespace::PlaybackRenderer* playbackRenderer);
    // private System.Void HandleTexturesReady()
    // Offset: 0x134CEF8
    void HandleTexturesReady();
    // private System.Void SaveScreenshot(UnityEngine.RenderTexture renderTexture, System.String directory)
    // Offset: 0x134CF88
    void SaveScreenshot(::UnityEngine::RenderTexture* renderTexture, ::StringW directory);
    // static private UnityEngine.Texture2D ConvertRenderTexture(UnityEngine.RenderTexture renderTexture)
    // Offset: 0x134D0A8
    static ::UnityEngine::Texture2D* ConvertRenderTexture(::UnityEngine::RenderTexture* renderTexture);
  }; // PlaybackScreenshotRecorder
  #pragma pack(pop)
  static check_size<sizeof(PlaybackScreenshotRecorder), 40 + sizeof(int)> __GlobalNamespace_PlaybackScreenshotRecorderSizeCheck;
  static_assert(sizeof(PlaybackScreenshotRecorder) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::get_directory
// Il2CppName: get_directory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::get_directory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackScreenshotRecorder*), "get_directory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackScreenshotRecorder*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackScreenshotRecorder*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)(::StringW, int, ::GlobalNamespace::PlaybackRenderer*)>(&GlobalNamespace::PlaybackScreenshotRecorder::Init)> {
  static const MethodInfo* get() {
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* framerate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playbackRenderer = &::il2cpp_utils::GetClassFromName("", "PlaybackRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackScreenshotRecorder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{directory, framerate, playbackRenderer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::HandleTexturesReady
// Il2CppName: HandleTexturesReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::HandleTexturesReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackScreenshotRecorder*), "HandleTexturesReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::SaveScreenshot
// Il2CppName: SaveScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)(::UnityEngine::RenderTexture*, ::StringW)>(&GlobalNamespace::PlaybackScreenshotRecorder::SaveScreenshot)> {
  static const MethodInfo* get() {
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackScreenshotRecorder*), "SaveScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderTexture, directory});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackScreenshotRecorder::ConvertRenderTexture
// Il2CppName: ConvertRenderTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::UnityEngine::RenderTexture*)>(&GlobalNamespace::PlaybackScreenshotRecorder::ConvertRenderTexture)> {
  static const MethodInfo* get() {
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackScreenshotRecorder*), "ConvertRenderTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderTexture});
  }
};
