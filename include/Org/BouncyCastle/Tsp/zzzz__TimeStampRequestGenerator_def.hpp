#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampRequestGenerator)
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampRequestGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator);
// Type: Org.BouncyCastle.Tsp::TimeStampRequestGenerator
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1765))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampRequestGenerator*
class CORDL_TYPE TimeStampRequestGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field reqPolicy offset 0x10
 __declspec(property(get=__get_reqPolicy, put=__set_reqPolicy)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  reqPolicy;

/// @brief Field certReq offset 0x18
 __declspec(property(get=__get_certReq, put=__set_certReq)) ::Org::BouncyCastle::Asn1::DerBoolean*  certReq;

/// @brief Field extensions offset 0x20
 __declspec(property(get=__get_extensions, put=__set_extensions)) ::System::Collections::IDictionary*  extensions;

/// @brief Field extOrdering offset 0x28
 __declspec(property(get=__get_extOrdering, put=__set_extOrdering)) ::System::Collections::IList*  extOrdering;

constexpr void __set_reqPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_reqPolicy() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_reqPolicy() const;

constexpr void __set_certReq(::Org::BouncyCastle::Asn1::DerBoolean*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBoolean* __get_certReq() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBoolean*> __get_certReq() const;

constexpr void __set_extensions(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_extensions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_extensions() const;

constexpr void __set_extOrdering(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_extOrdering() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_extOrdering() const;

/// @brief Method SetReqPolicy addr 0x114fee8 size 0x70 virtual false final false
inline void SetReqPolicy(::StringW  reqPolicy) ;

/// @brief Method SetCertReq addr 0x114ff58 size 0x6c virtual false final false
inline void SetCertReq(bool  certReq) ;

/// @brief Method AddExtension addr 0x114ffc4 size 0x44 virtual false final false
inline void AddExtension(::StringW  oid, bool  critical, ::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

/// @brief Method AddExtension addr 0x1150008 size 0x1d8 virtual false final false
inline void AddExtension(::StringW  oid, bool  critical, ::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method AddExtension addr 0x11501e0 size 0x4c virtual true final false
inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, bool  critical, ::Org::BouncyCastle::Asn1::Asn1Encodable*  extValue) ;

/// @brief Method AddExtension addr 0x115022c size 0x1a8 virtual true final false
inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, bool  critical, ::ArrayW<uint8_t,::Array<uint8_t>*>  extValue) ;

/// @brief Method Generate addr 0x11503d4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::StringW  digestAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  digest) ;

/// @brief Method Generate addr 0x11503dc size 0x2d0 virtual false final false
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::StringW  digestAlgorithmOid, ::ArrayW<uint8_t,::Array<uint8_t>*>  digest, ::Org::BouncyCastle::Math::BigInteger*  nonce) ;

/// @brief Method Generate addr 0x11506ac size 0x1c virtual true final false
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  digestAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  digest) ;

/// @brief Method Generate addr 0x11506c8 size 0x18 virtual true final false
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  digestAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  digest, ::Org::BouncyCastle::Math::BigInteger*  nonce) ;

static inline ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x11506e0 size 0x70 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequestGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeStampRequestGenerator(TimeStampRequestGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequestGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeStampRequestGenerator(TimeStampRequestGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeStampRequestGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*, "Org.BouncyCastle.Tsp", "TimeStampRequestGenerator");
