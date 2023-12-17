#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PopoPrivKey)
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey);
// Type: Org.BouncyCastle.Asn1.Crmf::PopoPrivKey
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(118))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PopoPrivKey*
class CORDL_TYPE PopoPrivKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field thisMessage offset 0x0
static constexpr int32_t  thisMessage{static_cast<int32_t>(0x0)};

/// @brief Field subsequentMessage offset 0x0
static constexpr int32_t  subsequentMessage{static_cast<int32_t>(0x1)};

/// @brief Field dhMAC offset 0x0
static constexpr int32_t  dhMAC{static_cast<int32_t>(0x2)};

/// @brief Field agreeMAC offset 0x0
static constexpr int32_t  agreeMAC{static_cast<int32_t>(0x3)};

/// @brief Field encryptedKey offset 0x0
static constexpr int32_t  encryptedKey{static_cast<int32_t>(0x4)};

/// @brief Field tagNo offset 0x10
 __declspec(property(get=__get_tagNo, put=__set_tagNo)) int32_t  tagNo;

/// @brief Field obj offset 0x18
 __declspec(property(get=__get_obj, put=__set_obj)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  obj;

 __declspec(property(get=get_Type)) int32_t  Type;

 __declspec(property(get=get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Value;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_tagNo(int32_t  value) ;

constexpr int32_t& __get_tagNo() ;

constexpr int32_t const& __get_tagNo() const;

constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_obj() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_obj() const;

static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj) ;

/// @brief Method .ctor addr 0xe879bc size 0x17c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj) ;

/// @brief Method GetInstance addr 0xe87c48 size 0x80 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* New_ctor(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*  msg) ;

/// @brief Method .ctor addr 0xe87cc8 size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*  msg) ;

/// @brief Method get_Type addr 0xe87cf8 size 0x8 virtual true final false
inline int32_t get_Type() ;

/// @brief Method get_Value addr 0xe87d00 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value() ;

/// @brief Method ToAsn1Object addr 0xe87d08 size 0x74 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PopoPrivKey(PopoPrivKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PopoPrivKey(PopoPrivKey const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PopoPrivKey()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*, "Org.BouncyCastle.Asn1.Crmf", "PopoPrivKey");
