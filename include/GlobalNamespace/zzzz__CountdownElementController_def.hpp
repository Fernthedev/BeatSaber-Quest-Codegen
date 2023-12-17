#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CountdownElementController)
namespace UnityEngine {
class Animation;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownElementController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CountdownElementController);
// Type: ::CountdownElementController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5559))
// CS Name: ::CountdownElementController*
class CORDL_TYPE CountdownElementController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _animation offset 0x20
 __declspec(property(get=__get__animation, put=__set__animation)) ::UnityEngine::Animation*  _animation;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__animation(::UnityEngine::Animation*  value) ;

constexpr ::UnityEngine::Animation* __get__animation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> __get__animation() const;

/// @brief Method SetTextAndRunAnimation addr 0x22a3148 size 0x64 virtual false final false
inline void SetTextAndRunAnimation(::StringW  text) ;

/// @brief Method StopAndHide addr 0x22a32a0 size 0x24 virtual false final false
inline void StopAndHide() ;

static inline ::GlobalNamespace::CountdownElementController* New_ctor() ;

/// @brief Method .ctor addr 0x22a3428 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CountdownElementController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownElementController(CountdownElementController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownElementController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownElementController(CountdownElementController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CountdownElementController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CountdownElementController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CountdownElementController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownElementController*, "", "CountdownElementController");
