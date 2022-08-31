// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IInvitePlatformHandler
#include "GlobalNamespace/IInvitePlatformHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusInvitePlatformHandler
  class OculusInvitePlatformHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInvitePlatformHandler*, "", "OculusInvitePlatformHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OculusInvitePlatformHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusInvitePlatformHandler : public ::Il2CppObject/*, public ::GlobalNamespace::IInvitePlatformHandler*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IInvitePlatformHandler
    operator ::GlobalNamespace::IInvitePlatformHandler() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IInvitePlatformHandler*>(this);
    }
    // Creating interface conversion operator: i_IInvitePlatformHandler
    inline ::GlobalNamespace::IInvitePlatformHandler* i_IInvitePlatformHandler() noexcept {
      return reinterpret_cast<::GlobalNamespace::IInvitePlatformHandler*>(this);
    }
    // public System.Boolean get_isSupported()
    // Offset: 0x159D5F8
    bool get_isSupported();
    // public System.Void .ctor()
    // Offset: 0x159D660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusInvitePlatformHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusInvitePlatformHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusInvitePlatformHandler*, creationType>()));
    }
    // public System.Void OpenInvitePanel()
    // Offset: 0x159D600
    void OpenInvitePanel();
  }; // OculusInvitePlatformHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusInvitePlatformHandler::get_isSupported
// Il2CppName: get_isSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusInvitePlatformHandler::*)()>(&GlobalNamespace::OculusInvitePlatformHandler::get_isSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInvitePlatformHandler*), "get_isSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusInvitePlatformHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusInvitePlatformHandler::OpenInvitePanel
// Il2CppName: OpenInvitePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusInvitePlatformHandler::*)()>(&GlobalNamespace::OculusInvitePlatformHandler::OpenInvitePanel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusInvitePlatformHandler*), "OpenInvitePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
