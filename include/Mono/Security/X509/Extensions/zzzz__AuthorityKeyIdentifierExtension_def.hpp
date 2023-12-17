#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthorityKeyIdentifierExtension)
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class AuthorityKeyIdentifierExtension;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension);
// Type: Mono.Security.X509.Extensions::AuthorityKeyIdentifierExtension
namespace Mono::Security::X509::Extensions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13761))
// CS Name: ::Mono.Security.X509.Extensions::AuthorityKeyIdentifierExtension*
class CORDL_TYPE AuthorityKeyIdentifierExtension : public ::Mono::Security::X509::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Mono::Security::X509::X509Extension)]{};

/// @brief Field aki offset 0x28
 __declspec(property(get=__get_aki, put=__set_aki)) ::ArrayW<uint8_t,::Array<uint8_t>*>  aki;

 __declspec(property(get=get_Identifier)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Identifier;

constexpr void __set_aki(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_aki() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_aki() const;

static inline ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension* New_ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method .ctor addr 0x23fe310 size 0x4 virtual false final false
inline void _ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method Decode addr 0x23fe314 size 0x118 virtual true final false
inline void Decode() ;

/// @brief Method Encode addr 0x23fe42c size 0x124 virtual true final false
inline void Encode() ;

/// @brief Method get_Identifier addr 0x23fe550 size 0x74 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Identifier() ;

/// @brief Method ToString addr 0x23fe5c4 size 0x168 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthorityKeyIdentifierExtension(AuthorityKeyIdentifierExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthorityKeyIdentifierExtension(AuthorityKeyIdentifierExtension const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthorityKeyIdentifierExtension()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension, 0x30>, "Size mismatch!");

} // namespace end def Mono::Security::X509::Extensions
NEED_NO_BOX(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
