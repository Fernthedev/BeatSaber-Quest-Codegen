// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Destination
  // [TokenAttribute] Offset: FFFFFFFF
  class Destination : public ::Il2CppObject {
    public:
    // public readonly System.String ApiName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ApiName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String DeeplinkMessage
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* DeeplinkMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String DisplayName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* DisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Destination
    Destination(::Il2CppString* ApiName_ = {}, ::Il2CppString* DeeplinkMessage_ = {}, ::Il2CppString* DisplayName_ = {}) noexcept : ApiName{ApiName_}, DeeplinkMessage{DeeplinkMessage_}, DisplayName{DisplayName_} {}
    // Get instance field: public readonly System.String ApiName
    ::Il2CppString* _get_ApiName();
    // Set instance field: public readonly System.String ApiName
    void _set_ApiName(::Il2CppString* value);
    // Get instance field: public readonly System.String DeeplinkMessage
    ::Il2CppString* _get_DeeplinkMessage();
    // Set instance field: public readonly System.String DeeplinkMessage
    void _set_DeeplinkMessage(::Il2CppString* value);
    // Get instance field: public readonly System.String DisplayName
    ::Il2CppString* _get_DisplayName();
    // Set instance field: public readonly System.String DisplayName
    void _set_DisplayName(::Il2CppString* value);
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14F1854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Destination* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::Destination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Destination*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Destination
  #pragma pack(pop)
  static check_size<sizeof(Destination), 32 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_DestinationSizeCheck;
  static_assert(sizeof(Destination) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Destination*, "Oculus.Platform.Models", "Destination");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Destination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
