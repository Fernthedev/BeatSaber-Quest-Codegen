#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MultipleDisplayUtilities)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
class MultipleDisplayUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::MultipleDisplayUtilities);
// Type: UnityEngine.UI::MultipleDisplayUtilities
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13103))
// CS Name: ::UnityEngine.UI::MultipleDisplayUtilities*
class CORDL_TYPE MultipleDisplayUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetRelativeMousePositionForDrag addr 0x2d7db5c size 0x68 virtual false final false
static inline bool GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData*  eventData, ByRef<::UnityEngine::Vector2>  position) ;

/// @brief Method RelativeMouseAtScaled addr 0x2d7dbc4 size 0x468 virtual false final false
static inline ::UnityEngine::Vector3 RelativeMouseAtScaled(::UnityEngine::Vector2  position) ;

// Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultipleDisplayUtilities(MultipleDisplayUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultipleDisplayUtilities(MultipleDisplayUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultipleDisplayUtilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::MultipleDisplayUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::MultipleDisplayUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MultipleDisplayUtilities*, "UnityEngine.UI", "MultipleDisplayUtilities");
