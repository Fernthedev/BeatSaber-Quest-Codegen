#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasCustomFilter)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DynamicAtlasCustomFilter);
// Type: UnityEngine.UIElements::DynamicAtlasCustomFilter
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6760))
// CS Name: ::UnityEngine.UIElements::DynamicAtlasCustomFilter*
class CORDL_TYPE DynamicAtlasCustomFilter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::UIElements::DynamicAtlasCustomFilter* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2db4200 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2db42d8 size 0x14 virtual true final false
inline bool Invoke(::UnityEngine::Texture2D*  texture, ByRef<::UnityEngine::UIElements::DynamicAtlasFilters>  filtersToApply) ;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasCustomFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicAtlasCustomFilter(DynamicAtlasCustomFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasCustomFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicAtlasCustomFilter(DynamicAtlasCustomFilter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DynamicAtlasCustomFilter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasCustomFilter, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlasCustomFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasCustomFilter*, "UnityEngine.UIElements", "DynamicAtlasCustomFilter");
