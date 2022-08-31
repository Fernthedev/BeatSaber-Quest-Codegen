// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Party
  class Party;
  // Forward declaring type: PartyUpdateNotification
  class PartyUpdateNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Parties
  class Parties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Parties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Parties*, "Oculus.Platform", "Parties");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Parties
  // [TokenAttribute] Offset: FFFFFFFF
  class Parties : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Party> GetCurrent()
    // Offset: 0x2AA8490
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>* GetCurrent();
    // static public System.Void SetPartyUpdateNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.PartyUpdateNotification> callback)
    // Offset: 0x2AA859C
    static void SetPartyUpdateNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PartyUpdateNotification*>::Callback* callback);
  }; // Oculus.Platform.Parties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Parties::GetCurrent
// Il2CppName: GetCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>* (*)()>(&Oculus::Platform::Parties::GetCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Parties*), "GetCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Parties::SetPartyUpdateNotificationCallback
// Il2CppName: SetPartyUpdateNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
