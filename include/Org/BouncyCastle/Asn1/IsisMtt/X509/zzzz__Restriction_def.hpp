#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Restriction)
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class Restriction;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::Restriction
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(191))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::Restriction*
class CORDL_TYPE Restriction : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field restriction offset 0x10
 __declspec(property(get=__get_restriction, put=__set_restriction)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  restriction;

 __declspec(property(get=get_RestrictionString)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  RestrictionString;

constexpr void __set_restriction(::Org::BouncyCastle::Asn1::X500::DirectoryString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* __get_restriction() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> __get_restriction() const;

/// @brief Method GetInstance addr 0xf7b184 size 0x158 virtual false final false
static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction* New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString*  restriction) ;

/// @brief Method .ctor addr 0xf7b2dc size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString*  restriction) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction* New_ctor(::StringW  restriction) ;

/// @brief Method .ctor addr 0xf7b304 size 0x7c virtual false final false
inline void _ctor(::StringW  restriction) ;

/// @brief Method get_RestrictionString addr 0xf7b380 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_RestrictionString() ;

/// @brief Method ToAsn1Object addr 0xf7b388 size 0x20 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Restriction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Restriction(Restriction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Restriction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Restriction(Restriction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Restriction()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "Restriction");
