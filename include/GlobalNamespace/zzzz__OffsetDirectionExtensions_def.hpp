#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OffsetDirectionExtensions)
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class OffsetDirectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OffsetDirectionExtensions);
// Type: ::OffsetDirectionExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14763))
// CS Name: ::OffsetDirectionExtensions*
class CORDL_TYPE OffsetDirectionExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method OppositeDirection addr 0xe01580 size 0x1c virtual false final false
static inline ::GlobalNamespace::OffsetDirection OppositeDirection(::GlobalNamespace::OffsetDirection  offsetDirection) ;

// Ctor Parameters [CppParam { name: "", ty: "OffsetDirectionExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OffsetDirectionExtensions(OffsetDirectionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OffsetDirectionExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OffsetDirectionExtensions(OffsetDirectionExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OffsetDirectionExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OffsetDirectionExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OffsetDirectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OffsetDirectionExtensions*, "", "OffsetDirectionExtensions");
