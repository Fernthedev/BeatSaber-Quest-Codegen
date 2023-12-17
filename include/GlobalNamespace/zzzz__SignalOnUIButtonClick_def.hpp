#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SignalOnUIButtonClick)
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class Signal;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalOnUIButtonClick;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalOnUIButtonClick);
// Type: ::SignalOnUIButtonClick
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14398))
// CS Name: ::SignalOnUIButtonClick*
class CORDL_TYPE SignalOnUIButtonClick : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _buttonClickedSignal offset 0x18
 __declspec(property(get=__get__buttonClickedSignal, put=__set__buttonClickedSignal)) ::GlobalNamespace::Signal*  _buttonClickedSignal;

/// @brief Field _button offset 0x20
 __declspec(property(get=__get__button, put=__set__button)) ::UnityEngine::UI::Button*  _button;

constexpr void __set__buttonClickedSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__buttonClickedSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__buttonClickedSignal() const;

constexpr void __set__button(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__button() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__button() const;

/// @brief Method OnReset addr 0x20f5934 size 0x50 virtual false final false
inline void OnReset() ;

/// @brief Method Start addr 0x20f5984 size 0x8c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x20f5a10 size 0xd0 virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::SignalOnUIButtonClick* New_ctor() ;

/// @brief Method .ctor addr 0x20f5ae0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnUIButtonClick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalOnUIButtonClick(SignalOnUIButtonClick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnUIButtonClick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalOnUIButtonClick(SignalOnUIButtonClick const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalOnUIButtonClick()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalOnUIButtonClick, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalOnUIButtonClick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalOnUIButtonClick*, "", "SignalOnUIButtonClick");
