#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Pkcs12StoreBuilder)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12StoreBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder);
// Type: Org.BouncyCastle.Pkcs::Pkcs12StoreBuilder
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1701))
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs12StoreBuilder*
class CORDL_TYPE Pkcs12StoreBuilder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field keyAlgorithm offset 0x10
 __declspec(property(get=__get_keyAlgorithm, put=__set_keyAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyAlgorithm;

/// @brief Field certAlgorithm offset 0x18
 __declspec(property(get=__get_certAlgorithm, put=__set_certAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  certAlgorithm;

/// @brief Field keyPrfAlgorithm offset 0x20
 __declspec(property(get=__get_keyPrfAlgorithm, put=__set_keyPrfAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyPrfAlgorithm;

/// @brief Field certPrfAlgorithm offset 0x28
 __declspec(property(get=__get_certPrfAlgorithm, put=__set_certPrfAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  certPrfAlgorithm;

/// @brief Field useDerEncoding offset 0x30
 __declspec(property(get=__get_useDerEncoding, put=__set_useDerEncoding)) bool  useDerEncoding;

constexpr void __set_keyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_keyAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_keyAlgorithm() const;

constexpr void __set_certAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_certAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_certAlgorithm() const;

constexpr void __set_keyPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_keyPrfAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_keyPrfAlgorithm() const;

constexpr void __set_certPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_certPrfAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_certPrfAlgorithm() const;

constexpr void __set_useDerEncoding(bool  value) ;

constexpr bool& __get_useDerEncoding() ;

constexpr bool const& __get_useDerEncoding() const;

static inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* New_ctor() ;

/// @brief Method .ctor addr 0x10e6194 size 0x78 virtual false final false
inline void _ctor() ;

/// @brief Method Build addr 0x10e620c size 0x94 virtual false final false
inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* Build() ;

/// @brief Method SetCertAlgorithm addr 0x10e62a0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetCertAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  certAlgorithm) ;

/// @brief Method SetKeyAlgorithm addr 0x10e62a8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetKeyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyAlgorithm) ;

/// @brief Method SetKeyAlgorithm addr 0x10e62b0 size 0xc virtual false final false
inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetKeyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyPrfAlgorithm) ;

/// @brief Method SetUseDerEncoding addr 0x10e62bc size 0xc virtual false final false
inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetUseDerEncoding(bool  useDerEncoding) ;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12StoreBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pkcs12StoreBuilder(Pkcs12StoreBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12StoreBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pkcs12StoreBuilder(Pkcs12StoreBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Pkcs12StoreBuilder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder*, "Org.BouncyCastle.Pkcs", "Pkcs12StoreBuilder");
