#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRLayoutUpdater)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRLayoutUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRLayoutUpdater);
// Type: UnityEngine.UIElements::UIRLayoutUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7329))
// CS Name: ::UnityEngine.UIElements::UIRLayoutUpdater*
class CORDL_TYPE UIRLayoutUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::UIElements::BaseVisualTreeUpdater)]{};

 __declspec(property(get=get_profilerMarker)) ::Unity::Profiling::ProfilerMarker  profilerMarker;

static inline void setStaticF_s_Description(::StringW  value) ;

static inline ::StringW getStaticF_s_Description() ;

static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker() ;

/// @brief Method get_profilerMarker addr 0x2e78a90 size 0x58 virtual true final false
inline ::Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method OnVersionChanged addr 0x2e78ae8 size 0x48 virtual true final false
inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType) ;

/// @brief Method Update addr 0x2e78b30 size 0x2ec virtual true final false
inline void Update() ;

/// @brief Method UpdateSubTree addr 0x2e78e1c size 0x810 virtual false final false
inline void UpdateSubTree(::UnityEngine::UIElements::VisualElement*  ve, int32_t  currentLayoutPass, bool  isDisplayed) ;

static inline ::UnityEngine::UIElements::UIRLayoutUpdater* New_ctor() ;

/// @brief Method .ctor addr 0x2e7962c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIRLayoutUpdater(UIRLayoutUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIRLayoutUpdater(UIRLayoutUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UIRLayoutUpdater()  = default;
public:


// Fields

// Static field s_Description

// Static field s_ProfilerMarker


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRLayoutUpdater, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRLayoutUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRLayoutUpdater*, "UnityEngine.UIElements", "UIRLayoutUpdater");
