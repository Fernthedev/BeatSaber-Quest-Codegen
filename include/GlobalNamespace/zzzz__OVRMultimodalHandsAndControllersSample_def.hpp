#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMultimodalHandsAndControllersSample)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMultimodalHandsAndControllersSample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMultimodalHandsAndControllersSample);
// Type: ::OVRMultimodalHandsAndControllersSample
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7652))
// CS Name: ::OVRMultimodalHandsAndControllersSample*
class CORDL_TYPE OVRMultimodalHandsAndControllersSample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field enableButton offset 0x18
 __declspec(property(get=__get_enableButton, put=__set_enableButton)) ::UnityEngine::UI::Button*  enableButton;

/// @brief Field disableButton offset 0x20
 __declspec(property(get=__get_disableButton, put=__set_disableButton)) ::UnityEngine::UI::Button*  disableButton;

/// @brief Field displayText offset 0x28
 __declspec(property(get=__get_displayText, put=__set_displayText)) ::UnityEngine::UI::Text*  displayText;

constexpr void __set_enableButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_enableButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_enableButton() const;

constexpr void __set_disableButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_disableButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_disableButton() const;

constexpr void __set_displayText(::UnityEngine::UI::Text*  value) ;

constexpr ::UnityEngine::UI::Text* __get_displayText() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> __get_displayText() const;

/// @brief Method Awake addr 0x2745e5c size 0x4 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x2745e60 size 0x4 virtual false final false
inline void OnDestroy() ;

/// @brief Method OnEnable addr 0x2745e64 size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2745e68 size 0x4 virtual false final false
inline void OnDisable() ;

/// @brief Method Update addr 0x2745e6c size 0xe8 virtual false final false
inline void Update() ;

/// @brief Method EnableMultiModality addr 0x2745f54 size 0x80 virtual false final false
inline void EnableMultiModality() ;

/// @brief Method DisableMultiModality addr 0x2745fd4 size 0x80 virtual false final false
inline void DisableMultiModality() ;

static inline ::GlobalNamespace::OVRMultimodalHandsAndControllersSample* New_ctor() ;

/// @brief Method .ctor addr 0x2746054 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRMultimodalHandsAndControllersSample", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMultimodalHandsAndControllersSample(OVRMultimodalHandsAndControllersSample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMultimodalHandsAndControllersSample", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMultimodalHandsAndControllersSample(OVRMultimodalHandsAndControllersSample const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRMultimodalHandsAndControllersSample()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMultimodalHandsAndControllersSample, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMultimodalHandsAndControllersSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMultimodalHandsAndControllersSample*, "", "OVRMultimodalHandsAndControllersSample");
