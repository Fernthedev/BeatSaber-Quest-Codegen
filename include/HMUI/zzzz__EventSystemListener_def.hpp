#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventSystemListener)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace HMUI {
class EventSystemListener;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::EventSystemListener);
// Type: HMUI::EventSystemListener
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13531))
// CS Name: ::HMUI::EventSystemListener*
class CORDL_TYPE EventSystemListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field pointerDidEnterEvent offset 0x18
 __declspec(property(get=__get_pointerDidEnterEvent, put=__set_pointerDidEnterEvent)) ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  pointerDidEnterEvent;

/// @brief Field pointerDidExitEvent offset 0x20
 __declspec(property(get=__get_pointerDidExitEvent, put=__set_pointerDidExitEvent)) ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  pointerDidExitEvent;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

constexpr void __set_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* __get_pointerDidEnterEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*> __get_pointerDidEnterEvent() const;

constexpr void __set_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* __get_pointerDidExitEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*> __get_pointerDidExitEvent() const;

/// @brief Method add_pointerDidEnterEvent addr 0x211c6a4 size 0xb0 virtual false final false
inline void add_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// @brief Method remove_pointerDidEnterEvent addr 0x211c754 size 0xb0 virtual false final false
inline void remove_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// @brief Method add_pointerDidExitEvent addr 0x211c804 size 0xb0 virtual false final false
inline void add_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// @brief Method remove_pointerDidExitEvent addr 0x211c8b4 size 0xb0 virtual false final false
inline void remove_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// @brief Method OnPointerEnter addr 0x211c964 size 0x1c virtual true final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit addr 0x211c980 size 0x1c virtual true final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

static inline ::HMUI::EventSystemListener* New_ctor() ;

/// @brief Method .ctor addr 0x211c99c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSystemListener(EventSystemListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSystemListener(EventSystemListener const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventSystemListener()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::EventSystemListener, 0x28>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::EventSystemListener);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::EventSystemListener*, "HMUI", "EventSystemListener");
