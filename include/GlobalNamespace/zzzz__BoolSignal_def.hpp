#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
CORDL_MODULE_EXPORT(BoolSignal)
// Forward declare root types
namespace GlobalNamespace {
class BoolSignal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoolSignal);
// Type: ::BoolSignal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14394), inst: 105 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14390))
// CS Name: ::BoolSignal*
class CORDL_TYPE BoolSignal : public ::GlobalNamespace::GenericSignal_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::GenericSignal_1<bool>)]{};

static inline ::GlobalNamespace::BoolSignal* New_ctor() ;

/// @brief Method .ctor addr 0x20f5524 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoolSignal(BoolSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoolSignal(BoolSignal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BoolSignal()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoolSignal, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoolSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSignal*, "", "BoolSignal");
