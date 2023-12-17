#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectoryString)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerStringBase;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X500::DirectoryString);
// Type: Org.BouncyCastle.Asn1.X500::DirectoryString
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(325))
// CS Name: ::Org.BouncyCastle.Asn1.X500::DirectoryString*
class CORDL_TYPE DirectoryString : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field str offset 0x10
 __declspec(property(get=__get_str, put=__set_str)) ::Org::BouncyCastle::Asn1::DerStringBase*  str;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1String"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1String*() noexcept;

constexpr void __set_str(::Org::BouncyCastle::Asn1::DerStringBase*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerStringBase* __get_str() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerStringBase*> __get_str() const;

/// @brief Method GetInstance addr 0x107f95c size 0x290 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0x107fc14 size 0x6c virtual false final false
static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* New_ctor(::Org::BouncyCastle::Asn1::DerStringBase*  str) ;

/// @brief Method .ctor addr 0x107fbec size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerStringBase*  str) ;

static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* New_ctor(::StringW  str) ;

/// @brief Method .ctor addr 0x107fc80 size 0x7c virtual false final false
inline void _ctor(::StringW  str) ;

/// @brief Method GetString addr 0x107fcfc size 0x20 virtual true final true
inline ::StringW GetString() ;

/// @brief Method ToAsn1Object addr 0x107fd1c size 0x20 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectoryString(DirectoryString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectoryString(DirectoryString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DirectoryString()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X500::DirectoryString, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X500
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X500::DirectoryString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X500::DirectoryString*, "Org.BouncyCastle.Asn1.X500", "DirectoryString");
