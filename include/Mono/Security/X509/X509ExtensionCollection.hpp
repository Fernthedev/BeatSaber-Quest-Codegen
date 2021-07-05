// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Extension
  class X509Extension;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509ExtensionCollection
  // [DefaultMemberAttribute] Offset: D86610
  class X509ExtensionCollection : public System::Collections::CollectionBase {
    public:
    // private System.Boolean readOnly
    // Size: 0x1
    // Offset: 0x18
    bool readOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: X509ExtensionCollection
    X509ExtensionCollection(bool readOnly_ = {}) noexcept : readOnly{readOnly_} {}
    // Deleting conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept = delete;
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x23A707C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionCollection* New_ctor(Mono::Security::ASN1* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509ExtensionCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionCollection*, creationType>(asn1)));
    }
    // public System.Int32 IndexOf(System.String oid)
    // Offset: 0x23AA760
    int IndexOf(::Il2CppString* oid);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x23AA8AC
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public Mono.Security.X509.X509Extension get_Item(System.String oid)
    // Offset: 0x23AA8D8
    Mono::Security::X509::X509Extension* get_Item(::Il2CppString* oid);
    // public System.Void .ctor()
    // Offset: 0x23AA758
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509ExtensionCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionCollection*, creationType>()));
    }
  }; // Mono.Security.X509.X509ExtensionCollection
  #pragma pack(pop)
  static check_size<sizeof(X509ExtensionCollection), 24 + sizeof(bool)> __Mono_Security_X509_X509ExtensionCollectionSizeCheck;
  static_assert(sizeof(X509ExtensionCollection) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509ExtensionCollection*, "Mono.Security.X509", "X509ExtensionCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::X509::X509ExtensionCollection::*)(::Il2CppString*)>(&Mono::Security::X509::X509ExtensionCollection::IndexOf)> {
  const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509ExtensionCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (Mono::Security::X509::X509ExtensionCollection::*)()>(&Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509ExtensionCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Extension* (Mono::Security::X509::X509ExtensionCollection::*)(::Il2CppString*)>(&Mono::Security::X509::X509ExtensionCollection::get_Item)> {
  const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509ExtensionCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
