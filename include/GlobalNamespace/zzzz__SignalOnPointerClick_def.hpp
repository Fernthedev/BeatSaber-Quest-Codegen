#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SignalOnPointerClick)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalOnPointerClick;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalOnPointerClick);
// Type: ::SignalOnPointerClick
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14397))
// CS Name: ::SignalOnPointerClick*
class CORDL_TYPE SignalOnPointerClick : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _inputFieldClickedSignal offset 0x18
 __declspec(property(get=__get__inputFieldClickedSignal, put=__set__inputFieldClickedSignal)) ::GlobalNamespace::Signal*  _inputFieldClickedSignal;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

constexpr void __set__inputFieldClickedSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__inputFieldClickedSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__inputFieldClickedSignal() const;

/// @brief Method OnPointerClick addr 0x20f590c size 0x20 virtual true final true
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

static inline ::GlobalNamespace::SignalOnPointerClick* New_ctor() ;

/// @brief Method .ctor addr 0x20f592c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnPointerClick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalOnPointerClick(SignalOnPointerClick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnPointerClick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalOnPointerClick(SignalOnPointerClick const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalOnPointerClick()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalOnPointerClick, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalOnPointerClick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalOnPointerClick*, "", "SignalOnPointerClick");
