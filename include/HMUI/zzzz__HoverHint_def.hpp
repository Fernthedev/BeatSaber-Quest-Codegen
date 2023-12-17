#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HoverHint)
namespace HMUI {
class HoverHintController;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
class HoverHint;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverHint);
// Type: HMUI::HoverHint
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13532))
// CS Name: ::HMUI::HoverHint*
class CORDL_TYPE HoverHint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::StringW  _text;

/// @brief Field _hoverHintController offset 0x20
 __declspec(property(get=__get__hoverHintController, put=__set__hoverHintController)) ::HMUI::HoverHintController*  _hoverHintController;

/// @brief Field _worldCornersTemp offset 0x28
 __declspec(property(get=__get__worldCornersTemp, put=__set__worldCornersTemp)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _worldCornersTemp;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

 __declspec(property(get=get_size)) ::UnityEngine::Vector2  size;

 __declspec(property(get=get_worldCenter)) ::UnityEngine::Vector3  worldCenter;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

constexpr void __set__text(::StringW  value) ;

constexpr ::StringW& __get__text() ;

constexpr ::StringW const& __get__text() const;

constexpr void __set__hoverHintController(::HMUI::HoverHintController*  value) ;

constexpr ::HMUI::HoverHintController* __get__hoverHintController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHintController*> __get__hoverHintController() const;

constexpr void __set__worldCornersTemp(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get__worldCornersTemp() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get__worldCornersTemp() const;

/// @brief Method get_text addr 0x211c9a4 size 0x8 virtual false final false
inline ::StringW get_text() ;

/// @brief Method set_text addr 0x211c9ac size 0x8 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method get_size addr 0x211c9b4 size 0x90 virtual false final false
inline ::UnityEngine::Vector2 get_size() ;

/// @brief Method get_worldCenter addr 0x211ca44 size 0xfc virtual false final false
inline ::UnityEngine::Vector3 get_worldCenter() ;

/// @brief Method OnPointerEnter addr 0x211cb40 size 0x1c virtual true final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit addr 0x211cbf0 size 0xbc virtual true final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnDisable addr 0x211cd24 size 0x80 virtual false final false
inline void OnDisable() ;

static inline ::HMUI::HoverHint* New_ctor() ;

/// @brief Method .ctor addr 0x211cda4 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HoverHint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverHint(HoverHint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverHint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverHint(HoverHint const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HoverHint()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HoverHint, 0x30>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::HoverHint);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHint*, "HMUI", "HoverHint");
