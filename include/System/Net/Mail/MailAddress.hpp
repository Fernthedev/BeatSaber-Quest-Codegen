// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: FormatException
  class FormatException;
}
// Completed forward declares
// Type namespace: System.Net.Mail
namespace System::Net::Mail {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Mail.MailAddress
  // [TokenAttribute] Offset: FFFFFFFF
  class MailAddress : public ::Il2CppObject {
    public:
    // private System.String address
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* address;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String displayName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* displayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String host
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* host;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String user
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* user;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String to_string
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* to_string;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MailAddress
    MailAddress(::Il2CppString* address_ = {}, ::Il2CppString* displayName_ = {}, ::Il2CppString* host_ = {}, ::Il2CppString* user_ = {}, ::Il2CppString* to_string_ = {}) noexcept : address{address_}, displayName{displayName_}, host{host_}, user{user_}, to_string{to_string_} {}
    // Get instance field reference: private System.String address
    ::Il2CppString*& dyn_address();
    // Get instance field reference: private System.String displayName
    ::Il2CppString*& dyn_displayName();
    // Get instance field reference: private System.String host
    ::Il2CppString*& dyn_host();
    // Get instance field reference: private System.String user
    ::Il2CppString*& dyn_user();
    // Get instance field reference: private System.String to_string
    ::Il2CppString*& dyn_to_string();
    // public System.String get_Address()
    // Offset: 0x167E4AC
    ::Il2CppString* get_Address();
    // public System.String get_DisplayName()
    // Offset: 0x167E4B4
    ::Il2CppString* get_DisplayName();
    // public System.Void .ctor(System.String address)
    // Offset: 0x167E0A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MailAddress* New_ctor(::Il2CppString* address) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Mail::MailAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MailAddress*, creationType>(address)));
    }
    // public System.Void .ctor(System.String address, System.String displayName)
    // Offset: 0x167E0D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MailAddress* New_ctor(::Il2CppString* address, ::Il2CppString* displayName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Mail::MailAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MailAddress*, creationType>(address, displayName)));
    }
    // public System.Void .ctor(System.String address, System.String displayName, System.Text.Encoding displayNameEncoding)
    // Offset: 0x167E114
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MailAddress* New_ctor(::Il2CppString* address, ::Il2CppString* displayName, System::Text::Encoding* displayNameEncoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Mail::MailAddress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MailAddress*, creationType>(address, displayName, displayNameEncoding)));
    }
    // private System.Void ParseAddress(System.String address)
    // Offset: 0x167E200
    void ParseAddress(::Il2CppString* address);
    // static private System.FormatException CreateFormatException()
    // Offset: 0x167E444
    static System::FormatException* CreateFormatException();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x167E510
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x167E574
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x167E5A0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Mail.MailAddress
  #pragma pack(pop)
  static check_size<sizeof(MailAddress), 48 + sizeof(::Il2CppString*)> __System_Net_Mail_MailAddressSizeCheck;
  static_assert(sizeof(MailAddress) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::MailAddress*, "System.Net.Mail", "MailAddress");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Mail::MailAddress::*)()>(&System::Net::Mail::MailAddress::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Mail::MailAddress*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Mail::MailAddress::*)()>(&System::Net::Mail::MailAddress::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Mail::MailAddress*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::ParseAddress
// Il2CppName: ParseAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Mail::MailAddress::*)(::Il2CppString*)>(&System::Net::Mail::MailAddress::ParseAddress)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Mail::MailAddress*), "ParseAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::CreateFormatException
// Il2CppName: CreateFormatException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::FormatException* (*)()>(&System::Net::Mail::MailAddress::CreateFormatException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Mail::MailAddress*), "CreateFormatException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Mail::MailAddress::*)(::Il2CppObject*)>(&System::Net::Mail::MailAddress::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Mail::MailAddress*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Mail::MailAddress::*)()>(&System::Net::Mail::MailAddress::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Mail::MailAddress*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Mail::MailAddress::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Mail::MailAddress::*)()>(&System::Net::Mail::MailAddress::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Mail::MailAddress*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
