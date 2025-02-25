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
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Completed forward declares
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityDocument
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityDocument : public ::Il2CppObject {
    public:
    // System.Byte[] m_data
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* m_data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: SecurityDocument
    SecurityDocument(::Array<uint8_t>* m_data_ = {}) noexcept : m_data{m_data_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return m_data;
    }
    // Get instance field reference: System.Byte[] m_data
    ::Array<uint8_t>*& dyn_m_data();
    // public System.Void .ctor(System.Int32 numData)
    // Offset: 0x1B4E578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityDocument* New_ctor(int numData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecurityDocument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityDocument*, creationType>(numData)));
    }
    // public System.Void GuaranteeSize(System.Int32 size)
    // Offset: 0x1B4E5E8
    void GuaranteeSize(int size);
    // public System.Void AddString(System.String str, ref System.Int32 position)
    // Offset: 0x1B4E69C
    void AddString(::Il2CppString* str, ByRef<int> position);
    // public System.Void AppendString(System.String str, ref System.Int32 position)
    // Offset: 0x1B4E7FC
    void AppendString(::Il2CppString* str, ByRef<int> position);
    // static public System.Int32 EncodedStringSize(System.String str)
    // Offset: 0x1B4E8E0
    static int EncodedStringSize(::Il2CppString* str);
    // public System.String GetString(ref System.Int32 position, System.Boolean bCreate)
    // Offset: 0x1B4E900
    ::Il2CppString* GetString(ByRef<int> position, bool bCreate);
    // public System.Void AddToken(System.Byte b, ref System.Int32 position)
    // Offset: 0x1B4EC28
    void AddToken(uint8_t b, ByRef<int> position);
    // public System.Security.SecurityElement GetRootElement()
    // Offset: 0x1B4EC98
    System::Security::SecurityElement* GetRootElement();
    // public System.Security.SecurityElement GetElement(System.Int32 position, System.Boolean bCreate)
    // Offset: 0x1B4ECC0
    System::Security::SecurityElement* GetElement(int position, bool bCreate);
    // System.Security.SecurityElement InternalGetElement(ref System.Int32 position, System.Boolean bCreate)
    // Offset: 0x1B4ECE8
    System::Security::SecurityElement* InternalGetElement(ByRef<int> position, bool bCreate);
  }; // System.Security.SecurityDocument
  #pragma pack(pop)
  static check_size<sizeof(SecurityDocument), 16 + sizeof(::Array<uint8_t>*)> __System_Security_SecurityDocumentSizeCheck;
  static_assert(sizeof(SecurityDocument) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityDocument*, "System.Security", "SecurityDocument");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecurityDocument::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::SecurityDocument::GuaranteeSize
// Il2CppName: GuaranteeSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(int)>(&System::Security::SecurityDocument::GuaranteeSize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GuaranteeSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::AddString
// Il2CppName: AddString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(::Il2CppString*, ByRef<int>)>(&System::Security::SecurityDocument::AddString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "AddString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, position});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::AppendString
// Il2CppName: AppendString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(::Il2CppString*, ByRef<int>)>(&System::Security::SecurityDocument::AppendString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "AppendString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, position});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::EncodedStringSize
// Il2CppName: EncodedStringSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&System::Security::SecurityDocument::EncodedStringSize)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "EncodedStringSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::SecurityDocument::*)(ByRef<int>, bool)>(&System::Security::SecurityDocument::GetString)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bCreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, bCreate});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::AddToken
// Il2CppName: AddToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(uint8_t, ByRef<int>)>(&System::Security::SecurityDocument::AddToken)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "AddToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, position});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::GetRootElement
// Il2CppName: GetRootElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement* (System::Security::SecurityDocument::*)()>(&System::Security::SecurityDocument::GetRootElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GetRootElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::GetElement
// Il2CppName: GetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement* (System::Security::SecurityDocument::*)(int, bool)>(&System::Security::SecurityDocument::GetElement)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bCreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, bCreate});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::InternalGetElement
// Il2CppName: InternalGetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement* (System::Security::SecurityDocument::*)(ByRef<int>, bool)>(&System::Security::SecurityDocument::InternalGetElement)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bCreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "InternalGetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, bCreate});
  }
};
