#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CompressedData)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CompressedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::CompressedData);
// Type: Org.BouncyCastle.Asn1.Cms::CompressedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(64))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::CompressedData*
class CORDL_TYPE CompressedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field compressionAlgorithm offset 0x18
 __declspec(property(get=__get_compressionAlgorithm, put=__set_compressionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  compressionAlgorithm;

/// @brief Field encapContentInfo offset 0x20
 __declspec(property(get=__get_encapContentInfo, put=__set_encapContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  encapContentInfo;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_CompressionAlgorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  CompressionAlgorithmIdentifier;

 __declspec(property(get=get_EncapContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  EncapContentInfo;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_compressionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_compressionAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_compressionAlgorithm() const;

constexpr void __set_encapContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* __get_encapContentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> __get_encapContentInfo() const;

static inline ::Org::BouncyCastle::Asn1::Cms::CompressedData* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  compressionAlgorithm, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  encapContentInfo) ;

/// @brief Method .ctor addr 0xe7571c size 0x84 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  compressionAlgorithm, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  encapContentInfo) ;

static inline ::Org::BouncyCastle::Asn1::Cms::CompressedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe757a0 size 0x104 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe758a4 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::CompressedData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  ato, bool  explicitly) ;

/// @brief Method GetInstance addr 0xe758bc size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::CompressedData* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Version addr 0xe75a34 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_CompressionAlgorithmIdentifier addr 0xe75a3c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_CompressionAlgorithmIdentifier() ;

/// @brief Method get_EncapContentInfo addr 0xe75a44 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_EncapContentInfo() ;

/// @brief Method ToAsn1Object addr 0xe75a4c size 0x11c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CompressedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompressedData(CompressedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompressedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompressedData(CompressedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CompressedData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::CompressedData, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CompressedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CompressedData*, "Org.BouncyCastle.Asn1.Cms", "CompressedData");
