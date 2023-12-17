#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionDataExtensions)
namespace GlobalNamespace {
struct __MissionObjective__ReferenceValueComparisonType;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionDataExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionDataExtensions);
// Type: ::MissionDataExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4461))
// CS Name: ::MissionDataExtensions*
class CORDL_TYPE MissionDataExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Name addr 0x2352d4c size 0x94 virtual false final false
static inline ::StringW Name(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  comparisonType) ;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionDataExtensions(MissionDataExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionDataExtensions(MissionDataExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionDataExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionDataExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionDataExtensions*, "", "MissionDataExtensions");
