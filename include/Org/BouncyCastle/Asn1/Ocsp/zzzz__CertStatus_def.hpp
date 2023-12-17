#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertStatus)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::CertStatus);
// Type: Org.BouncyCastle.Asn1.Ocsp::CertStatus
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(208))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::CertStatus*
class CORDL_TYPE CertStatus : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field tagNo offset 0x10
 __declspec(property(get=__get_tagNo, put=__set_tagNo)) int32_t  tagNo;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  value;

 __declspec(property(get=get_TagNo)) int32_t  TagNo;

 __declspec(property(get=get_Status)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Status;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_tagNo(int32_t  value) ;

constexpr int32_t& __get_tagNo() ;

constexpr int32_t const& __get_tagNo() const;

constexpr void __set_value(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_value() const;

static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor() ;

/// @brief Method .ctor addr 0xf7ff04 size 0x70 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*  info) ;

/// @brief Method .ctor addr 0xf7ff74 size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*  info) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor(int32_t  tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

/// @brief Method .ctor addr 0xf7ffa4 size 0x30 virtual false final false
inline void _ctor(int32_t  tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  choice) ;

/// @brief Method .ctor addr 0xf7ffd4 size 0x138 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  choice) ;

/// @brief Method GetInstance addr 0xf80124 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* GetInstance(::System::Object*  obj) ;

/// @brief Method get_TagNo addr 0xf802ac size 0x8 virtual false final false
inline int32_t get_TagNo() ;

/// @brief Method get_Status addr 0xf802b4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Status() ;

/// @brief Method ToAsn1Object addr 0xf802bc size 0x74 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertStatus(CertStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertStatus(CertStatus const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertStatus()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::CertStatus, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::CertStatus*, "Org.BouncyCastle.Asn1.Ocsp", "CertStatus");
