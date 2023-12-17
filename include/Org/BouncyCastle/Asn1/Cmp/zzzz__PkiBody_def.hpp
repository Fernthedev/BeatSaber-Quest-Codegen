#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiBody)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiBody);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiBody
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(29))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiBody*
class CORDL_TYPE PkiBody : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field TYPE_INIT_REQ offset 0x0
static constexpr int32_t  TYPE_INIT_REQ{static_cast<int32_t>(0x0)};

/// @brief Field TYPE_INIT_REP offset 0x0
static constexpr int32_t  TYPE_INIT_REP{static_cast<int32_t>(0x1)};

/// @brief Field TYPE_CERT_REQ offset 0x0
static constexpr int32_t  TYPE_CERT_REQ{static_cast<int32_t>(0x2)};

/// @brief Field TYPE_CERT_REP offset 0x0
static constexpr int32_t  TYPE_CERT_REP{static_cast<int32_t>(0x3)};

/// @brief Field TYPE_P10_CERT_REQ offset 0x0
static constexpr int32_t  TYPE_P10_CERT_REQ{static_cast<int32_t>(0x4)};

/// @brief Field TYPE_POPO_CHALL offset 0x0
static constexpr int32_t  TYPE_POPO_CHALL{static_cast<int32_t>(0x5)};

/// @brief Field TYPE_POPO_REP offset 0x0
static constexpr int32_t  TYPE_POPO_REP{static_cast<int32_t>(0x6)};

/// @brief Field TYPE_KEY_UPDATE_REQ offset 0x0
static constexpr int32_t  TYPE_KEY_UPDATE_REQ{static_cast<int32_t>(0x7)};

/// @brief Field TYPE_KEY_UPDATE_REP offset 0x0
static constexpr int32_t  TYPE_KEY_UPDATE_REP{static_cast<int32_t>(0x8)};

/// @brief Field TYPE_KEY_RECOVERY_REQ offset 0x0
static constexpr int32_t  TYPE_KEY_RECOVERY_REQ{static_cast<int32_t>(0x9)};

/// @brief Field TYPE_KEY_RECOVERY_REP offset 0x0
static constexpr int32_t  TYPE_KEY_RECOVERY_REP{static_cast<int32_t>(0xa)};

/// @brief Field TYPE_REVOCATION_REQ offset 0x0
static constexpr int32_t  TYPE_REVOCATION_REQ{static_cast<int32_t>(0xb)};

/// @brief Field TYPE_REVOCATION_REP offset 0x0
static constexpr int32_t  TYPE_REVOCATION_REP{static_cast<int32_t>(0xc)};

/// @brief Field TYPE_CROSS_CERT_REQ offset 0x0
static constexpr int32_t  TYPE_CROSS_CERT_REQ{static_cast<int32_t>(0xd)};

/// @brief Field TYPE_CROSS_CERT_REP offset 0x0
static constexpr int32_t  TYPE_CROSS_CERT_REP{static_cast<int32_t>(0xe)};

/// @brief Field TYPE_CA_KEY_UPDATE_ANN offset 0x0
static constexpr int32_t  TYPE_CA_KEY_UPDATE_ANN{static_cast<int32_t>(0xf)};

/// @brief Field TYPE_CERT_ANN offset 0x0
static constexpr int32_t  TYPE_CERT_ANN{static_cast<int32_t>(0x10)};

/// @brief Field TYPE_REVOCATION_ANN offset 0x0
static constexpr int32_t  TYPE_REVOCATION_ANN{static_cast<int32_t>(0x11)};

/// @brief Field TYPE_CRL_ANN offset 0x0
static constexpr int32_t  TYPE_CRL_ANN{static_cast<int32_t>(0x12)};

/// @brief Field TYPE_CONFIRM offset 0x0
static constexpr int32_t  TYPE_CONFIRM{static_cast<int32_t>(0x13)};

/// @brief Field TYPE_NESTED offset 0x0
static constexpr int32_t  TYPE_NESTED{static_cast<int32_t>(0x14)};

/// @brief Field TYPE_GEN_MSG offset 0x0
static constexpr int32_t  TYPE_GEN_MSG{static_cast<int32_t>(0x15)};

/// @brief Field TYPE_GEN_REP offset 0x0
static constexpr int32_t  TYPE_GEN_REP{static_cast<int32_t>(0x16)};

/// @brief Field TYPE_ERROR offset 0x0
static constexpr int32_t  TYPE_ERROR{static_cast<int32_t>(0x17)};

/// @brief Field TYPE_CERT_CONFIRM offset 0x0
static constexpr int32_t  TYPE_CERT_CONFIRM{static_cast<int32_t>(0x18)};

/// @brief Field TYPE_POLL_REQ offset 0x0
static constexpr int32_t  TYPE_POLL_REQ{static_cast<int32_t>(0x19)};

/// @brief Field TYPE_POLL_REP offset 0x0
static constexpr int32_t  TYPE_POLL_REP{static_cast<int32_t>(0x1a)};

/// @brief Field tagNo offset 0x10
 __declspec(property(get=__get_tagNo, put=__set_tagNo)) int32_t  tagNo;

/// @brief Field body offset 0x18
 __declspec(property(get=__get_body, put=__set_body)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  body;

 __declspec(property(get=get_Type)) int32_t  Type;

 __declspec(property(get=get_Content)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Content;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_tagNo(int32_t  value) ;

constexpr int32_t& __get_tagNo() ;

constexpr int32_t const& __get_tagNo() const;

constexpr void __set_body(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_body() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_body() const;

/// @brief Method GetInstance addr 0xe690a4 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method .ctor addr 0xe6922c size 0x50 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* New_ctor(int32_t  type, ::Org::BouncyCastle::Asn1::Asn1Encodable*  content) ;

/// @brief Method .ctor addr 0xe693d8 size 0x3c virtual false final false
inline void _ctor(int32_t  type, ::Org::BouncyCastle::Asn1::Asn1Encodable*  content) ;

/// @brief Method GetBodyForType addr 0xe6927c size 0x15c virtual false final false
static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBodyForType(int32_t  type, ::Org::BouncyCastle::Asn1::Asn1Encodable*  o) ;

/// @brief Method get_Type addr 0xe6a1b8 size 0x8 virtual true final false
inline int32_t get_Type() ;

/// @brief Method get_Content addr 0xe6a1c0 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Content() ;

/// @brief Method ToAsn1Object addr 0xe6a1c8 size 0x74 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PkiBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkiBody(PkiBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkiBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkiBody(PkiBody const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkiBody()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiBody, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiBody);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiBody*, "Org.BouncyCastle.Asn1.Cmp", "PkiBody");
