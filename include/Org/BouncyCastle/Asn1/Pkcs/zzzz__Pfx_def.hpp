#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Pfx)
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class MacData;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pfx;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::Pfx);
// Type: Org.BouncyCastle.Asn1.Pkcs::Pfx
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(243))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::Pfx*
class CORDL_TYPE Pfx : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field contentInfo offset 0x10
 __declspec(property(get=__get_contentInfo, put=__set_contentInfo)) ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*  contentInfo;

/// @brief Field macData offset 0x18
 __declspec(property(get=__get_macData, put=__set_macData)) ::Org::BouncyCastle::Asn1::Pkcs::MacData*  macData;

 __declspec(property(get=get_AuthSafe)) ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*  AuthSafe;

 __declspec(property(get=get_MacData)) ::Org::BouncyCastle::Asn1::Pkcs::MacData*  MacData;

constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* __get_contentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*> __get_contentInfo() const;

constexpr void __set_macData(::Org::BouncyCastle::Asn1::Pkcs::MacData*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Pkcs::MacData* __get_macData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::MacData*> __get_macData() const;

/// @brief Method GetInstance addr 0xf8a804 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf8a8a8 size 0xfc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*  contentInfo, ::Org::BouncyCastle::Asn1::Pkcs::MacData*  macData) ;

/// @brief Method .ctor addr 0xf8a9a4 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*  contentInfo, ::Org::BouncyCastle::Asn1::Pkcs::MacData*  macData) ;

/// @brief Method get_AuthSafe addr 0xf8a9d0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* get_AuthSafe() ;

/// @brief Method get_MacData addr 0xf8a9d8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* get_MacData() ;

/// @brief Method ToAsn1Object addr 0xf8a9e0 size 0x1a0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Pfx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pfx(Pfx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pfx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pfx(Pfx const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Pfx()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::Pfx, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::Pfx);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::Pfx*, "Org.BouncyCastle.Asn1.Pkcs", "Pfx");
