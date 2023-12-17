#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KnownTerminals)
// Forward declare root types
namespace System {
class KnownTerminals;
}
// Write type traits
MARK_REF_PTR_T(::System::KnownTerminals);
// Type: System::KnownTerminals
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2604))
// CS Name: ::System::KnownTerminals*
class CORDL_TYPE KnownTerminals : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method get_linux addr 0x25fa304 size 0x70 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_linux() ;

/// @brief Method get_xterm addr 0x25fa374 size 0x70 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_xterm() ;

/// @brief Method get_ansi addr 0x25fa3e4 size 0x70 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_ansi() ;

// Ctor Parameters [CppParam { name: "", ty: "KnownTerminals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KnownTerminals(KnownTerminals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KnownTerminals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KnownTerminals(KnownTerminals const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KnownTerminals()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::KnownTerminals, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::KnownTerminals);
DEFINE_IL2CPP_ARG_TYPE(::System::KnownTerminals*, "System", "KnownTerminals");
