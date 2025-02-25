// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509CertificateCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DAB7B8
  class X509CertificateCollection : public System::Collections::CollectionBase {
    public:
    // Nested type: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator
    class X509CertificateEnumerator;
    // Creating value type constructor for type: X509CertificateCollection
    X509CertificateCollection() noexcept {}
    // public Mono.Security.X509.X509Certificate get_Item(System.Int32 index)
    // Offset: 0x23D936C
    Mono::Security::X509::X509Certificate* get_Item(int index);
    // public System.Int32 Add(Mono.Security.X509.X509Certificate value)
    // Offset: 0x23D941C
    int Add(Mono::Security::X509::X509Certificate* value);
    // public Mono.Security.X509.X509CertificateCollection/Mono.Security.X509.X509CertificateEnumerator GetEnumerator()
    // Offset: 0x23D94CC
    Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x23D95F8
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x23D9364
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509CertificateCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateCollection*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x23D9624
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Mono.Security.X509.X509CertificateCollection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509CertificateCollection*, "Mono.Security.X509", "X509CertificateCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate* (Mono::Security::X509::X509CertificateCollection::*)(int)>(&Mono::Security::X509::X509CertificateCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::X509::X509CertificateCollection::*)(Mono::Security::X509::X509Certificate*)>(&Mono::Security::X509::X509CertificateCollection::Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator* (Mono::Security::X509::X509CertificateCollection::*)()>(&Mono::Security::X509::X509CertificateCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (Mono::Security::X509::X509CertificateCollection::*)()>(&Mono::Security::X509::X509CertificateCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::X509::X509CertificateCollection::*)()>(&Mono::Security::X509::X509CertificateCollection::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
