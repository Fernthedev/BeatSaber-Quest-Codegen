// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.INatPunchListener
#include "LiteNetLib/INatPunchListener.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatAddressType
  struct NatAddressType;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNatPunchListener
  class EventBasedNatPunchListener : public ::Il2CppObject/*, public LiteNetLib::INatPunchListener*/ {
    public:
    // Nested type: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest
    class OnNatIntroductionRequest;
    // Nested type: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess
    class OnNatIntroductionSuccess;
    // [CompilerGeneratedAttribute] Offset: 0xDCC568
    // private LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest NatIntroductionRequest
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* NatIntroductionRequest;
    // Field size check
    static_assert(sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCC578
    // private LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess NatIntroductionSuccess
    // Size: 0x8
    // Offset: 0x18
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* NatIntroductionSuccess;
    // Field size check
    static_assert(sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*) == 0x8);
    // Creating value type constructor for type: EventBasedNatPunchListener
    EventBasedNatPunchListener(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* NatIntroductionRequest_ = {}, LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* NatIntroductionSuccess_ = {}) noexcept : NatIntroductionRequest{NatIntroductionRequest_}, NatIntroductionSuccess{NatIntroductionSuccess_} {}
    // Creating interface conversion operator: operator LiteNetLib::INatPunchListener
    operator LiteNetLib::INatPunchListener() noexcept {
      return *reinterpret_cast<LiteNetLib::INatPunchListener*>(this);
    }
    // public System.Void add_NatIntroductionRequest(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest value)
    // Offset: 0x1B398B8
    void add_NatIntroductionRequest(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* value);
    // public System.Void remove_NatIntroductionRequest(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest value)
    // Offset: 0x1B3995C
    void remove_NatIntroductionRequest(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* value);
    // public System.Void add_NatIntroductionSuccess(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess value)
    // Offset: 0x1B39A00
    void add_NatIntroductionSuccess(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* value);
    // public System.Void remove_NatIntroductionSuccess(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess value)
    // Offset: 0x1B39AA4
    void remove_NatIntroductionSuccess(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* value);
    // private System.Void LiteNetLib.INatPunchListener.OnNatIntroductionRequest(System.Net.IPEndPoint localEndPoint, System.Net.IPEndPoint remoteEndPoint, System.String token)
    // Offset: 0x1B39B48
    void LiteNetLib_INatPunchListener_OnNatIntroductionRequest(System::Net::IPEndPoint* localEndPoint, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* token);
    // private System.Void LiteNetLib.INatPunchListener.OnNatIntroductionSuccess(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token)
    // Offset: 0x1B39F68
    void LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token);
    // public System.Void .ctor()
    // Offset: 0x1B3A3AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNatPunchListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNatPunchListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNatPunchListener*, creationType>()));
    }
  }; // LiteNetLib.EventBasedNatPunchListener
  #pragma pack(pop)
  static check_size<sizeof(EventBasedNatPunchListener), 24 + sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*)> __LiteNetLib_EventBasedNatPunchListenerSizeCheck;
  static_assert(sizeof(EventBasedNatPunchListener) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNatPunchListener*, "LiteNetLib", "EventBasedNatPunchListener");
// Writing includes for template specializations
#include "LiteNetLib/EventBasedNatPunchListener_OnNatIntroductionRequest.hpp"
#include "LiteNetLib/EventBasedNatPunchListener_OnNatIntroductionSuccess.hpp"
#include "System/Net/IPEndPoint.hpp"
#include "LiteNetLib/NatAddressType.hpp"
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest
// Il2CppName: add_NatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*)>(&LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "add_NatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest
// Il2CppName: remove_NatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*)>(&LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "remove_NatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess
// Il2CppName: add_NatIntroductionSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*)>(&LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "add_NatIntroductionSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess
// Il2CppName: remove_NatIntroductionSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*)>(&LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "remove_NatIntroductionSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest
// Il2CppName: LiteNetLib.INatPunchListener.OnNatIntroductionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(System::Net::IPEndPoint*, System::Net::IPEndPoint*, ::Il2CppString*)>(&LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "LiteNetLib.INatPunchListener.OnNatIntroductionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess
// Il2CppName: LiteNetLib.INatPunchListener.OnNatIntroductionSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::*)(System::Net::IPEndPoint*, LiteNetLib::NatAddressType, ::Il2CppString*)>(&LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener*), "LiteNetLib.INatPunchListener.OnNatIntroductionSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<LiteNetLib::NatAddressType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
