#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RsassaPssParameters)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters);
// Type: Org.BouncyCastle.Asn1.Pkcs::RsassaPssParameters
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(250))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::RsassaPssParameters*
class CORDL_TYPE RsassaPssParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field hashAlgorithm offset 0x10
 __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  hashAlgorithm;

/// @brief Field maskGenAlgorithm offset 0x18
 __declspec(property(get=__get_maskGenAlgorithm, put=__set_maskGenAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  maskGenAlgorithm;

/// @brief Field saltLength offset 0x20
 __declspec(property(get=__get_saltLength, put=__set_saltLength)) ::Org::BouncyCastle::Asn1::DerInteger*  saltLength;

/// @brief Field trailerField offset 0x28
 __declspec(property(get=__get_trailerField, put=__set_trailerField)) ::Org::BouncyCastle::Asn1::DerInteger*  trailerField;

 __declspec(property(get=get_HashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  HashAlgorithm;

 __declspec(property(get=get_MaskGenAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  MaskGenAlgorithm;

 __declspec(property(get=get_SaltLength)) ::Org::BouncyCastle::Asn1::DerInteger*  SaltLength;

 __declspec(property(get=get_TrailerField)) ::Org::BouncyCastle::Asn1::DerInteger*  TrailerField;

constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_hashAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_hashAlgorithm() const;

constexpr void __set_maskGenAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_maskGenAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_maskGenAlgorithm() const;

constexpr void __set_saltLength(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_saltLength() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_saltLength() const;

constexpr void __set_trailerField(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_trailerField() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_trailerField() const;

static inline void setStaticF_DefaultHashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultHashAlgorithm() ;

static inline void setStaticF_DefaultMaskGenFunction(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* getStaticF_DefaultMaskGenFunction() ;

static inline void setStaticF_DefaultSaltLength(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_DefaultSaltLength() ;

static inline void setStaticF_DefaultTrailerField(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_DefaultTrailerField() ;

/// @brief Method GetInstance addr 0xf8eb4c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* New_ctor() ;

/// @brief Method .ctor addr 0xf8eeb8 size 0x74 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  hashAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  maskGenAlgorithm, ::Org::BouncyCastle::Asn1::DerInteger*  saltLength, ::Org::BouncyCastle::Asn1::DerInteger*  trailerField) ;

/// @brief Method .ctor addr 0xf8ef2c size 0x40 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  hashAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  maskGenAlgorithm, ::Org::BouncyCastle::Asn1::DerInteger*  saltLength, ::Org::BouncyCastle::Asn1::DerInteger*  trailerField) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf8ecd4 size 0x1e4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_HashAlgorithm addr 0xf8ef6c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm() ;

/// @brief Method get_MaskGenAlgorithm addr 0xf8ef74 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MaskGenAlgorithm() ;

/// @brief Method get_SaltLength addr 0xf8ef7c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_SaltLength() ;

/// @brief Method get_TrailerField addr 0xf8ef84 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_TrailerField() ;

/// @brief Method ToAsn1Object addr 0xf8ef8c size 0x278 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "RsassaPssParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RsassaPssParameters(RsassaPssParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RsassaPssParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RsassaPssParameters(RsassaPssParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RsassaPssParameters()  = default;
public:


// Fields

// Static field DefaultHashAlgorithm

// Static field DefaultMaskGenFunction

// Static field DefaultSaltLength

// Static field DefaultTrailerField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*, "Org.BouncyCastle.Asn1.Pkcs", "RsassaPssParameters");
