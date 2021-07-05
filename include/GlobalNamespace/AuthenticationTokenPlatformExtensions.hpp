// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
// Including type: UserInfo
#include "GlobalNamespace/UserInfo.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AuthenticationTokenPlatformExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AuthenticationTokenPlatformExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AuthenticationTokenPlatformExtensions
    AuthenticationTokenPlatformExtensions() noexcept {}
    // static public AuthenticationToken/Platform ToAuthenticationTokenPlatform(UserInfo/Platform platform)
    // Offset: 0x1132F10
    static GlobalNamespace::AuthenticationToken::Platform ToAuthenticationTokenPlatform(GlobalNamespace::UserInfo::Platform platform);
    // static public UserInfo/Platform ToUserInfoPlatform(AuthenticationToken/Platform platform)
    // Offset: 0x1132F3C
    static GlobalNamespace::UserInfo::Platform ToUserInfoPlatform(GlobalNamespace::AuthenticationToken::Platform platform);
  }; // AuthenticationTokenPlatformExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AuthenticationTokenPlatformExtensions*, "", "AuthenticationTokenPlatformExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform
// Il2CppName: ToAuthenticationTokenPlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AuthenticationToken::Platform (*)(GlobalNamespace::UserInfo::Platform)>(&GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform)> {
  const MethodInfo* get() {
    static auto* platform = &::il2cpp_utils::GetClassFromName("", "UserInfo/Platform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationTokenPlatformExtensions*), "ToAuthenticationTokenPlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{platform});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform
// Il2CppName: ToUserInfoPlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UserInfo::Platform (*)(GlobalNamespace::AuthenticationToken::Platform)>(&GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform)> {
  const MethodInfo* get() {
    static auto* platform = &::il2cpp_utils::GetClassFromName("", "AuthenticationToken/Platform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthenticationTokenPlatformExtensions*), "ToUserInfoPlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{platform});
  }
};
