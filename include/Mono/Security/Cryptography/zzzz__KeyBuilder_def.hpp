#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyBuilder)
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class KeyBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::KeyBuilder);
// Type: Mono.Security.Cryptography::KeyBuilder
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2275))
// CS Name: ::Mono.Security.Cryptography::KeyBuilder*
class CORDL_TYPE KeyBuilder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng() ;

/// @brief Method get_Rng addr 0x241ed8c size 0x68 virtual false final false
static inline ::System::Security::Cryptography::RandomNumberGenerator* get_Rng() ;

/// @brief Method Key addr 0x241edf4 size 0x70 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Key(int32_t  size) ;

/// @brief Method IV addr 0x241ee64 size 0x70 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> IV(int32_t  size) ;

// Ctor Parameters [CppParam { name: "", ty: "KeyBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyBuilder(KeyBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyBuilder(KeyBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyBuilder()  = default;
public:


// Fields

// Static field rng


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::KeyBuilder, 0x10>, "Size mismatch!");

} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::KeyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::KeyBuilder*, "Mono.Security.Cryptography", "KeyBuilder");
