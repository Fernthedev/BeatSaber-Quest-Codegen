#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProofOfPossession)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class ProofOfPossession;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession);
// Type: Org.BouncyCastle.Asn1.Crmf::ProofOfPossession
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(121))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::ProofOfPossession*
class CORDL_TYPE ProofOfPossession : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field TYPE_RA_VERIFIED offset 0x0
static constexpr int32_t  TYPE_RA_VERIFIED{static_cast<int32_t>(0x0)};

/// @brief Field TYPE_SIGNING_KEY offset 0x0
static constexpr int32_t  TYPE_SIGNING_KEY{static_cast<int32_t>(0x1)};

/// @brief Field TYPE_KEY_ENCIPHERMENT offset 0x0
static constexpr int32_t  TYPE_KEY_ENCIPHERMENT{static_cast<int32_t>(0x2)};

/// @brief Field TYPE_KEY_AGREEMENT offset 0x0
static constexpr int32_t  TYPE_KEY_AGREEMENT{static_cast<int32_t>(0x3)};

/// @brief Field tagNo offset 0x10
 __declspec(property(get=__get_tagNo, put=__set_tagNo)) int32_t  tagNo;

/// @brief Field obj offset 0x18
 __declspec(property(get=__get_obj, put=__set_obj)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  obj;

 __declspec(property(get=get_Type)) int32_t  Type;

 __declspec(property(get=get_Object)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Object;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_tagNo(int32_t  value) ;

constexpr int32_t& __get_tagNo() ;

constexpr int32_t const& __get_tagNo() const;

constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_obj() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_obj() const;

static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method .ctor addr 0xe886b4 size 0x150 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method GetInstance addr 0xe8428c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor() ;

/// @brief Method .ctor addr 0xe88804 size 0x70 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*  Poposk) ;

/// @brief Method .ctor addr 0xe88874 size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*  Poposk) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor(int32_t  type, ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*  privkey) ;

/// @brief Method .ctor addr 0xe888a4 size 0x30 virtual false final false
inline void _ctor(int32_t  type, ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*  privkey) ;

/// @brief Method get_Type addr 0xe888d4 size 0x8 virtual true final false
inline int32_t get_Type() ;

/// @brief Method get_Object addr 0xe888dc size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Object() ;

/// @brief Method ToAsn1Object addr 0xe888e4 size 0x74 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "ProofOfPossession", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProofOfPossession(ProofOfPossession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProofOfPossession", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProofOfPossession(ProofOfPossession const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProofOfPossession()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*, "Org.BouncyCastle.Asn1.Crmf", "ProofOfPossession");
