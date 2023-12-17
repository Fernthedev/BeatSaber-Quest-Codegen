#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ColorSignal)
// Forward declare root types
namespace GlobalNamespace {
class ColorSignal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSignal);
// Type: ::ColorSignal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14394), inst: 293 }), TypeDefinitionIndex(TypeDefinitionIndex(14394)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14391))
// CS Name: ::ColorSignal*
class CORDL_TYPE ColorSignal : public ::GlobalNamespace::GenericSignal_1<::UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::GenericSignal_1<::UnityEngine::Color>)]{};

static inline ::GlobalNamespace::ColorSignal* New_ctor() ;

/// @brief Method .ctor addr 0x20f556c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSignal(ColorSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSignal(ColorSignal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSignal()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSignal, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSignal*, "", "ColorSignal");
