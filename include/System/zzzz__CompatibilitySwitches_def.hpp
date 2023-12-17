#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompatibilitySwitches)
// Forward declare root types
namespace System {
class CompatibilitySwitches;
}
// Write type traits
MARK_REF_PTR_T(::System::CompatibilitySwitches);
// Type: System::CompatibilitySwitches
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2576))
// CS Name: ::System::CompatibilitySwitches*
class CORDL_TYPE CompatibilitySwitches : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_IsAppEarlierThanWindowsPhone8(bool  value) ;

static inline bool getStaticF_IsAppEarlierThanWindowsPhone8() ;

// Ctor Parameters [CppParam { name: "", ty: "CompatibilitySwitches", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompatibilitySwitches(CompatibilitySwitches && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompatibilitySwitches", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompatibilitySwitches(CompatibilitySwitches const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CompatibilitySwitches()  = default;
public:


// Fields

// Static field IsAppEarlierThanWindowsPhone8

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::CompatibilitySwitches, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::CompatibilitySwitches);
DEFINE_IL2CPP_ARG_TYPE(::System::CompatibilitySwitches*, "System", "CompatibilitySwitches");
