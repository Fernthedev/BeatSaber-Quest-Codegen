#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicConstraintsExtension)
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class BasicConstraintsExtension;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::Extensions::BasicConstraintsExtension);
// Type: Mono.Security.X509.Extensions::BasicConstraintsExtension
namespace Mono::Security::X509::Extensions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13762))
// CS Name: ::Mono.Security.X509.Extensions::BasicConstraintsExtension*
class CORDL_TYPE BasicConstraintsExtension : public ::Mono::Security::X509::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Mono::Security::X509::X509Extension)]{};

/// @brief Field cA offset 0x28
 __declspec(property(get=__get_cA, put=__set_cA)) bool  cA;

/// @brief Field pathLenConstraint offset 0x2c
 __declspec(property(get=__get_pathLenConstraint, put=__set_pathLenConstraint)) int32_t  pathLenConstraint;

 __declspec(property(get=get_CertificateAuthority)) bool  CertificateAuthority;

constexpr void __set_cA(bool  value) ;

constexpr bool& __get_cA() ;

constexpr bool const& __get_cA() const;

constexpr void __set_pathLenConstraint(int32_t  value) ;

constexpr int32_t& __get_pathLenConstraint() ;

constexpr int32_t const& __get_pathLenConstraint() const;

static inline ::Mono::Security::X509::Extensions::BasicConstraintsExtension* New_ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method .ctor addr 0x23fcb3c size 0x4 virtual false final false
inline void _ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method Decode addr 0x23fe72c size 0x138 virtual true final false
inline void Decode() ;

/// @brief Method Encode addr 0x23fe864 size 0x134 virtual true final false
inline void Encode() ;

/// @brief Method get_CertificateAuthority addr 0x23fe998 size 0x8 virtual false final false
inline bool get_CertificateAuthority() ;

/// @brief Method ToString addr 0x23fe9a0 size 0x1a8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "BasicConstraintsExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicConstraintsExtension(BasicConstraintsExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicConstraintsExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicConstraintsExtension(BasicConstraintsExtension const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BasicConstraintsExtension()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::Extensions::BasicConstraintsExtension, 0x30>, "Size mismatch!");

} // namespace end def Mono::Security::X509::Extensions
NEED_NO_BOX(::Mono::Security::X509::Extensions::BasicConstraintsExtension);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::Extensions::BasicConstraintsExtension*, "Mono.Security.X509.Extensions", "BasicConstraintsExtension");
