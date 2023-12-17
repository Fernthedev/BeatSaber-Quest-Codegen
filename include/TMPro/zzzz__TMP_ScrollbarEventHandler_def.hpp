#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TMP_ScrollbarEventHandler)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
// Forward declare root types
namespace TMPro {
class TMP_ScrollbarEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_ScrollbarEventHandler);
// Type: TMPro::TMP_ScrollbarEventHandler
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12412))
// CS Name: ::TMPro::TMP_ScrollbarEventHandler*
class CORDL_TYPE TMP_ScrollbarEventHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field isSelected offset 0x18
 __declspec(property(get=__get_isSelected, put=__set_isSelected)) bool  isSelected;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr operator  ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

constexpr void __set_isSelected(bool  value) ;

constexpr bool& __get_isSelected() ;

constexpr bool const& __get_isSelected() const;

/// @brief Method OnPointerClick addr 0x2c3f998 size 0x68 virtual true final true
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSelect addr 0x2c3fa00 size 0x78 virtual true final true
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnDeselect addr 0x2c3fa78 size 0x74 virtual true final true
inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

static inline ::TMPro::TMP_ScrollbarEventHandler* New_ctor() ;

/// @brief Method .ctor addr 0x2c3faec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_ScrollbarEventHandler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ScrollbarEventHandler, 0x20>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_ScrollbarEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ScrollbarEventHandler*, "TMPro", "TMP_ScrollbarEventHandler");
