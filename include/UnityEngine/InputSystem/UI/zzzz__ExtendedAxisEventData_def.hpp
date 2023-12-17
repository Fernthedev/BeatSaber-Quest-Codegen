#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExtendedAxisEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedAxisEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::ExtendedAxisEventData);
// Type: UnityEngine.InputSystem.UI::ExtendedAxisEventData
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13163))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6370))
// CS Name: ::UnityEngine.InputSystem.UI::ExtendedAxisEventData*
class CORDL_TYPE ExtendedAxisEventData : public ::UnityEngine::EventSystems::AxisEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::EventSystems::AxisEventData)]{};

static inline ::UnityEngine::InputSystem::UI::ExtendedAxisEventData* New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method .ctor addr 0x2acf738 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem) ;

/// @brief Method ToString addr 0x2acf740 size 0xbc virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtendedAxisEventData(ExtendedAxisEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtendedAxisEventData(ExtendedAxisEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExtendedAxisEventData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::ExtendedAxisEventData, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::ExtendedAxisEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::ExtendedAxisEventData*, "UnityEngine.InputSystem.UI", "ExtendedAxisEventData");
