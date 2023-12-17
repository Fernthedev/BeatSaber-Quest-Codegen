#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnimationTriggers)
// Forward declare root types
namespace UnityEngine::UI {
class AnimationTriggers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::AnimationTriggers);
// Type: UnityEngine.UI::AnimationTriggers
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13016))
// CS Name: ::UnityEngine.UI::AnimationTriggers*
class CORDL_TYPE AnimationTriggers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field kDefaultNormalAnimName offset 0x0
static constexpr ::ConstString  kDefaultNormalAnimName{u"Normal"};

/// @brief Field kDefaultHighlightedAnimName offset 0x0
static constexpr ::ConstString  kDefaultHighlightedAnimName{u"Highlighted"};

/// @brief Field kDefaultPressedAnimName offset 0x0
static constexpr ::ConstString  kDefaultPressedAnimName{u"Pressed"};

/// @brief Field kDefaultSelectedAnimName offset 0x0
static constexpr ::ConstString  kDefaultSelectedAnimName{u"Selected"};

/// @brief Field kDefaultDisabledAnimName offset 0x0
static constexpr ::ConstString  kDefaultDisabledAnimName{u"Disabled"};

/// @brief Field m_NormalTrigger offset 0x10
 __declspec(property(get=__get_m_NormalTrigger, put=__set_m_NormalTrigger)) ::StringW  m_NormalTrigger;

/// @brief Field m_HighlightedTrigger offset 0x18
 __declspec(property(get=__get_m_HighlightedTrigger, put=__set_m_HighlightedTrigger)) ::StringW  m_HighlightedTrigger;

/// @brief Field m_PressedTrigger offset 0x20
 __declspec(property(get=__get_m_PressedTrigger, put=__set_m_PressedTrigger)) ::StringW  m_PressedTrigger;

/// @brief Field m_SelectedTrigger offset 0x28
 __declspec(property(get=__get_m_SelectedTrigger, put=__set_m_SelectedTrigger)) ::StringW  m_SelectedTrigger;

/// @brief Field m_DisabledTrigger offset 0x30
 __declspec(property(get=__get_m_DisabledTrigger, put=__set_m_DisabledTrigger)) ::StringW  m_DisabledTrigger;

 __declspec(property(get=get_normalTrigger, put=set_normalTrigger)) ::StringW  normalTrigger;

 __declspec(property(get=get_highlightedTrigger, put=set_highlightedTrigger)) ::StringW  highlightedTrigger;

 __declspec(property(get=get_pressedTrigger, put=set_pressedTrigger)) ::StringW  pressedTrigger;

 __declspec(property(get=get_selectedTrigger, put=set_selectedTrigger)) ::StringW  selectedTrigger;

 __declspec(property(get=get_disabledTrigger, put=set_disabledTrigger)) ::StringW  disabledTrigger;

constexpr void __set_m_NormalTrigger(::StringW  value) ;

constexpr ::StringW& __get_m_NormalTrigger() ;

constexpr ::StringW const& __get_m_NormalTrigger() const;

constexpr void __set_m_HighlightedTrigger(::StringW  value) ;

constexpr ::StringW& __get_m_HighlightedTrigger() ;

constexpr ::StringW const& __get_m_HighlightedTrigger() const;

constexpr void __set_m_PressedTrigger(::StringW  value) ;

constexpr ::StringW& __get_m_PressedTrigger() ;

constexpr ::StringW const& __get_m_PressedTrigger() const;

constexpr void __set_m_SelectedTrigger(::StringW  value) ;

constexpr ::StringW& __get_m_SelectedTrigger() ;

constexpr ::StringW const& __get_m_SelectedTrigger() const;

constexpr void __set_m_DisabledTrigger(::StringW  value) ;

constexpr ::StringW& __get_m_DisabledTrigger() ;

constexpr ::StringW const& __get_m_DisabledTrigger() const;

/// @brief Method get_normalTrigger addr 0x2d50e38 size 0x8 virtual false final false
inline ::StringW get_normalTrigger() ;

/// @brief Method set_normalTrigger addr 0x2d50e40 size 0x8 virtual false final false
inline void set_normalTrigger(::StringW  value) ;

/// @brief Method get_highlightedTrigger addr 0x2d50e48 size 0x8 virtual false final false
inline ::StringW get_highlightedTrigger() ;

/// @brief Method set_highlightedTrigger addr 0x2d50e50 size 0x8 virtual false final false
inline void set_highlightedTrigger(::StringW  value) ;

/// @brief Method get_pressedTrigger addr 0x2d50e58 size 0x8 virtual false final false
inline ::StringW get_pressedTrigger() ;

/// @brief Method set_pressedTrigger addr 0x2d50e60 size 0x8 virtual false final false
inline void set_pressedTrigger(::StringW  value) ;

/// @brief Method get_selectedTrigger addr 0x2d50e68 size 0x8 virtual false final false
inline ::StringW get_selectedTrigger() ;

/// @brief Method set_selectedTrigger addr 0x2d50e70 size 0x8 virtual false final false
inline void set_selectedTrigger(::StringW  value) ;

/// @brief Method get_disabledTrigger addr 0x2d50e78 size 0x8 virtual false final false
inline ::StringW get_disabledTrigger() ;

/// @brief Method set_disabledTrigger addr 0x2d50e80 size 0x8 virtual false final false
inline void set_disabledTrigger(::StringW  value) ;

static inline ::UnityEngine::UI::AnimationTriggers* New_ctor() ;

/// @brief Method .ctor addr 0x2d50e88 size 0xd0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTriggers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationTriggers(AnimationTriggers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTriggers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationTriggers(AnimationTriggers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnimationTriggers()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::AnimationTriggers, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::AnimationTriggers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AnimationTriggers*, "UnityEngine.UI", "AnimationTriggers");
