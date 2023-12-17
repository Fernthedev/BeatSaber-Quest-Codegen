#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AuthenticatedSafe)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class AuthenticatedSafe;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe);
// Type: Org.BouncyCastle.Asn1.Pkcs::AuthenticatedSafe
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(227))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::AuthenticatedSafe*
class CORDL_TYPE AuthenticatedSafe : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field info offset 0x10
 __declspec(property(get=__get_info, put=__set_info)) ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>  info;

/// @brief Field isBer offset 0x18
 __declspec(property(get=__get_isBer, put=__set_isBer)) bool  isBer;

constexpr void __set_info(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>  value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>& __get_info() ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> const& __get_info() const;

constexpr void __set_isBer(bool  value) ;

constexpr bool& __get_isBer() ;

constexpr bool const& __get_isBer() const;

/// @brief Method Copy addr 0xf859a4 size 0x78 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> Copy(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>  info) ;

/// @brief Method GetInstance addr 0xf85a1c size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf85ac0 size 0x158 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>  info) ;

/// @brief Method .ctor addr 0xf85cbc size 0x38 virtual false final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>  info) ;

/// @brief Method GetContentInfo addr 0xf85cf4 size 0x8 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*,::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> GetContentInfo() ;

/// @brief Method ToAsn1Object addr 0xf85cfc size 0xa4 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedSafe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticatedSafe(AuthenticatedSafe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedSafe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticatedSafe(AuthenticatedSafe const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthenticatedSafe()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*, "Org.BouncyCastle.Asn1.Pkcs", "AuthenticatedSafe");
