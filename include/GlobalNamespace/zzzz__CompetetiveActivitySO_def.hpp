#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
CORDL_MODULE_EXPORT(CompetetiveActivitySO)
// Forward declare root types
namespace GlobalNamespace {
class CompetetiveActivitySO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CompetetiveActivitySO);
// Type: ::CompetetiveActivitySO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4557))
// CS Name: ::CompetetiveActivitySO*
class CORDL_TYPE CompetetiveActivitySO : public ::GlobalNamespace::PS5ActivityDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PS5ActivityDataSO)]{};

static inline ::GlobalNamespace::CompetetiveActivitySO* New_ctor() ;

/// @brief Method .ctor addr 0x2368268 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompetetiveActivitySO(CompetetiveActivitySO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompetetiveActivitySO(CompetetiveActivitySO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CompetetiveActivitySO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CompetetiveActivitySO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CompetetiveActivitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompetetiveActivitySO*, "", "CompetetiveActivitySO");
