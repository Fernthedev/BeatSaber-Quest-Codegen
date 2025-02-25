// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.Uri/System.Offset
#include "System/Uri_Offset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Uri/System.UriInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Uri::UriInfo : public ::Il2CppObject {
    public:
    // public System.String Host
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Host;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String ScopeId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* ScopeId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String String
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* String;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Uri/System.Offset Offset
    // Size: 0x10
    // Offset: 0x28
    System::Uri::Offset Offset;
    // Field size check
    static_assert(sizeof(System::Uri::Offset) == 0x10);
    // public System.String DnsSafeHost
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* DnsSafeHost;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Uri/System.MoreInfo MoreInfo
    // Size: 0x8
    // Offset: 0x40
    System::Uri::MoreInfo* MoreInfo;
    // Field size check
    static_assert(sizeof(System::Uri::MoreInfo*) == 0x8);
    // Creating value type constructor for type: UriInfo
    UriInfo(::Il2CppString* Host_ = {}, ::Il2CppString* ScopeId_ = {}, ::Il2CppString* String_ = {}, System::Uri::Offset Offset_ = {}, ::Il2CppString* DnsSafeHost_ = {}, System::Uri::MoreInfo* MoreInfo_ = {}) noexcept : Host{Host_}, ScopeId{ScopeId_}, String{String_}, Offset{Offset_}, DnsSafeHost{DnsSafeHost_}, MoreInfo{MoreInfo_} {}
    // Get instance field reference: public System.String Host
    ::Il2CppString*& dyn_Host();
    // Get instance field reference: public System.String ScopeId
    ::Il2CppString*& dyn_ScopeId();
    // Get instance field reference: public System.String String
    ::Il2CppString*& dyn_String();
    // Get instance field reference: public System.Uri/System.Offset Offset
    System::Uri::Offset& dyn_Offset();
    // Get instance field reference: public System.String DnsSafeHost
    ::Il2CppString*& dyn_DnsSafeHost();
    // Get instance field reference: public System.Uri/System.MoreInfo MoreInfo
    System::Uri::MoreInfo*& dyn_MoreInfo();
    // public System.Void .ctor()
    // Offset: 0x23E6388
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Uri::UriInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Uri::UriInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Uri::UriInfo*, creationType>()));
    }
  }; // System.Uri/System.UriInfo
  #pragma pack(pop)
  static check_size<sizeof(Uri::UriInfo), 64 + sizeof(System::Uri::MoreInfo*)> __System_Uri_UriInfoSizeCheck;
  static_assert(sizeof(Uri::UriInfo) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Uri::UriInfo*, "System", "Uri/UriInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Uri::UriInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
