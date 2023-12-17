#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OriginatorInformation)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::OriginatorInformation);
// Type: Org.BouncyCastle.Cms::OriginatorInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(681))
// CS Name: ::Org.BouncyCastle.Cms::OriginatorInformation*
class CORDL_TYPE OriginatorInformation : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field originatorInfo offset 0x10
 __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo;

constexpr void __set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* __get_originatorInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> __get_originatorInfo() const;

static inline ::Org::BouncyCastle::Cms::OriginatorInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo) ;

/// @brief Method .ctor addr 0x1206b44 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo) ;

/// @brief Method GetCertificates addr 0x1206b6c size 0x50c virtual true final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates() ;

/// @brief Method GetCrls addr 0x1207078 size 0x50c virtual true final false
inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCrls() ;

/// @brief Method ToAsn1Structure addr 0x1207584 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* ToAsn1Structure() ;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OriginatorInformation(OriginatorInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OriginatorInformation(OriginatorInformation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OriginatorInformation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::OriginatorInformation, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::OriginatorInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::OriginatorInformation*, "Org.BouncyCastle.Cms", "OriginatorInformation");
