#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiArchiveOptions)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedKey;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiArchiveOptions;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions);
// Type: Org.BouncyCastle.Asn1.Crmf::PkiArchiveOptions
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(115))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PkiArchiveOptions*
class CORDL_TYPE PkiArchiveOptions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field encryptedPrivKey offset 0x0
static constexpr int32_t  encryptedPrivKey{static_cast<int32_t>(0x0)};

/// @brief Field keyGenParameters offset 0x0
static constexpr int32_t  keyGenParameters{static_cast<int32_t>(0x1)};

/// @brief Field archiveRemGenPrivKey offset 0x0
static constexpr int32_t  archiveRemGenPrivKey{static_cast<int32_t>(0x2)};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  value;

 __declspec(property(get=get_Type)) int32_t  Type;

 __declspec(property(get=get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Value;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_value(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_value() const;

/// @brief Method GetInstance addr 0xe86a84 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method .ctor addr 0xe86c0c size 0x158 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*  encKey) ;

/// @brief Method .ctor addr 0xe86d64 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*  encKey) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  keyGenParameters) ;

/// @brief Method .ctor addr 0xe86d8c size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  keyGenParameters) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(bool  archiveRemGenPrivKey) ;

/// @brief Method .ctor addr 0xe86db4 size 0x78 virtual false final false
inline void _ctor(bool  archiveRemGenPrivKey) ;

/// @brief Method get_Type addr 0xe86e2c size 0xc0 virtual true final false
inline int32_t get_Type() ;

/// @brief Method get_Value addr 0xe86eec size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value() ;

/// @brief Method ToAsn1Object addr 0xe86ef4 size 0x120 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkiArchiveOptions(PkiArchiveOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkiArchiveOptions(PkiArchiveOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkiArchiveOptions()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*, "Org.BouncyCastle.Asn1.Crmf", "PkiArchiveOptions");
