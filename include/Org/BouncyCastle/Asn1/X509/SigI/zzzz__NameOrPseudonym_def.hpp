#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NameOrPseudonym)
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class NameOrPseudonym;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym);
// Type: Org.BouncyCastle.Asn1.X509.SigI::NameOrPseudonym
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(335))
// CS Name: ::Org.BouncyCastle.Asn1.X509.SigI::NameOrPseudonym*
class CORDL_TYPE NameOrPseudonym : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field pseudonym offset 0x10
 __declspec(property(get=__get_pseudonym, put=__set_pseudonym)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  pseudonym;

/// @brief Field surname offset 0x18
 __declspec(property(get=__get_surname, put=__set_surname)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  surname;

/// @brief Field givenName offset 0x20
 __declspec(property(get=__get_givenName, put=__set_givenName)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  givenName;

 __declspec(property(get=get_Pseudonym)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  Pseudonym;

 __declspec(property(get=get_Surname)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  Surname;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_pseudonym(::Org::BouncyCastle::Asn1::X500::DirectoryString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* __get_pseudonym() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> __get_pseudonym() const;

constexpr void __set_surname(::Org::BouncyCastle::Asn1::X500::DirectoryString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* __get_surname() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> __get_surname() const;

constexpr void __set_givenName(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_givenName() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_givenName() const;

/// @brief Method GetInstance addr 0x1082440 size 0x1e8 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString*  pseudonym) ;

/// @brief Method .ctor addr 0x1082628 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString*  pseudonym) ;

static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x1082650 size 0x1a8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::StringW  pseudonym) ;

/// @brief Method .ctor addr 0x10827f8 size 0x78 virtual false final false
inline void _ctor(::StringW  pseudonym) ;

static inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString*  surname, ::Org::BouncyCastle::Asn1::Asn1Sequence*  givenName) ;

/// @brief Method .ctor addr 0x1082870 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString*  surname, ::Org::BouncyCastle::Asn1::Asn1Sequence*  givenName) ;

/// @brief Method get_Pseudonym addr 0x108289c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Pseudonym() ;

/// @brief Method get_Surname addr 0x10828a4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Surname() ;

/// @brief Method GetGivenName addr 0x10828ac size 0x318 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*,::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> GetGivenName() ;

/// @brief Method ToAsn1Object addr 0x1082bc4 size 0x10c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "NameOrPseudonym", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NameOrPseudonym(NameOrPseudonym && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameOrPseudonym", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameOrPseudonym(NameOrPseudonym const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NameOrPseudonym()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*, "Org.BouncyCastle.Asn1.X509.SigI", "NameOrPseudonym");
