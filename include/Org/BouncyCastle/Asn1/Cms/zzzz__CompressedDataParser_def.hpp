#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompressedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CompressedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::CompressedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(65))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::CompressedDataParser*
class CORDL_TYPE CompressedDataParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _version offset 0x10
 __declspec(property(get=__get__version, put=__set__version)) ::Org::BouncyCastle::Asn1::DerInteger*  _version;

/// @brief Field _compressionAlgorithm offset 0x18
 __declspec(property(get=__get__compressionAlgorithm, put=__set__compressionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  _compressionAlgorithm;

/// @brief Field _encapContentInfo offset 0x20
 __declspec(property(get=__get__encapContentInfo, put=__set__encapContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*  _encapContentInfo;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_CompressionAlgorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  CompressionAlgorithmIdentifier;

constexpr void __set__version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get__version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get__version() const;

constexpr void __set__compressionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get__compressionAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get__compressionAlgorithm() const;

constexpr void __set__encapContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* __get__encapContentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*> __get__encapContentInfo() const;

static inline ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq) ;

/// @brief Method .ctor addr 0xe75b68 size 0x2bc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq) ;

/// @brief Method get_Version addr 0xe75e24 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_CompressionAlgorithmIdentifier addr 0xe75e2c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_CompressionAlgorithmIdentifier() ;

/// @brief Method GetEncapContentInfo addr 0xe75e34 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* GetEncapContentInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompressedDataParser(CompressedDataParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompressedDataParser(CompressedDataParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CompressedDataParser()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*, "Org.BouncyCastle.Asn1.Cms", "CompressedDataParser");
