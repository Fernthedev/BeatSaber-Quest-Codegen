#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CscaMasterList)
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class CscaMasterList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::CscaMasterList);
// Type: Org.BouncyCastle.Asn1.Icao::CscaMasterList
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(174))
// CS Name: ::Org.BouncyCastle.Asn1.Icao::CscaMasterList*
class CORDL_TYPE CscaMasterList : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field certList offset 0x18
 __declspec(property(get=__get_certList, put=__set_certList)) ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  certList;

 __declspec(property(get=get_Version)) int32_t  Version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_certList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>& __get_certList() ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> const& __get_certList() const;

/// @brief Method GetInstance addr 0xf742b4 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf74358 size 0x288 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Icao::CscaMasterList* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  certStructs) ;

/// @brief Method .ctor addr 0xf745e0 size 0x88 virtual false final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  certStructs) ;

/// @brief Method get_Version addr 0xf746e0 size 0x1c virtual true final false
inline int32_t get_Version() ;

/// @brief Method GetCertStructs addr 0xf746fc size 0x8 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> GetCertStructs() ;

/// @brief Method CopyCertList addr 0xf74668 size 0x78 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*> CopyCertList(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*,::Array<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>*>  orig) ;

/// @brief Method ToAsn1Object addr 0xf74704 size 0x11c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CscaMasterList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CscaMasterList(CscaMasterList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CscaMasterList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CscaMasterList(CscaMasterList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CscaMasterList()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::CscaMasterList, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::CscaMasterList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::CscaMasterList*, "Org.BouncyCastle.Asn1.Icao", "CscaMasterList");
