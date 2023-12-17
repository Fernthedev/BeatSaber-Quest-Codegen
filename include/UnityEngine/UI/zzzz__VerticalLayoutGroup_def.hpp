#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
CORDL_MODULE_EXPORT(VerticalLayoutGroup)
// Forward declare root types
namespace UnityEngine::UI {
class VerticalLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::VerticalLayoutGroup);
// Type: UnityEngine.UI::VerticalLayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13083))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13096))
// CS Name: ::UnityEngine.UI::VerticalLayoutGroup*
class CORDL_TYPE VerticalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup)]{};

static inline ::UnityEngine::UI::VerticalLayoutGroup* New_ctor() ;

/// @brief Method .ctor addr 0x2d7a598 size 0xc virtual false final false
inline void _ctor() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2d7a5a4 size 0x20 virtual true final false
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2d7a5c4 size 0xc virtual true final false
inline void CalculateLayoutInputVertical() ;

/// @brief Method SetLayoutHorizontal addr 0x2d7a5d0 size 0xc virtual true final false
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2d7a5dc size 0xc virtual true final false
inline void SetLayoutVertical() ;

// Ctor Parameters [CppParam { name: "", ty: "VerticalLayoutGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VerticalLayoutGroup(VerticalLayoutGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerticalLayoutGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerticalLayoutGroup(VerticalLayoutGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VerticalLayoutGroup()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::VerticalLayoutGroup, 0x68>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::VerticalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::VerticalLayoutGroup*, "UnityEngine.UI", "VerticalLayoutGroup");
