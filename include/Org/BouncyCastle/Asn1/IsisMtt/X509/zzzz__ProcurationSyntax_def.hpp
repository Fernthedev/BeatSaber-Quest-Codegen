#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProcurationSyntax)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProcurationSyntax;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::ProcurationSyntax
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(189))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::ProcurationSyntax*
class CORDL_TYPE ProcurationSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field country offset 0x10
 __declspec(property(get=__get_country, put=__set_country)) ::StringW  country;

/// @brief Field typeOfSubstitution offset 0x18
 __declspec(property(get=__get_typeOfSubstitution, put=__set_typeOfSubstitution)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  typeOfSubstitution;

/// @brief Field thirdPerson offset 0x20
 __declspec(property(get=__get_thirdPerson, put=__set_thirdPerson)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  thirdPerson;

/// @brief Field certRef offset 0x28
 __declspec(property(get=__get_certRef, put=__set_certRef)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  certRef;

 __declspec(property(get=get_Country)) ::StringW  Country;

 __declspec(property(get=get_TypeOfSubstitution)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  TypeOfSubstitution;

 __declspec(property(get=get_ThirdPerson)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  ThirdPerson;

 __declspec(property(get=get_CertRef)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  CertRef;

constexpr void __set_country(::StringW  value) ;

constexpr ::StringW& __get_country() ;

constexpr ::StringW const& __get_country() const;

constexpr void __set_typeOfSubstitution(::Org::BouncyCastle::Asn1::X500::DirectoryString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* __get_typeOfSubstitution() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> __get_typeOfSubstitution() const;

constexpr void __set_thirdPerson(::Org::BouncyCastle::Asn1::X509::GeneralName*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* __get_thirdPerson() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> __get_thirdPerson() const;

constexpr void __set_certRef(::Org::BouncyCastle::Asn1::X509::IssuerSerial*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* __get_certRef() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> __get_certRef() const;

/// @brief Method GetInstance addr 0xf795c4 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf7974c size 0x2fc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::StringW  country, ::Org::BouncyCastle::Asn1::X500::DirectoryString*  typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  certRef) ;

/// @brief Method .ctor addr 0xf79a48 size 0x3c virtual false final false
inline void _ctor(::StringW  country, ::Org::BouncyCastle::Asn1::X500::DirectoryString*  typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  certRef) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::StringW  country, ::Org::BouncyCastle::Asn1::X500::DirectoryString*  typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::GeneralName*  thirdPerson) ;

/// @brief Method .ctor addr 0xf79a84 size 0x3c virtual false final false
inline void _ctor(::StringW  country, ::Org::BouncyCastle::Asn1::X500::DirectoryString*  typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::GeneralName*  thirdPerson) ;

/// @brief Method get_Country addr 0xf79ac0 size 0x8 virtual true final false
inline ::StringW get_Country() ;

/// @brief Method get_TypeOfSubstitution addr 0xf79ac8 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_TypeOfSubstitution() ;

/// @brief Method get_ThirdPerson addr 0xf79ad0 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_ThirdPerson() ;

/// @brief Method get_CertRef addr 0xf79ad8 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_CertRef() ;

/// @brief Method ToAsn1Object addr 0xf79ae0 size 0x174 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProcurationSyntax(ProcurationSyntax && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProcurationSyntax(ProcurationSyntax const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProcurationSyntax()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "ProcurationSyntax");
