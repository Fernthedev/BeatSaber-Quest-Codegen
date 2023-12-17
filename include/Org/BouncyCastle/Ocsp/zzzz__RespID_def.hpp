#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RespID)
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::RespID);
// Type: Org.BouncyCastle.Ocsp::RespID
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1623))
// CS Name: ::Org.BouncyCastle.Ocsp::RespID*
class CORDL_TYPE RespID : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field id offset 0x10
 __declspec(property(get=__get_id, put=__set_id)) ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*  id;

constexpr void __set_id(::Org::BouncyCastle::Asn1::Ocsp::ResponderID*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* __get_id() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*> __get_id() const;

static inline ::Org::BouncyCastle::Ocsp::RespID* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID*  id) ;

/// @brief Method .ctor addr 0x109beec size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID*  id) ;

static inline ::Org::BouncyCastle::Ocsp::RespID* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name*  name) ;

/// @brief Method .ctor addr 0x10a4d6c size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name*  name) ;

static inline ::Org::BouncyCastle::Ocsp::RespID* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey) ;

/// @brief Method .ctor addr 0x109d20c size 0x210 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey) ;

/// @brief Method ToAsn1Object addr 0x10a4de8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ToAsn1Object() ;

/// @brief Method Equals addr 0x10a4df0 size 0xb0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x10a4ea0 size 0x1c virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "RespID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RespID(RespID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RespID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RespID(RespID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RespID()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::RespID, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::RespID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::RespID*, "Org.BouncyCastle.Ocsp", "RespID");
