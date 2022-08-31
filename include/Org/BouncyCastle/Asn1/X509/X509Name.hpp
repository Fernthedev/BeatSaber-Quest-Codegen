// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509NameEntryConverter
  class X509NameEntryConverter;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509Name
  class X509Name;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Name);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Name*, "Org.BouncyCastle.Asn1.X509", "X509Name");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509Name
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Name : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly System.Collections.IList ordering
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IList* ordering;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.X509NameEntryConverter converter
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*) == 0x8);
    // private System.Collections.IList values
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::IList* values;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    // private System.Collections.IList added
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::IList* added;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    // private Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    public:
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier C
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_C();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier C
    static void _set_C(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier O
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_O();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier O
    static void _set_O(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier OU
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_OU();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier OU
    static void _set_OU(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier T
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_T();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier T
    static void _set_T(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CN
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_CN();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CN
    static void _set_CN(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Street
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_Street();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Street
    static void _set_Street(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SerialNumber
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_SerialNumber();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier SerialNumber
    static void _set_SerialNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier L
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_L();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier L
    static void _set_L(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ST
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_ST();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier ST
    static void _set_ST(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Surname
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_Surname();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Surname
    static void _set_Surname(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier GivenName
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_GivenName();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier GivenName
    static void _set_GivenName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Initials
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_Initials();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Initials
    static void _set_Initials(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Generation
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_Generation();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Generation
    static void _set_Generation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UniqueIdentifier
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_UniqueIdentifier();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UniqueIdentifier
    static void _set_UniqueIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier BusinessCategory
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_BusinessCategory();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier BusinessCategory
    static void _set_BusinessCategory(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PostalCode
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_PostalCode();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PostalCode
    static void _set_PostalCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DnQualifier
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_DnQualifier();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DnQualifier
    static void _set_DnQualifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Pseudonym
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_Pseudonym();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Pseudonym
    static void _set_Pseudonym(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DateOfBirth
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_DateOfBirth();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DateOfBirth
    static void _set_DateOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PlaceOfBirth
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_PlaceOfBirth();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PlaceOfBirth
    static void _set_PlaceOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Gender
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_Gender();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Gender
    static void _set_Gender(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CountryOfCitizenship
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_CountryOfCitizenship();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CountryOfCitizenship
    static void _set_CountryOfCitizenship(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CountryOfResidence
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_CountryOfResidence();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier CountryOfResidence
    static void _set_CountryOfResidence(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier NameAtBirth
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_NameAtBirth();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier NameAtBirth
    static void _set_NameAtBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PostalAddress
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_PostalAddress();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier PostalAddress
    static void _set_PostalAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DmdName
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_DmdName();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DmdName
    static void _set_DmdName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier TelephoneNumber
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_TelephoneNumber();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier TelephoneNumber
    static void _set_TelephoneNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier OrganizationIdentifier
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_OrganizationIdentifier();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier OrganizationIdentifier
    static void _set_OrganizationIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Name
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_Name();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier Name
    static void _set_Name(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier EmailAddress
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_EmailAddress();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier EmailAddress
    static void _set_EmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UnstructuredName
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_UnstructuredName();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UnstructuredName
    static void _set_UnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UnstructuredAddress
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_UnstructuredAddress();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UnstructuredAddress
    static void _set_UnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier E
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_E();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier E
    static void _set_E(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DC
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_DC();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier DC
    static void _set_DC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UID
    static ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_UID();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier UID
    static void _set_UID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static private readonly System.Boolean[] defaultReverse
    static ::ArrayW<bool> _get_defaultReverse();
    // Set static field: static private readonly System.Boolean[] defaultReverse
    static void _set_defaultReverse(::ArrayW<bool> value);
    // Get static field: static public readonly System.Collections.Hashtable DefaultSymbols
    static ::System::Collections::Hashtable* _get_DefaultSymbols();
    // Set static field: static public readonly System.Collections.Hashtable DefaultSymbols
    static void _set_DefaultSymbols(::System::Collections::Hashtable* value);
    // Get static field: static public readonly System.Collections.Hashtable RFC2253Symbols
    static ::System::Collections::Hashtable* _get_RFC2253Symbols();
    // Set static field: static public readonly System.Collections.Hashtable RFC2253Symbols
    static void _set_RFC2253Symbols(::System::Collections::Hashtable* value);
    // Get static field: static public readonly System.Collections.Hashtable RFC1779Symbols
    static ::System::Collections::Hashtable* _get_RFC1779Symbols();
    // Set static field: static public readonly System.Collections.Hashtable RFC1779Symbols
    static void _set_RFC1779Symbols(::System::Collections::Hashtable* value);
    // Get static field: static public readonly System.Collections.Hashtable DefaultLookup
    static ::System::Collections::Hashtable* _get_DefaultLookup();
    // Set static field: static public readonly System.Collections.Hashtable DefaultLookup
    static void _set_DefaultLookup(::System::Collections::Hashtable* value);
    // Get instance field reference: private readonly System.Collections.IList ordering
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn_ordering();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.X509NameEntryConverter converter
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*& dyn_converter();
    // Get instance field reference: private System.Collections.IList values
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn_values();
    // Get instance field reference: private System.Collections.IList added
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn_added();
    // Get instance field reference: private Org.BouncyCastle.Asn1.Asn1Sequence seq
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Sequence*& dyn_seq();
    // static public System.Boolean get_DefaultReverse()
    // Offset: 0x1F4CA40
    static bool get_DefaultReverse();
    // static private System.Void .cctor()
    // Offset: 0x1F4CAC8
    static void _cctor();
    // protected System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1F4DFBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Name* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::X509Name::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Name*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.X509Name GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x1F47460
    static ::Org::BouncyCastle::Asn1::X509::X509Name* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // static public Org.BouncyCastle.Asn1.X509.X509Name GetInstance(System.Object obj)
    // Offset: 0x1F4761C
    static ::Org::BouncyCastle::Asn1::X509::X509Name* GetInstance(::Il2CppObject* obj);
    // private System.Void AppendValue(System.Text.StringBuilder buf, System.Collections.IDictionary oidSymbols, Org.BouncyCastle.Asn1.DerObjectIdentifier oid, System.String val)
    // Offset: 0x1F4ECB0
    void AppendValue(::System::Text::StringBuilder* buf, ::System::Collections::IDictionary* oidSymbols, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW val);
    // public System.String ToString(System.Boolean reverse, System.Collections.IDictionary oidSymbols)
    // Offset: 0x1F4EF74
    ::StringW ToString(bool reverse, ::System::Collections::IDictionary* oidSymbols);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1F4E814
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x1F4F54C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Asn1.X509.X509Name
  #pragma pack(pop)
  static check_size<sizeof(X509Name), 48 + sizeof(::Org::BouncyCastle::Asn1::Asn1Sequence*)> __Org_BouncyCastle_Asn1_X509_X509NameSizeCheck;
  static_assert(sizeof(X509Name) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::get_DefaultReverse
// Il2CppName: get_DefaultReverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Org::BouncyCastle::Asn1::X509::X509Name::get_DefaultReverse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), "get_DefaultReverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::X509::X509Name::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::X509::X509Name::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* explicitly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, explicitly});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::X509Name::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::AppendValue
// Il2CppName: AppendValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::X509Name::*)(::System::Text::StringBuilder*, ::System::Collections::IDictionary*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(&Org::BouncyCastle::Asn1::X509::X509Name::AppendValue)> {
  static const MethodInfo* get() {
    static auto* buf = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* oidSymbols = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), "AppendValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, oidSymbols, oid, val});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::X509Name::*)(bool, ::System::Collections::IDictionary*)>(&Org::BouncyCastle::Asn1::X509::X509Name::ToString)> {
  static const MethodInfo* get() {
    static auto* reverse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* oidSymbols = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reverse, oidSymbols});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::X509Name::*)()>(&Org::BouncyCastle::Asn1::X509::X509Name::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509Name::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::X509::X509Name::*)()>(&Org::BouncyCastle::Asn1::X509::X509Name::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509Name*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
