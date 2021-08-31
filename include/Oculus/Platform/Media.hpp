// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: MediaContentType
  struct MediaContentType;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ShareMediaResult
  class ShareMediaResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Media
  // [TokenAttribute] Offset: FFFFFFFF
  class Media : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Media
    Media() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ShareMediaResult> ShareToFacebook(System.String postTextSuggestion, System.String filePath, Oculus.Platform.MediaContentType contentType)
    // Offset: 0x14E34C8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ShareMediaResult*>* ShareToFacebook(::Il2CppString* postTextSuggestion, ::Il2CppString* filePath, Oculus::Platform::MediaContentType contentType);
  }; // Oculus.Platform.Media
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Media*, "Oculus.Platform", "Media");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Media::ShareToFacebook
// Il2CppName: ShareToFacebook
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ShareMediaResult*>* (*)(::Il2CppString*, ::Il2CppString*, Oculus::Platform::MediaContentType)>(&Oculus::Platform::Media::ShareToFacebook)> {
  static const MethodInfo* get() {
    static auto* postTextSuggestion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contentType = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MediaContentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Media*), "ShareToFacebook", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{postTextSuggestion, filePath, contentType});
  }
};
